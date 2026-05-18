#include <bits/stdc++.h>
using namespace std;

// 🏆 iterative approach 2
// TC -> O(n)
// SC -> O(1)
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int a = 0;
    int b = 1;
    int i = 2;
    while (i <= n)
    {
        int temp = b;
        b = a + b;
        a = temp;
        i++;
    }
    return b;
}

// 📍 iterative approach 1
// TC -> O(n)
// SC -> O(n)
// int fib(int n)
// {
//     // int arr[n+1] = {}; // ❌ variable-sized object may not be initialized
//     vector<int> arr(n+1, 0);
//     arr[1] = 1;
//     for(int i = 2; i<=n; i++){
//         arr[i] = arr[i-1] + arr[i-2];
//     }
//     return arr[n];
// }

// 📍 recursive approach
// int fib(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     };
//     return fib(n - 1) + fib(n - 2);
// }

int main()
{

    return 0;
};