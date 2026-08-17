#include <bits/stdc++.h>
using namespace std;

// 📍 optimal approach (using unordered_map) (without sorting)
// - TC -> O(n)
// - SC -> O(n)
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> indices(0);
    unordered_map<int, int> indexMap;
    for (int i = 0; i < nums.size(); i++)
    {
        auto it = indexMap.find(target - nums[i]);
        if (it != indexMap.end())
        {
            indices.push_back(it->second);
            indices.push_back(i);
            return indices;
        }
        else
        {
            indexMap[nums[i]] = i;
        };
    }
    return indices;
}

// 📍 better approach v2 (mine) (using unordered_map) (with sorting)
// - TC -> O(n * log(n))
// - SC -> O(n) (🔬 or something more specific)
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     vector<int> indices(0);
//     unordered_map<int, vector<int>> indexMap;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         indexMap[nums[i]].push_back(i);
//     }
//     sort(nums.begin(), nums.end());
//     int i = 0;
//     int j = nums.size() - 1;
//     while (i < j)
//     {
//         if (nums[i] + nums[j] < target)
//         {
//             i++;
//         }
//         else if (nums[i] + nums[j] == target)
//         {
//             if (nums[i] == nums[j])
//             {
//                 indices.push_back(indexMap[nums[i]][0]);
//                 indices.push_back(indexMap[nums[i]][1]);
//             }
//             else
//             {
//                 indices.push_back(indexMap[nums[i]][0]);
//                 indices.push_back(indexMap[nums[j]][0]);
//             }
//             return indices;
//         }
//         else
//         {
//             j--;
//         }
//     }
//     return indices;
// }

// 📍 better approach (mine) (using multimap) (with sorting)
// - TC -> O(n * log(n))
// - SC -> O(n)
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     vector<int> indices(0);
//     multimap<int, int> indexMap;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         indexMap.insert({nums[i], i});
//     }
//     sort(nums.begin(), nums.end());
//     int i = 0;
//     int j = nums.size() - 1;
//     while (i < j)
//     {
//         if (nums[i] + nums[j] < target)
//         {
//             i++;
//         }
//         else if (nums[i] + nums[j] == target)
//         {
//             if (nums[i] == nums[j])
//             {
//                 // 📍 way 1 : using equal_range();
//                 // auto [start_it, end_it] = indexMap.equal_range(nums[i]);
//                 // indices.push_back(start_it->second);
//                 // indices.push_back((--end_it)->second);
//                 // 📍 way 2 : using find();
//                 // INTUITION : if two identical elements sum to target, they would surely be adjacent in the multimap
//                 auto it = indexMap.find(nums[i]);
//                 indices.push_back(it->second);
//                 it++;
//                 indices.push_back(it->second);
//                 return indices;
//             }
//             else
//             {
//                 auto start_it = indexMap.find(nums[i]);
//                 auto end_it = indexMap.find(nums[j]);
//                 indices.push_back(start_it->second);
//                 indices.push_back(end_it->second);
//                 return indices;
//             }
//         }
//         else
//         {
//             j--;
//         }
//     }
//     return indices;
// }

// 📍 better approach (mine) (works if nums contains unique elements) (⚠️ fails if nums contains duplicate elements)
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     vector<int> indices(0);
//     unordered_map<int,int> indexMap;
//     for(int i = 0; i < nums.size(); i++){
//         indexMap[nums[i]] = i;
//     }
//     sort(nums.begin(), nums.end());
//     int i = 0;
//     int j = nums.size() - 1;
//     while (i<j){
//         if(nums[i] + nums[j] < target){
//             i++;
//         }
//         else if (nums[i] + nums[j] == target){
//             indices.push_back(indexMap[nums[i]]);
//             indices.push_back(indexMap[nums[j]]);
//             return indices;
//         }
//         else{
//             j--;
//         }
//     }
//     return indices;
// }

// 📍 bruteforce approach
// - TC -> O(n^2)
// - SC -> O(1)
// vector<int> twoSum(vector<int> &nums, int target)
// {
//     vector<int> indices(0);
//     for(int i = 0; i < nums.size(); i++){
//         for(int j = i + 1; j < nums.size(); j++){
//             if(nums[i] + nums[j] == target){
//                 indices.push_back(i);
//                 indices.push_back(j);
//                 return indices;
//             }
//         }
//     }
//     return indices;
// }

int main()
{
    // test case :  [-6, 7, 1, -7, 6, 2], target = 3
    return 0;
};