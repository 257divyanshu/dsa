#include <bits/stdc++.h>
using namespace std;

// 📍 my approach (after Nikil Lohia's intuition)
// TC -> O(n^2)
// SC -> O(1)
// Ⓜ️ tc-analysis-2.md
// 📍 version 2 (micro-optimized version)
// Ⓜ️ lambda-functions.md
string longestPalindrome(string s)
{
    int longestPalindromeStart = -1;
    int longestPalindromeLength = 0;
    int n = s.length();
    auto expand = [&](int left, int right)
    {
        while ((left > -1) && (right < n) && (s[left] == s[right]))
        {
            int currentPalindromeLength = right - left + 1;
            if (currentPalindromeLength > longestPalindromeLength)
            {
                longestPalindromeStart = left;
                longestPalindromeLength = currentPalindromeLength;
            };
            left--;
            right++;
        };
    };
    for (int i = 0; i < n; i++)
    {
        // odd length
        expand(i, i);
        if ((i + 1 < n) && s[i + 1] == s[i])
        {
            // even length;
            expand(i, i + 1);
        }
    };
    return s.substr(longestPalindromeStart, longestPalindromeLength);
};
// 📍 version 1
// string longestPalindrome(string s)
// {
//     int longestPalindromeStart = -1;
//     int longestPalindromeLength = 0;
//     int n = s.length();
//     for (int i = 0; i < n; i++)
//     {
//         int left = i;
//         int right = i;
//         while ((left > -1) && (right < n) && (s[left] == s[right]))
//         {
//             int currentPalindromeLength = right - left + 1;
//             if (currentPalindromeLength > longestPalindromeLength)
//             {
//                 longestPalindromeStart = left;
//                 longestPalindromeLength = currentPalindromeLength;
//             };
//             left--;
//             right++;
//         };
//         if ((i + 1 < n) && s[i + 1] == s[i])
//         {
//             left = i;
//             right = i + 1;
//         }
//         while ((left > -1) && (right < n) && (s[left] == s[right]))
//         {
//             int currentPalindromeLength = right - left + 1;
//             if (currentPalindromeLength > longestPalindromeLength)
//             {
//                 longestPalindromeStart = left;
//                 longestPalindromeLength = currentPalindromeLength;
//             };
//             left--;
//             right++;
//         };
//     };
//     return s.substr(longestPalindromeStart, longestPalindromeLength);
// };

// 📍 MIK sir's second approach (recursion + memoization)
// - TC -> O(n^2)
// - SC -> O(n)
// 📍 TC EXPLANATION
// - Ⓜ️ tc-analysis-1.md
// - Even though we are performing the isPalindrome check inside nested loops (one outer and one inner), the total no. of palindrome checks performed is restricted to O(n^2) (due to memoization). Since each isPadlindrome check is O(1) operation (excluding recursive subproblem), the total TC is restricted to O(n^2).
// 📍 SC EXPLANATION
// - If we have a string of length n, the first recursive call is for the string of length n, the next recursive call is for the string of length n-2, the next recursive call is for the string of length n-4, the next recursive call is for the string of length n-6, this goes on until the start crosses end. So there will be n/2 recursive calls in total, which results is O(n) space for recursion stack.
// int t[1001][1001];
// bool isPalindrome(string &s, int start, int end)
// {
//     if (start >= end)
//     {
//         return true;
//     }
//     if (t[start][end] != -1)
//     {
//         return t[start][end];
//     }
//     if (s[start] == s[end])
//     {
//         return t[start][end] = isPalindrome(s, start+1, end-1);
//     }
//     return t[start][end] = false;
// }
// string longestPalindrome(string s)
// {
//     if (s.length() == 1)
//     {
//         return s;
//     }
//     memset(t, -1, sizeof(t));
//     int startingPoint = 0;
//     int longestPalindromeLength = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         for (int j = i; j < s.length(); j++)
//         {
//             if (isPalindrome(s, i, j))
//             {
//                 int currentPalindromeLength = j - i + 1;
//                 if (currentPalindromeLength > longestPalindromeLength)
//                 {
//                     longestPalindromeLength = currentPalindromeLength;
//                     startingPoint = i;
//                 }
//             }
//         }
//     }
//     return s.substr(startingPoint, longestPalindromeLength);
// }

// 📍 MIK sir's first approach
// bool isPalindrome(string &s, int start, int end)
// {
//     if(start >= end){
//         return true;
//     }
//     else{
//         if(s[start] == s[end]){
//             return isPalindrome(s, start+1, end-1);
//         }
//         else{
//             return false;
//         }
//     }
// }
// string longestPalindrome(string s)
// {
//     if(s.length() == 1){
//         return s;
//     }
//     int startingPoint = 0;
//     int longestPalindromeLength = 0;
//     for(int i = 0; i<s.length(); i++){
//         for(int j = i; j<s.length(); j++){
//             if(isPalindrome(s,i,j)){
//                 int currentPalindromeLength = j-i+1;
//                 if(currentPalindromeLength > longestPalindromeLength){
//                     longestPalindromeLength = currentPalindromeLength;
//                     startingPoint = i;
//                 }
//             }
//         }
//     }
//     return s.substr(startingPoint, longestPalindromeLength);
// }

// 📍 recursive palindrome check
// bool isPalindrome(string &s, int start, int end)
// {
//     if(start >= end){
//         return true;
//     }
//     else{
//         if(s[start] == s[end]){
//             return isPalindrome(s, start+1, end-1);
//         }
//         else{
//             return false;
//         }
//     }
// }

// 📍 iterative palindrome check
// bool isPalindrome(string &s, int start, int end)
// {
//     while (start <= end)
//     {
//         if (s[start++] != s[end--])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// 📍 my second approach (TLE on a testcase having long string s)
// bool isPalindrome(string &s, int start, int end)
// {
//     while (start <= end)
//     {
//         if (s[start++] != s[end--])
//         {
//             return false;
//         }
//     }
//     return true;
// }
// void helper(pair<int, int> &longestPalindromeIndices, int &longestPalindromeLength, string &s, int start, int end)
// {
//     // cout << "helper called for start = " << start << "; end = " << end << endl;
//     // for (int i = start; i <= end; i++)
//     // {
//     //     cout << s[i];
//     // }
//     // cout << endl;
//     if (start <= end)
//     {
//         // cout << "start<=end" << endl;
//         if (isPalindrome(s, start, end))
//         // cout << "isPalindrome" << endl;
//         {
//             int currentPalindromeLength = end - start + 1;
//             if (currentPalindromeLength > longestPalindromeLength)
//             {
//                 // cout << "updating longestPalindromeLength and longestPalindromeIndices" << endl;
//                 longestPalindromeLength = currentPalindromeLength;
//                 longestPalindromeIndices.first = start;
//                 longestPalindromeIndices.second = end;
//             }
//             // cout << endl;
//         }
//         else
//         {
//             // cout << "isNotPalindrome" << endl << endl;
//             helper(longestPalindromeIndices, longestPalindromeLength, s, start + 1, end);
//             helper(longestPalindromeIndices, longestPalindromeLength, s, start, end - 1);
//         }
//     }
// }
// string longestPalindrome(string s)
// {
//     if (s.length() == 1)
//     {
//         return s;
//     }
//     pair<int, int> longestPalindromeIndices = {0, 0};
//     int longestPalindromeLength = 1;
//     helper(longestPalindromeIndices, longestPalindromeLength, s, 0, s.length() - 1);
//     return s.substr(longestPalindromeIndices.first, longestPalindromeIndices.second - longestPalindromeIndices.first + 1);
// }

// 📍 my first approach
// TC -> O(n^3)
// SC -> O(n) (for returning the answer) (O(1) auxiliary space)
// bool isPalindrome(string &s, int start, int end){
//     while(start<=end){
//         if(s[start++] != s[end--]){
//             return false;
//         }
//     }
//     return true;
// }
// string longestPalindrome(string s)
// {
//     if(s.length() == 1){
//         return s;
//     }
//     pair<int,int> longestPalindromeIndices = {0,0};
//     int longestPalindromeLength = 1;
//     for(int i = 0; i<s.length(); i++){
//         for(int j = i+1; j<s.length(); j++){
//             if(isPalindrome(s,i,j)){
//                 int currentPalindromeLength = j-i+1;
//                 if(currentPalindromeLength > longestPalindromeLength){
//                     longestPalindromeLength = currentPalindromeLength;
//                     longestPalindromeIndices.first = i;
//                     longestPalindromeIndices.second = j;
//                 }
//             }
//         }
//     }
//     return s.substr(longestPalindromeIndices.first, longestPalindromeIndices.second - longestPalindromeIndices.first + 1);
// }

int main()
{
    // string s = "babad";
    string s = "jrjnbctoqgzimtoklkxcknwmhiztomaofwwzjnhrijwkgmwwuazcowskjhitejnvtblqyepxispasrgvgzqlvrmvhxusiqqzzibcyhpnruhrgbzsmlsuacwptmzxuewnjzmwxbdzqyvsjzxiecsnkdibudtvthzlizralpaowsbakzconeuwwpsqynaxqmgngzpovauxsqgypinywwtmekzhhlzaeatbzryreuttgwfqmmpeywtvpssznkwhzuqewuqtfuflttjcxrhwexvtxjihunpywerkktbvlsyomkxuwrqqmbmzjbfytdddnkasmdyukawrzrnhdmaefzltddipcrhuchvdcoegamlfifzistnplqabtazunlelslicrkuuhosoyduhootlwsbtxautewkvnvlbtixkmxhngidxecehslqjpcdrtlqswmyghmwlttjecvbueswsixoxmymcepbmuwtzanmvujmalyghzkvtoxynyusbpzpolaplsgrunpfgdbbtvtkahqmmlbxzcfznvhxsiytlsxmmtqiudyjlnbkzvtbqdsknsrknsykqzucevgmmcoanilsyyklpbxqosoquolvytefhvozwtwcrmbnyijbammlzrgalrymyfpysbqpjwzirsfknnyseiujadovngogvptphuyzkrwgjqwdhtvgxnmxuheofplizpxijfytfabx";
    cout << longestPalindrome(s) << endl;
    return 0;
};