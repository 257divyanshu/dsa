#include <bits/stdc++.h>
using namespace std;

// 📍 bruteforce approach
//  TC -> O(n) (more precisely : O(2n))
//  SC -> O(n)
// void moveZeroes(vector<int> &nums)
// {
//     int n = nums.size();
//     int zeroCount = 0;
//     vector<int> nonZeroElems(0);
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] != 0)
//         {
//             nonZeroElems.push_back(nums[i]);
//         };
//     };
//     for (int i = 0; i < n; i++)
//     {
//         if (i < nonZeroElems.size())
//         {
//             nums[i] = nonZeroElems[i];
//         }
//         else
//         {
//             nums[i] = 0;
//         };
//     };
// };

// 📍 optimal approach
// - two pointer approach
// - TC -> O(n)
// - SC -> O(1)
void moveZeroes(vector<int> &nums)
{
    // 📍 my way
    // int i = 0;
    // while (i < nums.size() && nums[i] != 0)
    // {
    //     i++;
    // };
    // 📍 sir's way
    int i = 0;
    for(int k = 0; k < nums.size(); k++){ // TC -> O(x) (where x is the position of the first zero)
        if(nums[k] != 0){
            i++;
        }
        else{
            break;
        };
    };
    int j = i + 1;
    while (j < nums.size()) // TC -> O(n-x) (where x is the position of the first zero)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        };
        j++;
    };
};

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    for (int num : nums)
    {
        cout << num << " ";
    };
    cout << endl;
    moveZeroes(nums);
    for (int num : nums)
    {
        cout << num << " ";
    };
    cout << endl;
    return 0;
};