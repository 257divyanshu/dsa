#include <bits/stdc++.h>
using namespace std;

int secondMostFrequentElement(vector<int> &nums)
{
    map<int,int> hashMap;
    for(int num : nums){
        hashMap[num]++;
    }
    int largestFrequency = hashMap.begin()->second;
    int secondLargestFrequency = -1;
    int mostFreqElem = hashMap.begin()->first;
    int secondMostFreqElem = -1;
    for(auto it : hashMap){
        if(it.second > largestFrequency){
            secondLargestFrequency = largestFrequency;
            largestFrequency = it.second;
            secondMostFreqElem = mostFreqElem;
            mostFreqElem = it.first;
            
        }
        else if (
            (it.second < largestFrequency) &&
            (it.second > secondLargestFrequency)
        ){
            secondLargestFrequency = it.second;
            secondMostFreqElem = it.first;
        }
    }
    return secondMostFreqElem;
}

int main()
{
    // vector<int> nums = {1,2,2,3,3,3};
    // vector<int> nums = {4,4,5,5,6,7};
    vector<int> nums = {10,9,7,7};
    cout << secondMostFrequentElement(nums) << endl;
    return 0;
};