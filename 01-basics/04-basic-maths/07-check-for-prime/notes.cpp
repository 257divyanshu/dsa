#include <bits/stdc++.h>
using namespace std;

// 🏆 approach 2

// 📝 Approach 2 (square root optimization): Loop only up to √n — if n has a divisor larger than √n, its pair must be smaller than √n and would've already been caught. TC: O(√n), SC: O(1)

// 📍 approach 2 (square root optimization)
// - TC -> O(sqrt(n))
// - SC -> O(1)
bool isPrime(int num)
{
    if (num == 0 || num == 1)
    {
        cout << num << " is neither prime nor composite" << endl;
        return false;
    };
    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        };
    };
    return true;
};

// 📝 Approach 1 (brute force): Loop from 2 to n-1, return false if any i divides n.

// 📍 approach 1 (brute force)
// - TC -> O(n)
// - SC -> O(1)
// bool isPrime(int num)
// {
//     if (num == 0 || num == 1)
//     {
//         cout << num << " is neither prime nor composite" << endl;
//         return false;
//     };
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         };
//     };
//     return true;
// };

int main()
{
    int count = 0;
    for (int i = 0; i <= 100; i++)
    {
        if (isPrime(i))
        {
            // cout << i << " is prime " << endl;
            count++;
        };
    };
    cout << count << " primes <= 100" << endl; // 25
    return 0;
};