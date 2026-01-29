#include <bits/stdc++.h>
using namespace std;

// 🏆 sir's approach

// see 📁 space-complexity-analysis for understanding the space complexity analysis

// 📍 sir's approach
// - TC -> O((2^n) * n)
// - SC -> O((2^(n-1)) * n)
vector<vector<int>> subsets(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> powerSet;
    int subsetCount = 1 << n;
    for (int i = 0; i < subsetCount; i++)
    {
        vector<int> currSet;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                currSet.push_back(nums[j]);
            };
        };
        powerSet.push_back(currSet);
    };
    return powerSet;
};

// 📍 my approach
// - TC -> O((2^n) * n)
// - SC -> O((2^(n-1)) * n)
// 📍 TC ANALYSIS (way 1 : complex summation)
// - TC -> ((2^n)-1) + log(((2^n)-1)!)
// - log(((2^n)-1)!) ~ log((2^n)!)
// - using Stirling's Approximation :
//   - for large N, log(N!) ~ N * log(N).
// - so log((2^n)!) ~ (2^n) * log(2^n) ~ (2^n) * n
// 📍 TC ANALYSIS (way 2 : analyzing loop structures)
// - Outer Loop runs exactly 2^n times
// - Inner loop runs $O(n)$ times on average
//   - INTUTION : For the vast majority of numbers between 0 and 2^n, the Most Significant Bit is at position n-1 or n-2, (causing the inner loop to run n or n-1 times for the vast majority of numbers between 0 and 2^n). So, Average Inner Loop Iterations ~ n
// - so TC -> O((2^n) * n)
// int customExponentiation(int a, int b)
// {
//     int result = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         result *= a;
//     };
//     return result;
// };
// vector<vector<int>> subsets(vector<int> &nums)
// {
//     int n = nums.size();
//     vector<vector<int>> result;
//     for (int i = 0; i < customExponentiation(2, n); i++)
//     {
//         vector<int> currSet;
//         int currBit = 0;
//         int iCopy = i;
//         while (iCopy != 0)
//         {
//             if ((iCopy & 1) == 1)
//             {
//                 currSet.push_back(nums[currBit]);
//             };
//             currBit++;
//             iCopy >>= 1;
//         };
//         result.push_back(currSet);
//     };
//     return result;
// };

int main()
{

    return 0;
};