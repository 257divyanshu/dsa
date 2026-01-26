#include <bits/stdc++.h>
using namespace std;

// 📍 polished version of my approach
// TC -> O(number of set bits) (O(31) in the worst case)
// SC -> O(1)
int countSetBits(int num){
    int setBitCount = 0;
    unsigned int n = (unsigned int)num;
    while (n > 0)
    {
        n = n & (n - 1);
        setBitCount++;
        // cout << "updated num -> " << num << endl;
    };
    return setBitCount;
}

// 📍 my approach (BRIAN KERNIGHAN'S algorithm)
// int countSetBits(int num){
//     int setBitCount = 0;
//     while (num != 0)
//     {
//         setBitCount++;
//         if(num == INT32_MIN){
//             break;
//         };
//         num = num & (num - 1);
//         // cout << "updated num -> " << num << endl;
//     };
//     return setBitCount;
// }

int main()
{
    // cout << countSetBits(0) << endl; // 0 ✅
    // cout << countSetBits(1) << endl; // 1 ✅

    // cout << bitset<32>(INT32_MIN) << endl; // 10000000000000000000000000000000 
    // cout << bitset<32>(INT32_MIN + 1) << endl; // 10000000000000000000000000000001
    // cout << bitset<32>(INT32_MIN + 2) << endl; // 10000000000000000000000000000010
    // cout << bitset<32>(INT32_MIN + 3) << endl; // 10000000000000000000000000000011

    // cout << countSetBits(INT32_MIN) << endl;
    // cout << countSetBits(INT32_MIN + 1) << endl;
    // cout << countSetBits(INT32_MIN + 2) << endl;
    // cout << countSetBits(INT32_MIN + 3) << endl;

    // cout << ((INT32_MIN + 3)) << endl;
    // cout << bitset<32>((INT32_MIN + 3)) << endl;
    // cout << ((INT32_MIN + 3) >> 1) << endl;
    // cout << bitset<32>((INT32_MIN + 3) >> 1) << endl;
    // cout << ((INT32_MIN + 3) >> 2) << endl;
    // cout << bitset<32>((INT32_MIN + 3) >> 2) << endl;

    // cout << (INT32_MIN) << endl; // -2147483648
    // cout << (unsigned int)(INT32_MIN) << endl; // 2147483648

    // 📍 command to check the version of c++ being used
    // cout << __cplusplus << endl;

    // 📍 built in command to get the number of set bits
    cout << __builtin_popcount(INT32_MIN + 3) << endl;

    return 0;
};