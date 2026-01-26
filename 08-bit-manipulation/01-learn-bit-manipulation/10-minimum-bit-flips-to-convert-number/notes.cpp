#include <bits/stdc++.h>
using namespace std;

// - if we don't use BRIAN KERNIGHAN'S ALGORITHM, and simply traverse all the bits one by one, to get the number of set bits in xorResult, then TC -> log2(start^goal)

// 📍 sir's approach
// - TC -> O(1) (O(32) more precisely)
// - SC -> O(1)
int minBitFlips(int start, int goal)
{
    int bitFlips = 0;
    int xorResult = start ^ goal;
    while (xorResult != 0)
    {
        bitFlips++;
        xorResult = xorResult & (xorResult - 1);
    };
    return bitFlips;
};

// 📍 my approach
// - TC -> O(1) (O(32) more precisely)
// - SC -> O(1)
// int minBitFlips(int start, int goal)
// {
//     int bitFlips = 0;
//     while (start != 0 || goal != 0)
//     {
//         if ((start & 1) != (goal & 1))
//         {
//             bitFlips++;
//         };
//         start >>= 1;
//         goal >>= 1;
//     };
//     return bitFlips;
// };

int main()
{

    return 0;
};