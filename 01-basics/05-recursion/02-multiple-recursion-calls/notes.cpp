#include <bits/stdc++.h>
using namespace std;

// 📍 find the nth fibonacci number
// 🔗 https://leetcode.com/problems/fibonacci-number/description/
// - fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181
// - for this particular question:f(0) -> 0
//   - f(0) -> 0
//   - f(1) -> 1
//   - f(2) -> 1
//   - f(3) -> 2
// 📍 APPROACH 1: iterative version
// - TC -> O(n)
// - SC -> O(1)
// int nthFibonacciNumber(int n){
//     if(n == 0){
//         return 0;
//     }

//     int a = 0;
//     int b = 1;

//     int i = 2;
//     while(i<=n){
//         int temp = a + b;
//         a = b;
//         b = temp;
//         i++;
//     }

//     return b;
// }
// 📍 APPROACH 2: recursive version
// 📝 Each call branches into two recursive calls f(n-1) and f(n-2), recomputing the same subproblems repeatedly.
// - TC: O(2^n): each call branches into 2 more calls, forming a binary recursion tree of depth n. So roughly 2^n total calls.
// - SC: O(n): the recursion call stack depth is at most n (the longest path from root to leaf is n → n-1 → n-2 → ... → 0).
int nthFibonacciNumber(int n){
    if(n<=1){
        return n;
    }
    return nthFibonacciNumber(n-1) + nthFibonacciNumber(n-2);
}

int main()
{
    for(int i = 0; i<=19; i++){
        cout << nthFibonacciNumber(i) << endl;
    }

    return 0;
};