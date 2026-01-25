#include <bits/stdc++.h>
using namespace std;

// 🏆 approach 2

// 📍 approach 2 (optimal approach)
// - TC -> O(log2(n))
// - SC -> O(1)
int findMin(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    int minElem = INT32_MAX;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[start] <= nums[end]) // 📝 optional optimization
        {
            if (nums[start] < minElem)
            {
                minElem = nums[start];
            };
            break;
        };
        if (nums[start] <= nums[mid])
        { // left part is sorted
            if (nums[start] < minElem)
            {
                minElem = nums[start];
            };
            start = mid + 1;
        }
        else
        { // right part is sorted
            if (nums[mid] < minElem)
            {
                minElem = nums[mid];
            };
            end = mid - 1;
        }
    };
    return minElem;
}

// 📍 approach 1
// - edge test cases to think :
//   - {1}
//   - {1,2}
//   - {2,1}
//   - {1,2,3,4}
//   - {4,1,2,3}
// - TC -> O(log2(n))
// - SC -> O(1)
// int findMin(vector<int> &nums)
// {
//     int start = 0;
//     int end = nums.size() - 1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         cout << "s -> " << start << " e -> " << end << " m -> " << mid
//              << endl;
//         // ✅ if mid-1 is out of bound -> mid is 0
//         // ✅ if mid+1 is out of bound -> mid is n-1
//         if (mid == nums.size() - 1)
//         {
//             cout << "mid+1 is out of bound -> mid is n-1" << endl;
//             return nums[0];
//         };
//         if ((mid == 0 || nums[mid - 1] < nums[mid]) &&
//             nums[mid] > nums[mid + 1])
//         {
//             cout << "returning " << mid + 1 << endl;
//             return nums[mid + 1];
//         };
//         if (nums[mid] >= nums[0])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         };
//     };
//     cout << "s -> " << start << " e -> " << end << endl;
//     return -1;
// }

int main()
{
    // vector<int> nums = {2,3,4,5,6,7,1}; // 6
    // vector<int> nums = {3,4,5,6,7,1,2}; // 5
    // vector<int> nums = {4,5,6,7,1,2,3}; // 4
    // vector<int> nums = {5,6,7,1,2,3,4}; // 3
    // vector<int> nums = {6,7,1,2,3,4,5}; // 2

    // test cases where mid+1 is out of bound -> mid is n-1
    // vector<int> nums = {1,2,3,4,5,6,7};
    // vector<int> nums = {1,2,3,4,5,6};
    // vector<int> nums = {1,2,3,4,5};
    // vector<int> nums = {1,2,3,4};
    // vector<int> nums = {1,2,3};
    // vector<int> nums = {1,2};
    // vector<int> nums = {1};

    // test cases where mid-1 is out of bound -> mid is n-1
    // vector<int> nums = {7, 1, 2, 3, 4, 5, 6};
    // vector<int> nums = {6, 1, 2, 3, 4, 5};
    // vector<int> nums = {5, 1, 2, 3, 4};
    // vector<int> nums = {4, 1, 2, 3};
    // vector<int> nums = {3, 1, 2};
    vector<int> nums = {2, 1};

    int minInd = findMin(nums);
    if (minInd != -1)
    {
        cout << " min index -> " << minInd << endl;
        cout << " min elem -> " << nums[minInd] << endl;
    }
    else
    {
        cout << "min = -1" << endl;
    };
    return 0;
};