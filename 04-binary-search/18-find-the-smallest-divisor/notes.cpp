#include <bits/stdc++.h>
using namespace std;

// 📍 a variation of the question may not guarantee that there will be an answer
// - that will happen only when nums.size() > threshold
// - for that case we'll return -1

// 📍 SOME CONCLUSIONS
// - its given that the minimum value of threshold can be nums.size(), for that value of threshold, the minimum divisor can be the maxNum (sumOfCeiledQuotients = threshold = nums.size())
// - the maximum sumOfCeiledQuotients we can get is 'summation of nums[i]', we'll get it when the divisor is 1, that will be our minimum divisor if threshold >= 'summation of nums[i]'
// - so range of answers is [1,maxNum]

// 📍 my approach 1
// - TC -> O(log(maxNum)) (due to binary search) * O(nums.size()) (for calculating sumOfCeiledQuotients)
int getSumOfCeiledQuotients(vector<int> &nums, int mid){
    int summation = 0;
    for(int num : nums){
        summation += ceil((float)num / mid);
    }
    return summation;
}
int smallestDivisor(vector<int> &nums, int threshold)
{
    int start = 1;
    int end = -1;
    for(int num : nums){
        if(num > end){
            end = num;
        }
    }
    int answer = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        cout << "s = " << start << "; e = " << end << "; m = " << mid << endl;
        int sumOfCeiledQuotients = getSumOfCeiledQuotients(nums, mid);
        cout << "sumOfCeiledQuotients = " << sumOfCeiledQuotients << endl;
        if(sumOfCeiledQuotients <= threshold){
            cout << "sumOfCeiledQuotients <= threshold" << endl;
            cout << "moving left" << endl;
            answer = mid;
            end = mid - 1;
        }
        else{
            cout << "sumOfCeiledQuotients > threshold" << endl;
            cout << "moving right" << endl;
            start = mid + 1;
        }
        cout << endl;
    }
    // return answer;
    return start; // will also work // 💡 myHint : we are supposed to move left on finding the answer
}

int main()
{
    // 📍 tc1
    // vector<int> nums = {1,2,5,9};
    // int threshold = 6;
    // 📍 tc2
    // vector<int> nums = {44,22,33,11,1};
    // int threshold = 5;

    // 📍 mtc1
    // vector<int> nums = {2,2,2,2};
    // int threshold = 4;
    // int threshold = 3; // not a valid value for threshold
    // 📍 mtc2
    // vector<int> nums = {1,1,1,1};
    // int threshold = 4;
    // int threshold = 5;
    // 📍 mtc3
    // vector<int> nums = {1};
    // int threshold = 1;
    // 📍 mtc4
    // vector<int> nums = {3};
    // int threshold = 1;
    // int threshold = 3;
    // int threshold = 4;
    // 📍 mtc5
    vector<int> nums = {2,2};
    // int threshold = 2;
    // int threshold = 4;
    // int threshold = 5;
    int threshold = 6;
    
    cout << smallestDivisor(nums, threshold) << endl;
    return 0;
};