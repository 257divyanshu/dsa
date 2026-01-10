#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> umap1;
    umap1.emplace(1,11);
    umap1.emplace(2,12);
    umap1.emplace(3,13);
    umap1.emplace(5,15);
    umap1.emplace(4,14);
    for(auto it: umap1){
        cout << it.first << " " << it.second << endl;
    }
    return 0;
};

// 📍 time complexity
// - generally O(1)
// - worst case O(N)

// 📍 unordered maps
// - stores key-value pairs (with unique keys)
// - doesn't store the keys in sorted manner