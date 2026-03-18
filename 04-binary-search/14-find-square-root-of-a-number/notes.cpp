#include <bits/stdc++.h>
using namespace std;

// 📝 NOTE
// - this question comes under the BINARY SEARCH ON ANSWERS concept
// - if in a question, we are sure about the answer's range and we are asked to find minimum possible integer or maximum possible integer, then that question is a question of BINARY SEARCH ON ANSWERS

// QUESTION REFRAMED to understand that it comes under BINARY SEARCH ON ANSWERS
// - find the maximum integer which on square <= n

// 📍 optimal approach (sir's approach)
// - TC -> O(log2(n))
// - SC -> O(1)
int squareRoot(int n)
{
    int start = 0;
    int end = n;
    // int result = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        cout << "start = " << start << endl;
        cout << "end = " << end << endl;
        cout << "mid = " << mid << endl;
        cout << endl;
        if (mid * mid <= n)
        {
            // result = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        };
    };
    cout << "returning " << end << endl;
    return end; // 💡 myHint : we are supposed to move right on finding a candidate answer
    // return result; // this is also correct
};
// 📍 TEST CASE to understand how returning end works : n = 28

// 📍 bruteforce approach
// - TC -> O(n)
// - SC -> O(n)
// int squareRoot2(int n){
//     int result = -1;
//     for(int i = 0; i<=n; i++){
//         if(i*i <= n){
//             result = i;
//         }
//         else{
//             break;
//         };
//     };
//     return result;
// };

// 📍 my approach (using binarySearch)
// - TC -> O(log2(n))
// - SC -> O(1)
// int squareRoot(int n)
// {
//     int start = 0;
//     int end = n;
//     int result = -1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         cout << "start = " << start << endl;
//         cout << "end = " << end << endl;
//         cout << "mid = " << mid << endl;
//         cout << endl;
//         if (mid * mid == n)
//         {
//             result = mid;
//             cout << "breaking" << endl;
//             break;
//         };
//         if (mid * mid < n)
//         {
//             // if(result==-1 || mid>result){
//             //     result = mid;
//             //     cout << "updating result to " << result << endl;
//             // };
//             result = mid;
//             cout << "updating result to " << result << endl;
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         };
//     };
//     cout << "returning " << result << endl;
//     return result;
// };

int main()
{
    // cout << squareRoot(25) << endl;
    // cout << squareRoot(36) << endl;
    // cout << squareRoot(37) << endl;
    cout << squareRoot(28) << endl;
    return 0;
};