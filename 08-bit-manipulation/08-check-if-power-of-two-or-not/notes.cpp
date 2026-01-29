#include <bits/stdc++.h>
using namespace std;

// 📍 right approach
bool isPowerOfTwo(int n)
{
    if (n == 0 || n == INT_MIN)
    {
        return false;
    };
    return (n & (n - 1)) == 0;
};

// 📍 wrong approach
// bool isPowerOfTwo(int n)
// {
//     if (n == 0 || n == INT_MIN)
//     {
//         return false;
//     };
//     return (n ^ (n - 1)) == 0;
// };

int main()
{
    // 📍 negative numbers won't be power of 2
    // cout << bitset<32>(-2) << endl; // 11111111111111111111111111111110
    // cout << bitset<32>(-1) << endl; // 11111111111111111111111111111111
    // cout << bitset<32>((-2)&(-1)) << endl; // 11111111111111111111111111111110
    // ⚠️ EDGE CASE : 0 & -1 returns 0, but 0 is not a power of 2
    // cout << (0 & -1) << endl; // 0
    // 📍 negatives of powers of 2 are not powers of 2
    // cout << (-2 ^ -1) << endl; // 1
    // cout << (-4 ^ -3) << endl; // 1
    // cout << (-8 ^ -7) << endl; // 1
    // cout << (-3 ^ -2) << endl; // 3

    cout << bitset<32>(INT32_MIN) << endl; // 10000000000000000000000000000000
    return 0;
};