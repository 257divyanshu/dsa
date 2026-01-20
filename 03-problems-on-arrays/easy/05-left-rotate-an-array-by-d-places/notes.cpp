#include <bits/stdc++.h>
using namespace std;

// 📍 bruteforce approach
// - TC -> O(n+k)
// - SC -> O(n) (more precisely : O(k))
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    k = k % n;
    k = n - k;
    vector<int> temp(0);
    for(int i = 0; i < k; i++){ // O(k)
        temp[i] = nums[i];
    };
    for(int i = k; i < n; i++){ // O(n - k)
        nums[i-k] = nums[k];
    };
    for(int i = n - k; i < n; i++){ // O (k)
        nums[i] = temp[i - n + k];
    };
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

    return 0;
};