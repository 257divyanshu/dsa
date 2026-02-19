#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 📍 creating a map
    // map<int,int> map1;
    // map<pair<int,int>,int> map2;
    // 📍 inserting key-value pairs
    // map<int,int> map1;
    // map1[1] = 11;
    // map1[2] = 12;
    // map1.emplace(3,13); // valid
    // // map1.emplace({3,13}); // invalid
    // map1.insert({4,14});
    // 📍 iterating over a map
    // map<int,int> map1;
    // map1[1] = 11;
    // map1[2] = 12;
    // map1.emplace(3,13);
    // map1.insert({4,14});
    // for(auto it: map1){
    //     cout << it.first << " " << it.second << endl;
    // }
    // 📍 find() 
    // - returns an iterator pointing to the provided key
    // - if the specified key doesn't exist, it returns an iterator pointing to map1.end()
    map<int,int> map1;
    map1[1] = 11;
    map1[2] = 12;
    map1.emplace(3,13);
    map1.insert({4,14});
    auto it3 = map1.find(3);
    cout<<(*it3).second<<endl; // 13
    return 0;
};

// 📍 time complexity
// - O(log(N))

// 📍 maps
// - stores key value pairs (with unique keys is sorted manner) 
// - key can be of any datatype
// - rest of the functions like : erase, swap, size, empty are same