#include <bits/stdc++.h>
using namespace std;

// 📍 my second approach
// 🏆 version 2
// TC -> O(n)
// SC -> O(n)
string frequencySort(string s)
{
    int n = s.length();
    vector<int> vect1(128, 0); // SC O(128)
    vector<pair<int, char>> vect2; // SC O(52)
    vect2.reserve(52);
    for (int i = 0; i < n; i++) // TC O(n)
    {
        vect1[s[i]]++;
    }
    for (int i = 0; i < 128; i++) // TC O(128)
    {
        if (vect1[i] > 0)
        {
            vect2.push_back({vect1[i], i});
        }
    }
    string result; // SC O(n)
    result.reserve(s.length());
    sort(vect2.begin(), vect2.end(), [](auto &a, auto &b)
         {
             return a.first > b.first; // descending frequency
         }); // O(m * log(m))
    for (int i = 0; i < vect2.size(); i++)
    { // TC O(m)
        result.append(vect2[i].first, vect2[i].second); // TC total O(n)
    }
    return result;
}
// 📍 my TC analysis
// - O(n * log(m)) (hashing into map1)s + O(m * log(m)) (hashing into map2) + O(m + n) (building the resultant string)
// 📍 my SC analysis
// - O(m) (map1) + O(m) (map2) + O(n) (result)
// string frequencySort(string s)
// {
//     int n = s.length();
//     map<char, int> map1; // SC O(m)
//     multimap<int, char> map2; // SC O(m)
//     for (int i = 0; i < n; i++) // TC O(n)
//     {
//         map1[s[i]]++; // O(log(m))
//     }
//     // cout << "map1 " << endl;
//     for (auto it : map1) // TC O(m)
//     {
//         // cout << it.first << " -> " << it.second << endl;
//         map2.emplace(it.second, it.first); // TC O(log(m))
//     }
//     // cout << endl;
//     // cout << "map2 " << endl;
//     // for (auto it : map2)
//     // {
//     //     cout << it.first << " -> " << it.second << endl;
//     // }
//     // cout << endl;
//     string result; // SC O(n)
//     result.reserve(s.length());
//     for (auto it = map2.rbegin(); it != map2.rend(); ++it) { // TC O(m)
//         for (int i = 0; i < (it->first); i++) // TC total O(n)
//         {
//             result.push_back(it->second);
//         }
//     }
//     return result;
// }

// 📍 my first approach ✔️
// - TC -> O(n * log(n))
// - SC -> O(n)
// 📍 version 2
// 📍 my TC analysis
// - n -> length of string s
// - m -> no. of unique characters
// - O(n * log(n)) (sorting) + O(n + m) (for loop that involves hashing) + O(m * log(m)) (sorting the hashVect) + O(m + n) (building the resultant string)
// - total -> O( (n * log(n)) + O(m * log(m)) + (n + m) + (n + m) )
// - since m <= 52, total -> O(n * log(n))
// 📍 my SC analysis
// - n -> length of string s
// - m -> no. of unique characters
// - O(m) (hashVect) + O(n) (resultant string)
// - total -> O(n)
// string frequencySort(string s)
// {
//     int n = s.length();
//     vector<pair<int, char>> hashVect;
//     sort(s.begin(), s.end()); // TC O(n * log(n))
//     int i = 1;
//     int counter = 1;
//     for (int i = 1; i < n; i++) // O(n)
//     {
//         if (s[i] != s[i - 1])
//         {
//             hashVect.push_back({counter, s[i - 1]});
//             counter = 1;
//         }
//         else
//         {
//             counter++;
//         }
//     }
//     hashVect.push_back({counter, s[n - 1]});
//     string result; // SC O(n)
//     result.reserve(n);
//     sort(hashVect.begin(), hashVect.end(), [](auto &a, auto &b)
//          {
//              return a.first < b.first;             // ascending frequency
//          });                                       // O(m * log(m)) (since m <= 52, O(m * log(m)) ~ O(1))
//     for (int j = hashVect.size() - 1; j >= 0; j--) // TC O(m)
//     {
//         result.append(hashVect[j].first, hashVect[j].second); // total TC O(n)
//     }
//     return result;
// }
// 📍 version 1
// - TC -> O(n * log(n))
// - SC -> O(n)
// 📍 my TC analysis
// - n -> length of string s
// - m -> no. of unique characters
// - O(n * log(n)) (sorting) + O(n + m * log(m)) (while loop that involves hashing) + O(log(m)) (hashing the last character) + O(m + n) (building the resultant string)
// - total -> O( (n * log(n)) + n + (m * log(m)) + log(m) + m + n)
// - since m <= 52, total -> O(n * log(n))
// 📍 my SC analysis
// - n -> length of string s
// - m -> no. of unique characters
// - O(m) (hashmap) + O(n) (resultant string)
// - total -> O(n)
// string frequencySort(string s)
// {
//     int n = s.length();
//     multimap<int,char> hashmap; // SC O(1) bound by 52 (26 lowercase letters + 26 uppercase letters)
//     sort(s.begin(), s.end()); // TC O(n * log(n))
//     int i = 1;
//     int counter = 1;
//     while(i < n){ // TC O(n)
//         if(s[i] != s[i-1]){
//             hashmap.emplace(counter,s[i-1]); // total TC O(m * log(m))
//             counter = 1;
//         }
//         else{
//             counter++;
//         }
//         i++;
//     }
//     hashmap.emplace(counter, s[n-1]); // TC O(log(m))
//     string result; // SC O(n)
//     result.reserve(s.length());
//     for (auto it = hashmap.rbegin(); it != hashmap.rend(); ++it) { // O(m)
//         for(int i = 0; i<(it->first); i++){ // total TC O(n)
//             result.push_back(it->second);
//         }
//     }
//     return result;
// }
int main()
{
    string s = "tree";
    cout << "result : " << frequencySort(s) << endl;
    return 0;
};