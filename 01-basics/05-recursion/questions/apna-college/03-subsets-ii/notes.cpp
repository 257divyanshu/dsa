#include <bits/stdc++.h>
using namespace std;

// 🏆 third approach ✔️ (ma'am's solution)
// - TC -> O(n*log(n) + (2^n * n))
void helper(vector<vector<int>> &powerset, vector<int> &subset, vector<int> &nums, int i)
{
    int n = nums.size();
    if (i == n)
    {
        powerset.push_back(subset);
        return;
    }
    // call after pushing
    subset.push_back(nums[i]);
    helper(powerset, subset, nums, i + 1);
    // call without pushing
    subset.pop_back();
    int index = i + 1;

    // 👇 the code that skips duplicates 
    int currentElement = nums[i]; 
    while (index < n && nums[index] == currentElement)
    {
        index++;
    }

    helper(powerset, subset, nums, index);
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<vector<int>> powerset = {};
    vector<int> subset = {};
    subset.reserve(nums.size()); // Avoids reallocations during push/pop.
    sort(nums.begin(), nums.end()); // so that all duplicate are stay near each other
    helper(powerset, subset, nums, 0);
    return powerset;
}

// 📍 second approach ❌ (after intution from ma'am's solution)
// - passes : [1,2,2]
// - fails : [5,5,5]
// void helper(vector<vector<int>> &powerset, vector<int> &subset,
//             vector<int> &nums, int i)
// {
//     if (i == nums.size())
//     {
//         powerset.push_back(subset);
//         return;
//     }
//     if (i != 0 && (nums[i] == nums[i - 1]) && (subset.empty() || (subset.back() != nums[i - 1]))) // 👈 this is the issue
//     {
//         helper(powerset, subset, nums, i + 1);
//     }
//     else
//     {
//         // call after pushing
//         subset.push_back(nums[i]);
//         helper(powerset, subset, nums, i + 1);
//         // call without pushing
//         subset.pop_back();
//         helper(powerset, subset, nums, i + 1);
//     }
// }
// vector<vector<int>> subsetsWithDup(vector<int> &nums)
// {
//     vector<vector<int>> powerset = {};
//     vector<int> subset = {};
//     sort(nums.begin(), nums.end());
//     helper(powerset, subset, nums, 0);
//     return powerset;
// }

// 📍 first approach ✔️ (modified SUBSETS solution)
// void helper(set<vector<int>> &powerset, vector<int> &subset,
//             vector<int> &nums, int i)
// {
//     if (i == nums.size())
//     {
//         vector<int> subsetCopy(subset);
//         // cout << "unsorted" << endl;
//         // for(auto elem : subsetCopy){
//         //     cout << elem << " ";
//         // }
//         // cout << endl;
//         sort(subsetCopy.begin(), subsetCopy.end());
//         // cout << "sorted" << endl;
//         // for(auto elem : subsetCopy){
//         //     cout << elem << " ";
//         // }
//         // cout << endl;
//         powerset.emplace(subsetCopy);
//         cout << endl;
//         return;
//     }
//     // call after pushing
//     subset.push_back(nums[i]);
//     helper(powerset, subset, nums, i + 1);
//     // call without pushing
//     subset.pop_back();
//     helper(powerset, subset, nums, i + 1);
// }
// vector<vector<int>> subsetsWithDup(vector<int> &nums)
// {
//     set<vector<int>> powerset = {};
//     vector<int> subset = {};
//     helper(powerset, subset, nums, 0);
//     vector<vector<int>> powersetArray(powerset.begin(), powerset.end());
//     return powersetArray;
// }

int main()
{

    return 0;
};