#include <bits/stdc++.h>
using namespace std;

// 📍 trick
// - outer -> 0 to n-1
// - inner -> 0 to n-1-i

// 📍 complexity
// - TC -> O(n^2)
// - O(n) for best case (when the array is already sorted)

void bubbleSort(vector<int>& nums)
{
    for (int num : nums)
    {
        cout << num << " ";
    };
    cout << endl;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        bool didSwap = false;
        for (int j = 0; j < nums.size() - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                didSwap = true;
            };
        };
        for (int num : nums)
        {
            cout << num << " ";
        };
        cout << endl;
        if (!didSwap) // optimization
        {
            break;
        };
    };
};

int main()
{
    vector<int> vect = {13, 46, 24, 52, 20, 9};
    bubbleSort(vect);
    return 0;
};

// 📍 walkthrough
// - given unsorted array : 13, 46, 24, 52, 20, 9
// - (13, 46), 24, 52, 20, 9 // algorithm starts
// - 13, (46, 24), 52, 20, 9
// - 13, 24, (46, 52), 20, 9
// - 13, 24, 46, (52, 20), 9
// - 13, 24, 46, 20, (52, 9) 
// - (13, 24), 46, 20, 9, 52 // after first cycle ends
// - 13, (24, 46), 20, 9, 52
// - 13, 24, (46, 20), 9, 52
// - 13, 24, 20, (46, 9), 52 
// - (13, 24), 20, 9, 46, 52 // after second cycle ends
// - 13, (24, 20), 9, 46, 52
// - 13, 20, (24, 9), 46, 52 
// - (13, 20), 9, 24, 46, 52 // after third cycle ends
// - 13, (20, 9), 24, 46, 52 
// - (13, 9), 20, 24, 46, 52 // after fourth cycle ends
// - 9, 13, 20, 24, 46, 52   // after fifth cycle ends

// 📍 bubble sort : push the maximum to the end by adjacent swaps