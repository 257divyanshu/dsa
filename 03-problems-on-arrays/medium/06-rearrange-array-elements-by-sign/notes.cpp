#include <bits/stdc++.h>
using namespace std;

// 📍 VARIATION : if its not guaranteed that the number of positives is equal to the number of negatives
// 📍 approach (from bruteforce's intution)
// - TC -> O(n) (O(2*n)) more precisely) (see 📸 time-complexity-analysis.png)
// - so, worst case TC is O(2*n), best case TC is O((3*n)/2)
// - SC -> O(n)
vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> positives(0);
    vector<int> negatives(0);
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            positives.push_back(nums[i]);
        }
        else
        {
            negatives.push_back(nums[i]);
        }
    }
    int sign = 0;
    int index = nums.size() / 2;
    if (positives.size() > negatives.size())
    {
        sign = 1;
        index = negatives.size();
    }
    else if (positives.size() < negatives.size())
    {
        sign = -1;
        index = positives.size();
    }
    for (int i = 0; i < index; i++)
    {
        nums[2 * i] = positives[i];
        nums[2 * i + 1] = negatives[i];
    }
    for (int i = index * 2; i < nums.size(); i++)
    {
        if (sign == 1)
        {
            nums[i] = positives[i - index];
        }
        else
        {
            nums[i] = negatives[i - index];
        }
    }
    return nums;
}

// 📍 logic
// - We traverse the array and place every positive element at the next available even index and every negative element at the next available odd index. By incrementing each index by 2 after placement, we automatically maintain the required alternating positive-negative order.


// 📍 optimal approach
// - TC -> O(n) (single pass)
// - SC -> O(n)
// vector<int> rearrangeArray(vector<int> &nums)
// {
//     vector<int> resultantVector(nums.size(), 0);
//     int positiveIndex = 0;
//     int negativeIndex = 1;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] > 0)
//         {
//             resultantVector[positiveIndex] = nums[i];
//             positiveIndex += 2;
//         }
//         else
//         {
//             resultantVector[negativeIndex] = nums[i];
//             negativeIndex += 2;
//         }
//     }
//     return resultantVector;
// }

// 📍 bruteforce approach
// - TC -> O(n) (O((3*n)/2) more precisely)
// - SC -> O(n)
// vector<int> rearrangeArray(vector<int> &nums)
// {
//     vector<int> positives(0);
//     vector<int> negatives(0);
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] > 0)
//         {
//             positives.push_back(nums[i]);
//         }
//         else
//         {
//             negatives.push_back(nums[i]);
//         }
//     }
//     for (int i = 0; i < nums.size() / 2; i++)
//     {
//         nums[2 * i] = positives[i];
//         nums[2 * i + 1] = negatives[i];
//     }
//     return nums;
// }

int main()
{
    // 📍 test case (for the scenario when positiveCount == negativeCount)
    // [3,1,-2,-5,2,-4]
    // 📍 test case (for the scenario when positiveCount != negativeCount)
    // [1,2,-4,-5,3,6]
    return 0;
};