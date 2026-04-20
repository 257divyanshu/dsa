#include <bits/stdc++.h>
using namespace std;

// 📍 first approach ✔️
bool checkInclusion(string s1, string s2)
{
    unordered_map<char, int> s1HashMap; // SC -> O(26)
    unordered_map<char, int> s2HashMap; // SC -> O(26)
    unordered_set<char> s1Set; // SC -> O(26)
    for (int i = 0; i < s1.length(); i++){ // TC -> O(s1.len) 
        s1Set.insert(s1[i]); // TC -> O(1)
        s1HashMap[s1[i]]++;  // TC -> O(1)
    };

    cout << "s1Set : " << endl;
    for (auto elem : s1Set)
    {
        cout << elem << " ";
    }
    cout << endl
         << endl;

    cout << "s1HashMap : " << endl;
    for (auto it : s1HashMap)
    {
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;

    int end = 0;
    int start = 0;
    while (end < s2.length())
    {
        cout << "start = " << start << "; end = " << end << endl;
        if (s1Set.count(s2[end]) == 0)
        {
            cout << s2[end] << " not found in s1Set" << endl;
            cout << "clearing s1HashMap" << endl << endl;
            s2HashMap.clear();
            start = end + 1;
        }
        else
        {
            cout << s2[end] << " found in s1Set" << endl;
            if (end - start == s1.length())
            {
                cout << "end - start == " <<  s1.length() << endl;
                cout << "s2HashMap[" << s2[start] << "] -> " << "old value : " << s2HashMap[s2[start]] << endl; 
                s2HashMap[s2[start]]--;
                cout << "s2HashMap[" << s2[start] << "] -> " << "new value : " << s2HashMap[s2[start]] << endl; 
                start++;
                cout << "incrementing start to " << start << endl;
            }
            s2HashMap[s2[end]]++;
            bool permutationPresent = true;
            for (auto it : s1HashMap)
            {
                // cout << "it.first -> " << it.first << endl;
                // cout << "it.second -> " << it.second << endl;
                // cout << "s2HashMap[it.first] -> " << s2HashMap[it.first] << endl;
                if (it.second != s2HashMap[it.first])
                {
                    cout << it.first << " -> " << it.second << " != " << s2HashMap[it.first] << endl;
                    cout << "permutation not present!" << endl << endl;
                    permutationPresent = false;
                    break;
                }
                else{
                    cout << it.first << " -> " << it.second << " == " << s2HashMap[it.first] << endl;       
                }
            }
            if (permutationPresent)
            {
                cout << "permutation present!" << endl;
                return true;
            }
        }
        end++;
    }
    return false;
}

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