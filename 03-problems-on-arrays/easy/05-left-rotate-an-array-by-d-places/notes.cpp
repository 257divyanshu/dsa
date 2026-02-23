#include <bits/stdc++.h>
using namespace std;

// 📍 bruteforce approach
// - TC -> O(2n-k)
// - SC -> O(n-k)
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    vector<int> temp(n-k,0);
    cout << "starting the first loop" << endl;
    for (int i = 0; i < n - k; i++)
    { // O(n-k)
        temp[i] = nums[i];
    };
    cout << "loop one done" << endl;
    for (int i = n - k; i < n; i++)
    { // O(k)
        nums[i - n + k] = nums[i];
    };
    cout << "loop two done" << endl;
    for (int i = k; i < n; i++)
    { // O (n-k)
        nums[i] = temp[i - k];
    };
    cout << "loop three done" << endl;
};

// 📍 optimal approach
// - TC -> O(n); (more precisely : O(2n))
// - SC -> O(1);
// void rotate(vector<int> &nums, int k)
// {
//     int n = nums.size();
//     k = k % n;
//     reverse(nums.begin(), nums.begin() + n - k);
//     reverse(nums.begin() + n - k, nums.end());
//     reverse(nums.begin(), nums.end());
// }

int main()
{
    vector<int> nums {1,2,3,4,5,6,7};
    int k = 3;
    cout << "starting" << endl;
    rotate(nums,k);
    for(auto num : nums){
        cout << num << endl;
    }
    cout << "ending" << endl;
    return 0;
};