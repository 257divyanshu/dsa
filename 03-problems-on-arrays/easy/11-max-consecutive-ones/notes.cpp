#include <bits/stdc++.h>
using namespace std;

// 👉 see other similar approaches (which have minimal tweaks here and there) at : https://leetcode.com/problems/max-consecutive-ones/submissions/

// 📍 optimal approach
// - TC -> O(n)
// - SC -> O(1)
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int streakLength = 0;
    int maxStreakLength = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            streakLength++;
            if (streakLength > maxStreakLength)
            {
                maxStreakLength = streakLength;
            };
        }
        else
        {
            streakLength = 0;
        };
    };
    return maxStreakLength;
};

int main()
{
    // test case : [1, 0, 1, 1, 1, 0, 1, 1, 1]
    return 0;
};