#include <bits/stdc++.h>
using namespace std;

// 📍 second approach
// TC -> O(n + l)
// SC -> O(l)
// where l is the largest value in the array
int secondMostFrequentElement(vector<int> &nums)
{
    int largestNum = 0;
    for(int num : nums){ // TC -> O(n)
        if(num > largestNum){
            largestNum = num;
        }
    }
    vector<int> hashVect (largestNum + 1, 0); // SC -> O(l)
    for(int num : nums){ // TC -> O(n)
        hashVect[num]++;
    }
    int largestFrequency = 0;
    int secondLargestFrequency = -1;
    int mostFreqElem = 0;
    int secondMostFreqElem = -1;
    for(int i = 0; i<hashVect.size(); i++){ // TC -> O(l)
        if(hashVect[i] > largestFrequency){
            secondLargestFrequency = largestFrequency;
            largestFrequency = hashVect[i];
            secondMostFreqElem = mostFreqElem;
            mostFreqElem = i; 
            
        }
        else if (
            (hashVect[i] < largestFrequency) &&
            (hashVect[i] > secondLargestFrequency)
        ){
            secondLargestFrequency = hashVect[i];
            secondMostFreqElem = i;
        }
    }
    return secondMostFreqElem;
}

// 📍 why TC of first approach is better conveyed by O(n * log(k)) than by O(n * log(n))
// - O(n * log(n)) is correct as worst case bound (when all elements are distinct, k = n)
// - O(n * log(k)) shows the cost depends on the number of distinct elements, not just n
// - both are valid upper bounds; O(n log k) just carries more information

// 📍 first approach
// TC -> O(n * log(k))
// SC -> O(k)
// where k is the number of distinct elements
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