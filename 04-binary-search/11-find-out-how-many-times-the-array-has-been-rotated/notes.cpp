#include <bits/stdc++.h>
using namespace std;

// 📍 question : an array sorted in ascending order has be rotated, find how many times had it been rotated

// 📍 approach 2
// - TC -> O(log2(n))
// - SC -> O(1)
int timesRotated(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    int minElem = INT32_MAX;
    int minInd = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[start] <= nums[end]) // 📝 optional optimization
        {
            if (nums[start] < minElem)
            {
                minElem = nums[start];
                minInd = start;
            };
            break;
        };
        if (nums[start] <= nums[mid])
        { // left part is sorted
            if (nums[start] < minElem)
            {
                minElem = nums[start];
                minInd = start;
            };
            start = mid + 1;
        }
        else
        { // right part is sorted
            if (nums[mid] < minElem)
            {
                minElem = nums[mid];
                minInd = mid;
            };
            end = mid - 1;
        }
    };
    return minInd;
}

int main()
{
    
    return 0;
};