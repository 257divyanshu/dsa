#include <bits/stdc++.h>
using namespace std;

// 🏆 approach 2

// 📍 approach 2 (better method)
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

// 📍 approach 1 (bruteforce method)
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