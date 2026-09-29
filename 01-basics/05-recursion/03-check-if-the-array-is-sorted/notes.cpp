#include <bits/stdc++.h>
using namespace std;

// 🔗 https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

// 📍 recursive solution
// 📝 Count "drops" (where nums[i] > nums[(i+1)%n]) as you traverse — if drops exceed 1, not a sorted rotation.
// TC -> O(n)
// SC -> O(n)
bool helper(vector<int> &nums, int i, int drops, int n)
{
    if (i == n)
    {
        return true;
    }
    if (nums[i] > nums[(i + 1) % n])
    {
        drops++;
    }
    if (drops > 1)
    {
        return false;
    }
    return helper(nums, i + 1, drops, n);
}
bool check(vector<int> &nums)
{
    return helper(nums, 0, 0, nums.size());
}

int main()
{

    return 0;
};