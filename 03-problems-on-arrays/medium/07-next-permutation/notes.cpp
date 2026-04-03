#include <bits/stdc++.h>
using namespace std;

// 📍 we an use the next_permutation() STL function to solve the problem

// 📍 code to get all the permutations an integer vector (but not guaranteed lexicographical manner)
// - TC -> O(n! * n)
// - SC -> O(n)
// 📍 TC explanation
// There are n! permutations.
// For each permutation, we copy/store a vector of size n → O(n) work.
// Total = O(n × n!)
void helper(int index, vector<int>& nums, vector<vector<int>>& perms) {
    if (index == nums.size()) {
        perms.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);        // choose
        helper(index + 1, nums, perms);    // explore
        swap(nums[index], nums[i]);        // un-choose (backtrack)
    }
}
vector<vector<int>> getPermutations(vector<int> nums) {
    vector<vector<int>> perms;
    helper(0, nums, perms);
    return perms;
}
int main()
{
    // cout << -1%4 << endl; // returns -1

    vector<int> nums = {1,2,3,4};
    vector<vector<int>> perms = getPermutations(nums);
    int counter = 1;
    for (auto &p : perms) {
        cout << "permutation " << counter++ << endl;
        for (int x : p) cout << x << " ";
        cout << "\n";
    }

    return 0;
};