#include <bits/stdc++.h>
using namespace std;

// 📍 subarray
// - A subarray is a contiguous non-empty sequence of elements within an array.

// 📍 if the interviewer wants us to print the subarray
int maxSubArray(vector<int> &nums)
{
    int start = 0;
    int end = 0;
    int maximumSum = -10001;
    int currentSum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(currentSum == 0){
            start = i;
        };
        currentSum += nums[i];
        if(currentSum > maximumSum){
            maximumSum = currentSum;
            end = i;
        }
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << "start = " << start << "; end = " << end << endl;
    return maximumSum;
}

// 📍 optimal method (mine) (used the intution of LONGEST SUBARRAY WITH SUM K (containing negatives as well))
// - TC -> O(n)
// - SC -> O(1)
// int maxSubArray(vector<int> &nums)
// {
//     int maximumSum = -10001;
//     int currentSum = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         // 📍 iteration 1
//         // ⚠️ fails at [1,2]
//         // if (nums[i] > currentSum)
//         // {
//         //     currentSum = nums[i];
//         // }
//         // else
//         // {
//         //     currentSum += nums[i];
//         // }
//         // maximumSum = max(currentSum, maximumSum);
//         // 📍 iteration 2
//         // if (currentSum < 0 && nums[i] > currentSum)
//         // {
//         //     currentSum = nums[i];
//         // }
//         // else
//         // {
//         //     currentSum += nums[i];
//         // }
//         // maximumSum = max(currentSum, maximumSum);
//         // 📍 optimal iteration
//         currentSum += nums[i];
//         if(currentSum > maximumSum){
//             maximumSum = currentSum;
//         }
//         if(currentSum < 0){
//             currentSum = 0;
//         }
//     }
//     return maximumSum;
// }

// 📍 bruteforce method
// - TC -> O(n^2)
// - SC -> O(1)
// int maxSubArray(vector<int> &nums)
// {
//     int maximumSum = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         int currentSum = 0;
//         for (int j = i; j < nums.size(); j++)
//         {
//             currentSum += nums[j];
//             maximumSum = max(maximumSum, currentSum);
//         }
//     }
//     return maximumSum;
// }

int main()
{
    // vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    // vector<int> nums = {1};
    // vector<int> nums = {5, 4, -1, 7, 8};
    vector<int> nums = {-2,-3,4,-1,-2,1,5,-3};
    cout << maxSubArray(nums) << endl;
    return 0;
};