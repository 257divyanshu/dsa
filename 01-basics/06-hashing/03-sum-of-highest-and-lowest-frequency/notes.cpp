#include <bits/stdc++.h>
using namespace std;

// 📝 first approach: since the values are bounded, use a frequency array indexed by value instead of a map, then scan it in increasing order to track the highest and lowest non-zero frequencies

// 📍 first approach
// TC -> O(n+l)
// SC -> O(l)
// where l is the largest value in the array
int sumHighestAndLowestFrequency(vector<int> &nums)
{
    int largestNum = 0;
    for (int num : nums) // TC -> O(n)
    {
        if (num > largestNum)
        {
            largestNum = num;
        }
    }
    vector<int> hashVect(largestNum + 1, 0); // SC -> O(l)
    for (int num : nums) // TC -> O(n)
    {
        hashVect[num]++;
    }
    int largestFreq = 0;
    int smallestFreq = 1e5 + 1;
    for (int i = 0; i < hashVect.size(); i++) // TC -> O(l)
    {
        if(hashVect[i] > largestFreq){
            largestFreq = hashVect[i];
        }
        if(hashVect[i] != 0 && hashVect[i] < smallestFreq){
            smallestFreq = hashVect[i];
        }
    }
    return largestFreq + smallestFreq;
}

int main()
{

    return 0;
};