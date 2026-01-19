#include <bits/stdc++.h>
using namespace std;

// 📍 complexity analysis
// - TC -> O(n)

// 📍 approach
bool check(vector<int> &nums)
{
    int drops = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        // We compare current element with the next.
        // (i + 1) % n allows us to check the last element against the first inside the same loop.
        if (nums[i] > nums[(i + 1) % n])
        {
            drops++;
        }
    }

    // A sorted array has 0 drops.
    // A rotated sorted array has exactly 1 drop.
    return drops <= 1;
}

int main()
{

    return 0;
};