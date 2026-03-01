#include <bits/stdc++.h>
using namespace std;

// 📍 optimal method
// - two pointer approach
// - TC -> O(n)
// - SC -> O(1)
int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    int j = 0;
    // while (i < n && j < n)
    while (j < n) // 📍 there's no need for i<n check (because i won't go out of bound)
    {
        if (nums[i] != nums[j])
        {
            swap(nums[i + 1], nums[j]);
            i++;
        };
        j++;
    };
    return i + 1;
};

// 📍 bruteforce method
// - TC -> O( ( n * log(n) ) + n )
// - SC -> O(n)
// - we can use unordered_set here
// int removeDuplicates(vector<int> &nums)
// {
//     set<int> uniqueElements;
//     for(int i = 0; i < nums.size(); i++){
//         uniqueElements.insert(nums[i]);
//     };
//     int index = 0;
//     for(auto uniqueElement : uniqueElements){
//         nums[index] = uniqueElement;
//         index++;
//     };
//     return index;
// };

// 📍 better method
// - TC -> O(n) (more precisely : O(2n))
// - SC -> O(n)
// int removeDuplicates(vector<int> &nums)
// {
//     vector<int> uniqueElementsArray(0);
//     int numberOfUniqueElements = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (
//             uniqueElementsArray.empty() ||
//             uniqueElementsArray[numberOfUniqueElements - 1] != nums[i])
//         {
//             uniqueElementsArray.push_back(nums[i]);
//             numberOfUniqueElements++;
//         };
//     };
//     for (int i = 0; i < numberOfUniqueElements; i++)
//     {
//         nums[i] = uniqueElementsArray[i];
//     };
//     return numberOfUniqueElements;
// };

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    // vector<int> nums = {1,1,2};
    // vector<int> nums = {1,1};
    // vector<int> nums = {1};
    // vector<int> nums = {1, 1, 1, 1, 1, 1};
    for (int num : nums)
    {
        cout << num << " ";
    };
    cout << endl;
    cout << removeDuplicates(nums) << " unique elements." << endl;
    for (int num : nums)
    {
        cout << num << " ";
    };
    cout << endl;
    return 0;
};