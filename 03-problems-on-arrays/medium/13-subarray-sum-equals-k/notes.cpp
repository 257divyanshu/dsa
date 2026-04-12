#include <bits/stdc++.h>
using namespace std;

// 📍 sir's brute-force approach
// - calculate the sum of each subarray
// - update count if subarray's sum = k
// - TC -> O(n^2)

// 📍 my first approach (also sir's optimal approach) (took help of ARRAY -> EASY -> LONGEST SUBARRAY WITH GIVEN SUM)
// - two pointer approach using the concept of prefixSums
// - TC -> O(n) (if using unordered_map)
// - TC -> O(n * log(n)) (if using map)
// - SC -> O(n)
int subarraySum(vector<int> &vect, int k)
{
    int count = 0;
    unordered_map<int, int> hashMap;
    hashMap[0] = 1;
    int prefixSum = 0;
    for (int i = 0; i < vect.size(); i++)
    {
        prefixSum += vect[i];
        count += hashMap[prefixSum - k];
        hashMap[prefixSum]++;
    }
    return count;
}

int main()
{

    return 0;
};