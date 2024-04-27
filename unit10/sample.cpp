#include <bits/stdc++.h>

// CONSTANT WINDOW PROBLEMS

// QUESTION 1
// given an array of integers and an integer k, you have to find the maximum sum that can be achieved by taking k consecutive elements together
// the value of k here is constant 
// so this is called a constant window
// instead of calculating the sum for each window
// we can calculate the sum for the first window only
// and keep on removing the first element of the previous window from the sum
// and keep adding the last element of the new window
// till we reach r==n-1
// since max value of r can be n-1
// we need to run the while loop with the condition r<n-1 (this will make reach r it's max which is n-1)
// if we had used r<n
// then the there will come a situation when z r = n
// but vect[r] which is equivalent to vect[n] cannot be calculated
using namespace std;
int maxSum(int k, vector<int> vect)
{
    int n = vect.size();
    int l = 0;
    int r = n-k;
    int maxSum = 0;
    int sum = 0;
    for(int i = l; i<=r; i++)
    {
        sum+=vect[i];
    };
    while(r<n-1)
    {
        sum-=vect[l];
        l++;
        r++;
        sum+=vect[r];
        maxSum = max(maxSum,sum);
    };
    return maxSum;
};
int main()
{
    vector<int> vect;
    vect.push_back(-1); 
    vect.push_back(2); 
    vect.push_back(3);
    vect.push_back(3); 
    vect.push_back(4); 
    vect.push_back(5); 
    vect.push_back(-1);
    int k = 4;
    cout<<maxSum(k,vect);
    return 0;
};