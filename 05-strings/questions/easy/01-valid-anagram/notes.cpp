#include <bits/stdc++.h>
using namespace std;

// 🏆 MIK sir's second approach
// - TC -> O(n)
// - SC -> O(1)
bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
    {
        return false;
    }
    vector<int> freq(26, 0); // SC O(26)
    for (char character : s)
    { // TC O(n)
        freq[character - 'a']++;
    }
    for (char character : t)
    { // TC O(n)
        freq[character - 'a']--;
    }
    for (int frequency : freq)
    { // TC O(26)
        if (frequency != 0)
        {
            return false;
        }
    }
    return true;
}

// 📍 MIK sir's first approach
// - TC -> O(n*log(n))
// - SC -> O(log(n))
// bool isAnagram(string s, string t)
// {
//     if (s.length() != t.length())
//     {
//         return false;
//     }
//     sort(s.begin(), s.end()); // TC O(n*log(n)) SC O(log(n)) (recursion stack)
//     sort(t.begin(), t.end()); // TC O(n*log(n)) SC O(log(n)) (recursion stack)
//     if (s == t)
//     { // TC O(n)
//         return true;
//     }
//     return false;
// }

// 📍 my third approach ✔️
// - TC -> O(n) (more precisely O(2*n + k)) where k is the number of unique characters in the hashMap
// - SC -> O(1)
// bool isAnagram(string s, string t)
// {
//     if (s.length() != t.length())
//     {
//         return false;
//     }
//     unordered_map<char, int> hashMap;
//     for (char character : s) // TC O(n)
//     {
//         hashMap[character]++;
//     };
//     for (char character : t) // TC O(n)
//     {
//         hashMap[character]--;
//     };
//     for (const auto &pair : hashMap) // TC O(k) where k is the number of unique characters in the hashMap, in worst case k = 2 * n
//     {
//         if (pair.second != 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// 📍 my second approach ✔️
// - TC -> O(sLen + 2*tLen)
// - SC -> O(sLen + tLen)
// bool isAnagram(string s, string t)
// {
//     unordered_map<char, int> mapS;
//     unordered_map<char, int> mapT;
//     for (char character : s) // O(sLen)
//     {
//         mapS[character]++;
//     };
//     for (char character : t) // O(tLen)
//     {
//         mapT[character]++;
//     };
//     if (s.length() != t.length())
//     {
//         return false;
//     }
//     else
//     {
//         for (const auto &pair : mapT) // O(tLen)
//         {
//             if (pair.second != mapS[pair.first])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// 📍 my first approach ✔️
// bool isAnagram(string s, string t)
// {
//     unordered_map<char, int> mapS;
//     unordered_map<char, int> mapT;
//     for (char character : s)
//     {
//         mapS[character]++;
//     };
//     for (char character : t)
//     {
//         mapT[character]++;
//     };
//     if (s.length() > t.length())
//     {
//         for (const auto &pair : mapS)
//         {
//             if (pair.second != mapT[pair.first])
//             {
//                 return false;
//             }
//         }
//     }
//     else
//     {
//         for (const auto &pair : mapT)
//         {
//             if (pair.second != mapS[pair.first])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

int main()
{
    unordered_map<char, int> umap;
    umap['a']++;
    umap['b']++;
    umap['c']++;
    for (const auto &keyValuePair : umap)
    {
        cout << keyValuePair.first << " -> " << keyValuePair.second << endl;
    }
    umap['a']--;
    cout << "after updation" << endl;
    for (const auto &keyValuePair : umap)
    {
        cout << keyValuePair.first << " -> " << keyValuePair.second << endl;
    }
    return 0;
};