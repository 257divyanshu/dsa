#include <bits/stdc++.h>
using namespace std;

// 📍 Complexity Analysis 
// - TC -> O(2*(maxNum + k + 1) + arr.size())
// - SC -> O(maxNum + k + 1)

int findKthPositive(vector<int> &arr, int k)
{
    vector<int> missingNums(arr[arr.size() - 1] + k + 1, 1);
    for (int num : arr)
    {
        missingNums[num] = 0;
    }
    int missingIndex = 0;
    for (int i = 0; i < missingNums.size(); i++)
    {
        if (missingNums[i])
        {
            missingIndex++;
        }
        if (missingIndex == k + 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    return 0;
};