#include <bits/stdc++.h>
using namespace std;

// 📍 MIK sir's approach 
// TC -> O(n)
// SC -> O(1)
bool isIsomorphic(string s, string t){
    unordered_map<char,char> mapStoT; // SC O(1)
    unordered_map<char,char> mapTtoS; // SC O(1)
    for(int i = 0; i<s.length(); i++){ // TC O(n)
        if(mapStoT.find(s[i]) == mapStoT.end()){ // TC O(1)
            mapStoT[s[i]] = t[i];
        }
        else if (mapStoT[s[i]] != t[i]){
            return false; // TC O(1)
        }
        if(mapTtoS.find(t[i]) == mapTtoS.end()){ // TC O(1)
            mapTtoS[t[i]] = s[i]; // TC O(1)
        }
        else if (mapTtoS[t[i]] != s[i]){
            return false;
        }
    }
    return true;
}

// 📍 third approach 
// bool isIsomorphic(string s, string t){
//     vector<int> vectStoT(128,-1); // SC O(1)
//     vector<int> vectTtoS(128,-1); // SC O(1)
//     for(int i = 0; i<s.length(); i++){ // TC (O(n))
//         if(vectStoT[s[i]] == -1){
//             vectStoT[s[i]] = t[i];
//         }
//         else if(vectStoT[s[i]] != t[i]){
//             return false;
//         }
//         if(vectTtoS[t[i]] == -1){
//             vectTtoS[t[i]] = s[i];
//         }
//         else if(vectTtoS[t[i]] != s[i]){
//             return false;
//         }
//     }
//     return true;
// }

// 📍 second approach ✔️
// TC -> O(n)
// SC -> O(1) (bounded by constant 128)
// - bounded by constant 128 means : size cannot grow beyond 128, no matter how big the input string is
// bool isIsomorphic(string s, string t)
// {
//     unordered_map<char, char> umap; // SC O(1)
//     unordered_set<char> uset; // SC O(1)
//     for (int i = 0; i < s.length(); i++) { // TC O(sLen)
//         auto it = umap.find(s[i]); // TC O(1)
//         if (it == umap.end())
//         {
//             if (uset.find(t[i]) != uset.end()) // TC O(1)
//             {
//                 return false;
//             }
//             else
//             {
//                 umap[s[i]] = t[i]; // TC O(1)
//                 uset.insert(t[i]); // TC O(1)
//             }
//         }
//         else if (umap[s[i]] != t[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }

// 📍 first approach ❌
// - two strings of different length cannot be isomorphic
// - build a hashmap while iterating over both the strings together, if any of the string violates the mapping, they aren't isomorphic
// bool isIsomorphic(string s, string t)
// {
//     if(s.length() != t.length()){
//         return false;
//     }
//     unordered_map<char, char> umap; // SC O(sLen)
//     for(int i = 0; i<s.length(); i++){ // TC O(sLen)
//         auto it = umap.find(s[i]); // TC O(1)
//         if(it == umap.end()){
//             umap[s[i]] = t[i];
//         }
//         else if (umap[s[i]] != t[i]){
//             return false;
//         }
//     }
//     return true;
// }
// 📍 flaw
// - missed the case 'when two characters map to the same character'
// - its mentioned in the question that 'no two characters may map to the same character'
// - we used unordered_map<char,char>, it guranteed that we don't have 'many to one mapping'
// - but it doesn't guarantee that we don't have 'one to many mapping'
// - so, we kind of need both the keys and the values to be unique (one to one mapping)
// - to guarantee that we don't have 'one to many mapping', we can use unordered set

int main()
{
    unordered_map<char, char> umap;
    cout << "umap['a'] " << "|" << umap['a'] << "|" << endl;
    return 0;
};