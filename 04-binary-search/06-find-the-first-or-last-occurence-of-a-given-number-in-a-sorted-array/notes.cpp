#include <bits/stdc++.h>
using namespace std;

// 🏆 both are similarly efficient

// 📍 complexity anlysis (same for both)
// - TC -> O(log2(n))
// - SC -> O(1)

// 📍 approach 2 (with lower_bound() and upper_bound())
// vector<int> searchRange(vector<int> &nums, int target)
// {
//     vector<int> result(2);
//     int lowerBound = (lower_bound(nums.begin(), nums.end(), target) - nums.begin());
//     if ((lowerBound == nums.size()) || (nums[lowerBound] != target))
//     {
//         result[0] = -1;
//         result[1] = -1;
//     }
//     else
//     {
//         result[0] = lowerBound;
//         result[1] = (upper_bound(nums.begin(), nums.end(), target) - nums.begin()) - 1;
//     };
//     return result;
// }

// 📍 approach 1 ((without lower_bound() and upper_bound()))
int leftMostOccurence(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int leftMostIndex = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else if (nums[mid] == target)
        {
            leftMostIndex = mid;
            end = mid - 1;
        }
        else
        {
            end = mid - 1;
        };
    };
    return leftMostIndex;
}
int rightMostOccurence(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int rightMostIndex = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else if (nums[mid] == target)
        {
            rightMostIndex = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        };
    };
    return rightMostIndex;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> result;
    int firstPosition = leftMostOccurence(nums, target);
    if (firstPosition == -1)
    {
        result = {-1, -1};
        return result;
    };
    int lastPosition = rightMostOccurence(nums, target);
    result = {firstPosition, lastPosition};
    return result;
}

int main()
{

    return 0;
};