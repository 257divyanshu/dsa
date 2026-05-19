#include <bits/stdc++.h>
using namespace std;

// 📍 approach
// - similar to printAllSubsets
// - TC -> O(2^n * n) (similar to printAllSubsets)
void helper(vector<vector<int>> &powerset, vector<int> &subset, vector<int> &nums, int i)
{
    if (i == nums.size())
    {
        powerset.push_back(subset);
        return;
    }
    // call after pushing
    subset.push_back(nums[i]);
    helper(powerset, subset, nums, i + 1);
    // call without pushing
    subset.pop_back();
    helper(powerset, subset, nums, i + 1);
}
vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> powerset = {};
    vector<int> subset = {};
    helper(powerset, subset, nums, 0);
    return powerset;
}

int main()
{
    cout << "Hare Krishna" << endl;
    return 0;
};