#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> ms1;
    ms1.emplace(4);
    ms1.emplace(3);
    ms1.emplace(4);
    ms1.emplace(5);
    ms1.emplace(4);
    ms1.emplace(2);
    ms1.emplace(4);
    cout<<ms1.count(4)<<endl; // 4
    ms1.erase(ms1.find(4)); // will delete only the first 4
    cout<<ms1.count(4)<<endl; // 3
    ms1.erase(4); // will delete all the 4s
    cout<<ms1.count(4)<<endl; // 0
    return 0;
};

// 📍 multisets
// - stores elements in sorted manner
// - can contain duplicates