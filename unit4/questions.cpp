#include <bits/stdc++.h>
using namespace std;



// SEARCH INSERT POSITION
// find lower bound of m in the vector ans insert it there
// https://www.naukri.com/code360/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// https://leetcode.com/problems/search-insert-position/description/
// int
//     int n = arr.size();
//     int ans = n;
//     i searchInsert(vector<int> &arr, int m)
// {nt low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == m)
//         {
//             return mid;
//         }
//         else if (arr[mid] < m)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             ans = mid;
//             high = mid - 1;
//         };
//     };
//     return ans;
// }

// UPPER BOUND
// https://www.naukri.com/code360/problems/implement-upper-bound_8165383?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
// int upperBound(vector<int> &arr, int x, int n)
// {
//     // Write your code here.
//     int low = 0;
//     int high = n - 1;
//     int ans = n;
//     while (low <= high)
//     {
//         int mid = low + ((high - low) / 2);
//         if (arr[mid] > x)
//         {
//             ans = mid;
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         };
//     };
//     return ans;
// }
// THE STL FUNCTION WHICH DOES THE WORK FOR US
// int ans = upper_bound(arr.begin(),arr.end(),x)-arr.begin();
// TIME COMPLEXITY
// similar to that of binary search

// LOWER BOUND
// https://www.naukri.com/code360/problems/lower-bound_8165382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than or equal to a given key i.e. x.
// The lower bound is the smallest index, ind, where arr[ind] >= x. But if any such index is not found, the lower bound algorithm returns n i.e. size of the given array.
// int lowerBound(vector<int> arr, int n, int x)
// {
//     int low = 0;
//     int high = n - 1;
//     int ans = n; // if lowerBound isn't found we return n
//     while (low <= high)
//     {
//         int mid = low + ((high - low) / 2);
//         if (arr[mid] >= x)
//         {
//             ans = mid; // this might be the answe
//             high = mid - 1; // a better answer may exists so let's check on the left further
//         }
//         else
//         {
//             low = mid + 1; // oh oh, the element we encountered is ismaller than x, let's move to the right
//         };
//     };
//     return ans;
// };
// THE STL FUNCTION WHICH DOES THE WORK FOR US
// int ans = lower_bound(arr.begin(),arr.end(),x)-arr.begin();
// TIME COMPLEXITY
// similar to that of binary search

// BINAR SEARCH CONCEPT
// application on sorted array
// classical example : the way we search for a word in a dictionary
// ITERATIVE CODE
// int search(vector<int> &nums, int target)
// {
//     // Write your code here.
//     int n = nums.size();
//     int low = 0;
//     int high = n - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (nums[mid] == target)
//         {
//             return mid;
//         }
//         else if (nums[mid] < target)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         };
//     };
//     return -1;
// };
// RECURSIVE APPROACH
// int binarySearch(vector<int> &nums, int low, int high, int target)
// {
//     if (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (nums[mid] == target)
//         {
//             return mid;
//         }
//         else if (target > nums[mid])
//         {
//             return binarySearch(nums, low + 1, high, target);
//         }
//         else
//         {
//             return binarySearch(nums, low, high - 1, target);
//         };
//     }
//     else
//     {
//         return -1;
//     };
// };
// int search(vector<int> &nums, int target)
// {
//     // Write your code here.
//     return binarySearch(nums, 0, nums.size() - 1, target);
// };
// TIME COMPLEXITY
// O(log2(n))
// OVERFLOW CASE
// int mid = (low + high) / 2;
// replace this with
// int mid = low + ((high/low)/2)
// int main()
// {
//     cout << "Hi there" << endl;
//     return 0;
// };