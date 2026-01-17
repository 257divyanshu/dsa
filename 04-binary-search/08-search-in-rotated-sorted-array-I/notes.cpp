#include <bits/stdc++.h>
using namespace std;

// 📍 tip
// - we need to find out which part of the search space needs to be eliminated

// 📍 intution
// - first we need to find out which part of the array is sorted
// - then we will find out whether the target is present in that sorted part or not
// - based on the presence or absence of the target in that sorted part, we will trim down our search space

int searchInRotatedSortedI(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(nums[mid] == target){
            return mid;
        };
        if(nums[start] <= nums[mid]){ // left part is sorted
            if(nums[start] <= target && target < nums[mid]){ // target is in the sorted left part
                end = mid - 1;
            }
            else{ // target is not in the sorted left part
                start = mid + 1;
            };
        }
        else{ // right part is sorted
            if(nums[mid] < target && target <= nums[end]){ // target is in the sorted right part
                start = mid + 1;
            }
            else{ // target is not in the sorted right part
                end = mid - 1;
            };
        };
    };
    return -1;
};

int main()
{
    // 📍 testing
    // vector<int> vect = {2,3,4,5,6,7,8,9,1};
    // vector<int> vect = {3,4,5,6,7,8,9,1,2};
    // vector<int> vect = {4,5,6,7,8,9,1,2,3};
    // vector<int> vect = {5,6,7,8,9,1,2,3,4};
    // vector<int> vect = {6,7,8,9,1,2,3,4,5};
    // vector<int> vect = {7,8,9,1,2,3,4,5,6};
    // vector<int> vect = {8,9,1,2,3,4,5,6,7};
    // vector<int> vect = {9,1,2,3,4,5,6,7,8};
    // vector<int> vect = {1,2,3,4,5,6,7,8,9};
    // for(int i = 0; i<=10; i++){
    //     cout << i << " found at " << searchInRotatedSortedI(vect, i) << endl;
    // };

    // 📍 testing
    vector<int> vect = {1};
    cout<< -1 << " found at " << searchInRotatedSortedI(vect, -1) << endl; 

    return 0;
};