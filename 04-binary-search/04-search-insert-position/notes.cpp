#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int result = nums.size();
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            result = mid;
            end = mid - 1;
        };
    };
    return result;
}

int main()
{

    return 0;
};