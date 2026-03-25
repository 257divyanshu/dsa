#include <bits/stdc++.h>
using namespace std;

bool accomodationPossible(vector<int> &nums, int k, int mid){
    int accomodatedCount = 1;
    int currentPosition = nums[0];
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] - currentPosition >= mid){
            accomodatedCount++;
            currentPosition = nums[i];
        }
    }
    cout << "accomodatedCount = " << accomodatedCount << endl;
    return accomodatedCount >= k;
}

int aggressiveCows(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int start = 1;
    int end = nums[nums.size()-1] - nums[0];
    while(start <= end){
        int mid = start + (end - start)/2;
        cout << "s = " << start << "; e = " << end << "; m = " << mid << endl;
        if(accomodationPossible(nums, k, mid)){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return end; // 💡 myHint : we are supposed to move right on finding the candidate answer
}

int main()
{
    // 📍 tc1
    // vector<int> nums = {0, 3, 4, 7, 10, 9};
    // int k = 4;
    // 📍 tc2
    vector<int> nums = {4, 2, 1, 3, 6};
    int k = 2;

    cout << aggressiveCows(nums, k) << endl;
    return 0;
};