#include <bits/stdc++.h>
using namespace std;

// 📍 optimal method
// - using XOR operator
// - TC -> O(n)
// - SC -> O(1)

// 📍 bruteforce method
// - TC -> O(n)
// - SC -> O(n)
int singleNumber(vector<int> &nums)
{
    int result = 30001;
    unordered_map<int,int> map1;
    // 📝 map1[x] returns 0, if x does not exist in the map
    for(int num : nums){
        map1[num]++;
    };
    for(auto it : map1){
        if(it.second == 1){
            result = it.first;
            break;
        };
    };
    return result;
};

int main()
{
    vector<int> nums = {1,1,2,2,3,3,4};
    cout << singleNumber(nums) << endl;
    return 0;
};