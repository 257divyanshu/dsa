#include <bits/stdc++.h>
using namespace std;

// QUESTION 
// - Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

// 📍 bruteforce approach
// - TC -> O(n * log(n)) (more precisely : O(n * log(n) + n))
// int secondLargestElement (vector<int> vect) {
//     int n = vect.size();
//     sort(vect.begin(), vect.end());
//     int largest = vect[n - 1];
//     int secondLargest = -1;
//     for(int i = n-2; i>=0; i--){
//         if(vect[i] != largest){
//             secondLargest = vect[i];
//             break;
//         };
//     };
//     return secondLargest;
// };

// 📍 optimal approach
// - TC -> O(n)
int secondLargestElement(vector<int> vect)
{
    int largest = vect[0];
    int secondLargest = -1;
    // 📝 setting secondLarget = vect[0]; will give wrong answer for test cases where the first element is the larget (e.g. test case vect = {3,2})
    for (int i = 1; i < vect.size(); i++)
    {
        if (vect[i] > largest)
        {
            secondLargest = largest;
            largest = vect[i];
        }
        else if (
            (vect[i] < largest) &&
            (vect[i] > secondLargest))
        {
            secondLargest = vect[i];
        };
    };
    return secondLargest;
};

int main()
{

    return 0;
};