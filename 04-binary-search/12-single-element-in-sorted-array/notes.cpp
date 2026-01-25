#include <bits/stdc++.h>
using namespace std;

// 📍 sir's approach
int singleNonDuplicate(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (
            (mid == 0 || nums[mid - 1] != nums[mid]) &&
            (mid == (nums.size() - 1) || nums[mid] != nums[mid + 1]))
        {
            return nums[mid];
        };
        if (mid % 2 == 0)
        { // mid is at even index
            if (nums[mid] == nums[mid + 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            };
        }
        else
        { // mid is at odd index
            if (nums[mid] == nums[mid + 1])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            };
        }
        // if(
        //     ((mid%2==0) && nums[mid-1]==nums[mid])
        //     ||
        //     ((mid%2!=0) && nums[mid-1]!=nums[mid])
        // ){
        //     end = mid - 1;
        // }
        // else{
        //     start = mid + 1;
        // };
    };
    return -1;
};

// 📍 my approach
// int singleNonDuplicate(vector<int> &nums)
// {
//     int start = 0;
//     int end = nums.size() - 1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (
//             (mid == 0 || nums[mid - 1] != nums[mid]) &&
//             (mid == (nums.size() - 1) || nums[mid] != nums[mid + 1]))
//         {
//             return nums[mid];
//         };
//         if (
//             ((mid % 2 == 0) && nums[mid - 1] == nums[mid]) ||
//             ((mid % 2 != 0) && nums[mid - 1] != nums[mid]))
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         };
//     };
//     return -1;
// };

int main()
{

    return 0;
};