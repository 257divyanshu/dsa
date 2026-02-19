#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> uset1;
    uset1.emplace(3);
    uset1.emplace(2);
    uset1.emplace(3);
    uset1.emplace(4);
    uset1.emplace(1);
    for(auto elem : uset1){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
};

// 📍 complexities
// - everything happens in O(1)
// - only lower_bound() and upper_bound() do not work on unordered sets
// - in the worst case -> O(N)

// 📍 unordered sets
// - stores unique elements
// - but not in sorted manner