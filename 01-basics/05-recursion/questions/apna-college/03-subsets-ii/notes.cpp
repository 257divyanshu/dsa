#include <bits/stdc++.h>
using namespace std;

// 📍 first approach ✔️
void helper(set<vector<int>> &powerset, vector<int> &subset,
            vector<int> &nums, int i)
{
    if (i == nums.size())
    {
        vector<int> subsetCopy(subset);
        // cout << "unsorted" << endl;
        // for(auto elem : subsetCopy){
        //     cout << elem << " ";
        // }
        // cout << endl;
        sort(subsetCopy.begin(), subsetCopy.end());
        // cout << "sorted" << endl;
        // for(auto elem : subsetCopy){
        //     cout << elem << " ";
        // }
        // cout << endl;
        powerset.emplace(subsetCopy);
        cout << endl;
        return;
    }
    // call after pushing
    subset.push_back(nums[i]);
    helper(powerset, subset, nums, i + 1);
    // call without pushing
    subset.pop_back();
    helper(powerset, subset, nums, i + 1);
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    set<vector<int>> powerset = {};
    vector<int> subset = {};
    helper(powerset, subset, nums, 0);
    vector<vector<int>> powersetArray(powerset.begin(), powerset.end());
    return powersetArray;
}

int main()
{

    return 0;
};