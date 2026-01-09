#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 📍 creating a pair of integers
    // pair<int,int> pair1 = {1,3};
    // cout<<pair1.first<<endl;
    // cout<<pair1.second<<endl;
    // 📍 creating a pair of (a) a pair (of integers) and (b) an integer
    // pair<pair<int,int>,int> pair1 = {{1,2},3};
    // cout<<pair1.first.first<<endl;
    // cout<<pair1.first.second<<endl;
    // cout<<pair1.second<<endl;
    // 📍 creating an array of pairs
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[0].second<<endl;
    return 0;
};

// - pairs are a part of utility library