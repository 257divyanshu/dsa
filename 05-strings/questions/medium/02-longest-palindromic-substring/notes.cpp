#include <bits/stdc++.h>
using namespace std;
// 📍 MIK sir's second approach (recursion + memoization)
int t[1001][1001];
bool isPalindrome(string &s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (t[start][end] != -1)
    {
        return t[start][end];
    }
    if (s[start] == s[end])
    {
        return t[start][end] = isPalindrome(s, start+1, end-1);
    }
    return t[start][end] = false;
}
string longestPalindrome(string s)
{
    if (s.length() == 1)
    {
        return s;
    }
    memset(t, -1, sizeof(t));
    int startingPoint = 0;
    int longestPalindromeLength = 0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            if (isPalindrome(s, i, j))
            {
                int currentPalindromeLength = j - i + 1;
                if (currentPalindromeLength > longestPalindromeLength)
                {
                    longestPalindromeLength = currentPalindromeLength;
                    startingPoint = i;
                }
            }
        }
    }
    return s.substr(startingPoint, longestPalindromeLength);
}

// 📍 MIK sir's first approach
// bool isPalindrome(string &s, int start, int end)
// {
//     if(start >= end){
//         return true;
//     }
//     else{
//         if(s[start] == s[end]){
//             return isPalindrome(s, start++, end--);
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
//             return isPalindrome(s, start++, end--);
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