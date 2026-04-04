#include <bits/stdc++.h>
using namespace std;

// 📍 optimal approach
// - see intution : 📸image-02-nextPermutation-intution.png
// - TC -> O(n) (O(3*n) to be precise)
// - SC -> O(1) (no extra space) (but we are using the provided array)
void nextPermutation(vector<int> &nums)
{
    if (nums.size() == 1)
    {
        return;
    };
    int i = nums.size() - 2;
    while (i >= 0 && nums[i] >= nums[i + 1])
    {
        i--;
    };
    // if(i == -1){
    //     return;
    // }; // 📍 fails for [3,2,1]
    if (i >= 0)
    {
        int j = nums.size() - 1;
        while (j >= 0 && nums[j] <= nums[i])
        {
            j--;
        };
        swap(nums[i], nums[j]);
    }
    int a = i + 1;
    int b = nums.size() - 1;
    while (a <= b)
    {
        swap(nums[a++], nums[b--]);
    };
};

// 📍 we an use the next_permutation() STL function to solve the problem

// 📍 code to get all the permutations an integer vector (but not guaranteed lexicographical manner)
// - TC -> O(n! * n)
// - SC -> O(n)
// 📍 TC explanation
// There are n! permutations.
// For each permutation, we copy/store a vector of size n → O(n) work.
// Total = O(n × n!)
// void helper(int index, vector<int>& nums, vector<vector<int>>& perms) {
//     if (index == nums.size()) {
//         perms.push_back(nums);
//         return;
//     }

//     for (int i = index; i < nums.size(); i++) {
//         swap(nums[index], nums[i]);        // choose
//         helper(index + 1, nums, perms);    // explore
//         swap(nums[index], nums[i]);        // un-choose (backtrack)
//     }
// }
// vector<vector<int>> getPermutations(vector<int> nums) {
//     vector<vector<int>> perms;
//     helper(0, nums, perms);
//     return perms;
// }
// int main()
// {
//     // cout << -1%4 << endl; // returns -1

//     vector<int> nums = {1,2,3,4};
//     vector<vector<int>> perms = getPermutations(nums);
//     int counter = 1;
//     for (auto &p : perms) {
//         cout << "permutation " << counter++ << endl;
//         for (int x : p) cout << x << " ";
//         cout << "\n";
//     }

//     return 0;
// };