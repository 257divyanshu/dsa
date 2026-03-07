#include <bits/stdc++.h>
using namespace std;

// 📍 VARIATION : if its not guaranteed that the number of positives is equal to the number of negatives
// 📍 approach (from bruteforce's intution)
// - TC -> O(n) (O(2*n)) more precisely) (see 📸 time-complexity-analysis.png)
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

// 📍 my iteration 2
// vector<int> rearrangeArray(vector<int> &nums)
// {
//     vector<int> resultantVector(0);
//     int i = 0;
//     int j = 0;
//     while (i < nums.size() && j < nums.size())
//     {
//         if (nums[i] < 0)
//         {
//             i++;
//         }
//         else if (nums[j] > 0)
//         {
//             j++;
//         }
//         else
//         {
//             resultantVector.push_back(nums[i]);
//             resultantVector.push_back(nums[j]);
//             i++;
//             j++;
//         }
//     }
//     return resultantVector;
// }

// 📍 my iteration 1
// vector<int> rearrangeArray(vector<int> &nums)
// {
//     vector<int> resultantVector(0);
//     int i = 0;
//     int j = 0;
//     while (i < nums.size() && j < nums.size())
//     {
//         while (i < nums.size() && nums[i] < 0)
//         {
//             i++;
//         }
//         while (j < nums.size() && nums[j] > 0)
//         {
//             j++;
//         }
//         resultantVector.push_back(nums[i]);
//         resultantVector.push_back(nums[j]);
//         i++;
//         j++;
//     }
// }

int main()
{

    return 0;
};