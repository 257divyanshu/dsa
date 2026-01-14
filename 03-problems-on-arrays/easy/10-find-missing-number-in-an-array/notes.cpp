#include <bits/stdc++.h>
#include <iterator>
using namespace std;

// 🏆 approach 1
// 📍 WHY APPROACH 1?
// - The bitwise XOR operation never accumulates magnitude efficiently enough to cause an Integer Overflow.
// - It is perfectly safe regardless of how large n becomes.
// - Specifically for the range 0...n, the cumulative XOR result is mathematically proven to always be either n, 1, n+1, or 0.
// - Also, XOR operations are incredibly fast on modern CPUs.
// 📍 WHY NOT APPROACH 2?
// - because there is Integer Overflow Risk!
// - If n is very large (e.g., closer to the max value of an integer), calculating n * (n+1) might exceed the limit of a 32-bit integer before we even divide by 2.

// 📍 approach 2
// TC : O(n)
// SC : O(1)
// int missingNumber(vector<int> &nums)
// {
//     int n = nums.size();
//     int sumTillN = (n * (n + 1)) / 2;
//     int sumOfNums = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         sumOfNums += nums[i];
//     };
//     return sumTillN - sumOfNums;
// }

// 📍 approach 1
// TC : O(n)
// SC : O(1)
int missingNumber(vector<int> &nums)
{
    int missingOne = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
        missingOne ^= i;
        missingOne ^= nums[i];
    };
    return missingOne;
}

int main()
{

    // 📍 ways to declare a cpp array

    // // 1. Basic Static Array (Uninitialized - contains garbage values)
    // int arr1[5];

    // // 2. Static Array with Initialization
    // int arr2[5] = {10, 20, 30, 40, 50};

    // // 3. Static Array (Size deduced automatically)
    // int arr3[] = {1, 2, 3};

    // // 4. Zero Initialization (All elements become 0)
    // int arr4[5] = {0};

    // // 5. Partial Initialization (First two are 1, 2; rest are 0)
    int arr5[5] = {1, 2};
    // cout<<size(arr5)<<endl; // 📍 identifier "size" is undefined
    // cout<<arr5.size()<<endl; // 📍 expression must have class type but it has type "int *"
    // cout<<arr5.length()<<endl; // 📍 expression must have class type but it has type "int *"

    // 📍 0^n = n
    // cout<<(0^1)<<endl; // 1
    // cout<<(0^2)<<endl; // 2
    // cout<<(0^3)<<endl; // 3

    return 0;
};