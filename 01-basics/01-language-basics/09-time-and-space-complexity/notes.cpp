// - Most of online servers that run code, execute roughly 10^8 operations in approximately 1 second

// - NOTE : A company may use the same data for different purposes. That is why we should not attempt to manipulate the given data for reducing the space complexity. So, we will never manipulate the given data i.e. the inputs until the interviewer specifically says so.

// 📍 space complexity
// - Space complexity generally represents the summation of auxiliary space and the input space. Auxiliary space refers to the space that we use additionally to solve a problem. And input space refers to the space that we use to store the inputs.

// 📍 demonstration
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         cout << "Hare Krishna" << endl;
//     }
//     return 0;
// };
// - The precise time complexity is O(3N + 1).
// - after dropping the constant terms, time complexity will be O(N).

// 📍 rules to follow while calculating time complexity
// - always calculate the time complexity for the worst-case scenario
// - avoid including the constant terms
// - also avoid the lower values

// 📍 time complexity
// - The rate at which the time, required to run a code, changes with respect to the input size, is considered the time complexity.