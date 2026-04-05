#include <bits/stdc++.h>
using namespace std;

// 📍 optimal approach
// - TC -> O(n) (O(2*n) to be precise)
// - SC -> O(n) (for storing the answer)
vector<int> leaders(vector<int> &nums)
{
    int maxi = -10001;
    vector<int> result(0);
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] > maxi)
        {
            result.push_back(nums[i]);
            maxi = nums[i];
        };
    };
    reverse(result.begin(), result.end());
    return result;
};

int main()
{

    return 0;
};