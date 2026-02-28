#include <bits/stdc++.h>
using namespace std;

// 📝 NOTE
// - its given in the problem that a majority element always exists in the array
// - if that was not guranteed, we would have to do a single pass on the array again, to check if the CANDIDATE that MOORE'S VOTING ALGORITHM gave is actually the majority element
// - doing so would add add O(n) to the TC, making the overall TC O(2 * n)

// 📍 optimal approach (MOORE'S VOTING ALGORITHM) (no additional data structure required)
// - TC -> O(n)
// - SC -> O(1)
int majorityElement(vector<int> &nums) {
    int candidate = 0;
    int count = 0;
    for (int num : nums) {
        // 1. If count is 0, we must pick a new candidate
        if (count == 0) {
            candidate = num;
        }
        // 2. If current number matches candidate, increment count
        // Otherwise, decrement count
        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}

// 📍 better approach (using additional data structure)
// - if using a map : TC -> O(n * log(m)) (more precisely : O(n * log(m)) + m) (where m is the size of the map) 
// - if using an unordered_map : TC -> O(n) (more precisely : O(n + m) (where m is the size of the unordered_map) 
// - SC -> O(m) (where m is the size of the map/unordered_map)
// - in the worst case m will be ( [n/2] + 1 ) for odd n and ( n/2 ) for even n

// 📍 bruteforce approach
// - TC -> O(n^2)
// - SC -> O(1)
// - involves two loops
// - for every element in the array we'll count its frequency, if its frequency is greater than [n/2], we'll return that element

int main()
{
    // 📍 a nice testcase
    // vector<int> vect = {2,2,1,1,1,2,2};

    // 📍 striver's testcase
    vector<int> vect = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    cout << vect.size() << endl;

    return 0;
};