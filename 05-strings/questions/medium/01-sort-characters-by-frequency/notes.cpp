#include <bits/stdc++.h>
using namespace std;

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
string frequencySort(string s)
{
    int n = s.length();
    vector<pair<int, char>> hashVect;
    sort(s.begin(), s.end()); // TC O(n * log(n))
    int i = 1;
    int counter = 1;
    for (int i = 1; i < n; i++) // O(n)
    {
        if (s[i] != s[i - 1])
        {
            hashVect.push_back({counter, s[i - 1]});
            counter = 1;
        }
        else
        {
            counter++;
        }
    }
    hashVect.push_back({counter, s[n - 1]});
    string result; // SC O(n)
    result.reserve(n);
    sort(hashVect.begin(), hashVect.end(), [](auto &a, auto &b)
         {
             return a.first < b.first; // ascending frequency
         }); // O(m * log(m)) (since m <= 52, O(m * log(m)) ~ O(1))
    for (int j = hashVect.size() - 1; j >= 0; j--) // TC O(m)
    {
        result.append(hashVect[j].first, hashVect[j].second); // total TC O(n)
    }
    return result;
}
// 📍 version 1
// - TC -> O(n * log(n))
// - SC -> O(n)
// 📍 my TC analysis
// - n -> length of string s
// - m -> no. of unique characters
// - O(n * log(n)) (sorting) + O(n + m * log(m)) (while loop that involves hashing) + O(log(m)) (hashing the last character) + O(m + n) (building the resultant string)
// - total -> O( (n * log(n)) + (m * log(m)) )
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

    return 0;
};