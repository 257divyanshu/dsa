#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int,int> mmap1;
    mmap1.emplace(1,11);
    mmap1.emplace(1,12);
    mmap1.emplace(3,13);
    for(auto it: mmap1){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
};

// 📍 multimaps
// - similar to map
// - stores key-value pairs (with keys in sorted manner)
// - can store duplicate keys