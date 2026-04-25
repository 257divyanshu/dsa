#include <bits/stdc++.h>
using namespace std;

// 📍 ma'am approach 
// - TC -> O(s1Len * s2Len)
// - SC -> O(1)
// bool checkInclusion(string s1, string s2)
// {
//     vector<int> s1Hash(26, 0);
//     for (int i = 0; i < s1.length(); i++) // O(s1Len)
//     {
//         s1Hash[s1[i] - 'a']++;
//     };
//     for(int i = 0; i<s2.length(); i++){ // O(s2Len)
//         int windowIndex = 0;
//         int s2Index = i;
//         vector<int> s2Hash(26, 0);
//         while(windowIndex < s1.length() && s2Index < s2.length()){ // O(s1Len)
//             s2Hash[s2[s2Index] - 'a']++;
//             windowIndex++;
//             s2Index++;
//         };
//         bool isPermutation = true;
//         for(int j = 0; j<26; j++){
//             if(s1Hash[j] != s2Hash[j]){
//                 isPermutation = false;
//                 break;
//             };
//         };
//         if(isPermutation){
//             return true;
//         };
//     }
//     return false;
// }

// 🏆 my optimal approach (after intuition from ma'am's lecture)
// - TC -> O(s1Len + s2Len)
// - SC -> O(1)
bool checkInclusion(string s1, string s2)
{
    vector<int> s1Hash(26, 0);
    vector<int> s2Hash(26, 0);
    for (int i = 0; i < s1.length(); i++) // O(s1Len)
    {
        s1Hash[s1[i] - 'a']++;
    };
    int end = 0;
    int start = 0;
    while (end < s2.length()) // O(s2Len)
    {
        if (end - start > s1.length() - 1)
        {
            s2Hash[s2[start] - 'a']--;
            start++;
        }
        s2Hash[s2[end] - 'a']++;
        bool permutationPresent = true;
        if (end - start < s1.length() - 1)
        {
            end++;
            continue;
        }
        for (int i = 0; i < 26; i++) // O(26)
        {
            if (s2Hash[i] != s1Hash[i])
            {
                permutationPresent = false;
                break;
            }
        }
        if (permutationPresent)
        {
            return true;
        }
        end++;
    }
    return false;
}

// 📍 my first approach (refined) ✔️
// - TC -> O(s1Len + s2Len)
// - SC -> O(1)
// bool checkInclusion(string s1, string s2)
// {
//     unordered_map<char, int> s1HashMap; // SC -> O(26)
//     unordered_map<char, int> s2HashMap; // SC -> O(26)
//     unordered_set<char> s1Set; // SC -> O(26)
//     for (int i = 0; i < s1.length(); i++){ // TC -> O(s1.len)
//         s1Set.insert(s1[i]); // TC -> O(1)
//         s1HashMap[s1[i]]++;  // TC -> O(1)
//     };

//     // cout << "s1Set : " << endl;
//     // for (auto elem : s1Set)
//     // {
//     //     cout << elem << " ";
//     // }
//     // cout << endl
//     //      << endl;

//     // cout << "s1HashMap : " << endl;
//     // for (auto it : s1HashMap)
//     // {
//     //     cout << it.first << " " << it.second << endl;
//     // }
//     // cout << endl;

//     int end = 0;
//     int start = 0;
//     while (end < s2.length()) // O(s2.len)
//     {
//         // cout << "start = " << start << "; end = " << end << endl;
//         if (s1Set.count(s2[end]) == 0)
//         {
//             // cout << s2[end] << " not found in s1Set" << endl;
//             // cout << "clearing s1HashMap" << endl << endl;
//             s2HashMap.clear(); // O(26)
//             start = end + 1;
//         }
//         else
//         {
//             // cout << s2[end] << " found in s1Set" << endl;
//             if (end - start > s1.length() - 1)
//             {
//                 // cout << "end - start > s1.length() - 1" << endl;
//                 // cout << "s2HashMap[" << s2[start] << "] -> " << "old value : " << s2HashMap[s2[start]] << endl;
//                 s2HashMap[s2[start]]--;
//                 // cout << "s2HashMap[" << s2[start] << "] -> " << "new value : " << s2HashMap[s2[start]] << endl;
//                 start++;
//                 // cout << "incrementing start to " << start << endl;
//             }
//             s2HashMap[s2[end]]++; // O(1)
//             bool permutationPresent = true;
//             if(end - start < s1.length() - 1){
//                 // cout << "end - start < s1.length() - 1" << endl << endl;
//                 end++;
//                 continue;
//             }
//             else{
//                 // cout << "end - start == s1.length() - 1" << endl;
//             }
//             for (auto it : s1HashMap) // O(26)
//             {
//                 if (it.second != s2HashMap[it.first])
//                 {
//                     // cout << it.first << " -> " << it.second << " != " << s2HashMap[it.first] << endl;
//                     // cout << "permutation not present!" << endl << endl;
//                     permutationPresent = false;
//                     break;
//                 }
//                 else{
//                     // cout << it.first << " -> " << it.second << " == " << s2HashMap[it.first] << endl;
//                 }
//             }
//             if (permutationPresent)
//             {
//                 // cout << "permutation present!" << endl;
//                 return true;
//             }
//         }
//         end++;
//     }
//     return false;
// }

// 📍 first approaach ❌
// - fails at edgecase : s1 = "hello", s2 = "ooolleoooleh";
// bool checkInclusion(string s1, string s2)
// {

//     unordered_map <char, int> s1HashMap; // SC -> O(26)
//     unordered_map <char, int> s2HashMap; // SC -> O(26)
//     unordered_set <char> s1Set; // SC -> O(26)
//     for(int i = 0; i<s1.length(); i++){ // TC -> O(s1.len)
//         s1Set.insert(s1[i]); // TC -> O(1)
//         s1HashMap[s1[i]]++; // TC -> O(1)
//     };

//     cout << "s1Set : " << endl;
//     for(auto elem: s1Set){
//         cout << elem << " ";
//     }
//     cout << endl << endl;

//     cout << "s1HashMap : " << endl;
//     for(auto it: s1HashMap){
//         cout << it.first << " " << it.second << endl;
//     }
//     cout << endl;

//     for(int i = 0; i<s2.length(); i++){ // TC -> O(s2.len)
//         cout << "i = " << i << endl;
//         if(s1Set.count(s2[i]) == 0){
//             cout << s2[i] << " not found in s1Set" << endl;
//             cout << "clearing s1HashMap" << endl << endl;
//             s2HashMap.clear(); // TC -> O(s2.len)
//         }
//         else{
//             cout << s2[i] << " found in s1Set" << endl;
//             s2HashMap[s2[i]]++;
//             cout << "s2HashMap[" << s2[i] << "] updated to " << s2HashMap[s2[i]] << endl;
//             bool permutationPresent = true;
//             int permutationLengthInS2 = 0;
//             for(auto it : s1HashMap){ // TC -> O(s1.len)
//                 if(it.second > s2HashMap[it.first]){
//                     cout << it.first << " -> " << it.second << " > " << s2HashMap[it.first] << endl;
//                     permutationPresent = false;
//                     cout << "setting permutationPresent to false" << endl;
//                     break;
//                 }
//                 else {
//                     cout << it.first << " -> " << it.second << " <= " << s2HashMap[it.first] << endl;
//                     permutationLengthInS2 += s2HashMap[it.first];
//                 }
//             }
//             cout << endl;
//             if(permutationPresent){
//                 cout << "permutation found!" << endl;
//                 return true;
//             }
//         }
//     };
//     return false;
// }

int main()
{

    // 📍 given testcases
    // string s1 = "ab", s2 = "eidbaooo";
    // string s1 = "ab", s2 = "eidboaoo";

    // 📍 additional testcases
    // string s1 = "a", s2 = "a";
    // string s1 = "aa", s2 = "a";

    // 📍 edgecases
    string s1 = "hello", s2 = "ooolleoooleh";

    cout << endl
         << "s1 = " << s1 << "; s2 = " << s2 << endl
         << endl;
    cout << checkInclusion(s1, s2) << endl;

    // cout << "Hare Krishna" << endl;
    return 0;
};