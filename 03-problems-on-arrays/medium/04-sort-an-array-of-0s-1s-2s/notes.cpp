#include <bits/stdc++.h>
using namespace std;

// 📍 optimal method (DUTCH NATIONAL FLAG algorithm)
// - TC -> O(n)
// - SC -> O(1)
void sortColors(vector<int> &nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid++], nums[low++]);
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high--]);
        }
    }
}

// 📍 better method
// - iterate over the array to count the numbers of 0s, 1s and 2s
// - iterate over the array again to set the element into place
// - TC -> O(n) (O(2*n) more precisely)
// - SC -> O(1)

// 📍 bruteforce method
// - sort the vector using .sort() function
// - IF USING MERGE SORT:
// - TC -> O(n * log(n))
// - SC -> O(n)

int main()
{
    // 📍 stiver's test case
    vector<int> vect = {0,1,2,0,1,2,1,2,0,0,0,1};
    return 0;
};