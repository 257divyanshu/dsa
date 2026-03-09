#include <bits/stdc++.h>
using namespace std;

// 📍 see the latest three submissions of deeper information

// 📍 sir's approach
// int findPeakElement(vector<int> &nums)
// {
//     int n = nums.size();
//     if (n == 1)
//     {
//         return 0;
//     };
//     if(nums[0] > nums[1]){
//         return 0;
//     };
//     if(nums[n-1] > nums[n-2]){
//         return n-1;
//     };
//     int start = 1;
//     int end = nums.size() - 2;
//     while (start <= end) {
//         int mid = start + (end - start) / 2;
//         if((nums[mid-1]<nums[mid]) && (nums[mid]>nums[mid+1])){
//             return mid;
//         };
//         if((nums[mid-1]<nums[mid]) && (nums[mid]<nums[mid+1])){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         };
//     };
//     return -1;
// };

// 📍 my approach
int findPeakElement(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if ((mid == 0 || (nums[mid - 1] < nums[mid])) &&
            ((mid == nums.size() - 1) || (nums[mid] > nums[mid + 1])))
        {
            return mid;
        };
        if ((mid == 0 || (nums[mid - 1] < nums[mid])) && (nums[mid] < nums[mid + 1]))
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        };
    };
    return -1;
};

int main()
{
    // vector<int> nums = {1,2,3,4,5,6,7};
    // vector<int> nums = {2,3,4,5,6,7,1};
    // vector<int> nums = {3,4,5,6,7,2,1};
    // vector<int> nums = {4,5,6,7,3,2,1};
    // vector<int> nums = {5,6,7,4,3,2,1};
    // vector<int> nums = {6,7,5,4,3,2,1};
    // vector<int> nums = {7,6,5,4,3,2,1};
    // vector<int> nums = {1};
    // vector<int> nums = {1,2};
    vector<int> nums = {2, 1};
    cout << "peak is " << nums[findPeakElement(nums)] << endl;
    return 0;
};