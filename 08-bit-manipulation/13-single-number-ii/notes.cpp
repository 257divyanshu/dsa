#include <bits/stdc++.h>
using namespace std;
long long customExponentiation(int a, int b)
{
    long long result = 1;
    for (int i = 1; i <= b; i++)
    {
        result *= a;
    };
    return result;
};

// 📍 bruteforce approach (sir's approach)
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int result = 0;
        for (int i = 0; i <= 31; i++)
        {
            // cout << " i : " << i << endl;
            // cout << "current multiplier : " << multiplier << endl;
            int bitSum = 0;
            for (int j = 0; j < nums.size(); j++)
            {
                // cout << " j : " << j << endl;
                // cout << "adding " << ((nums[j] >> i) & 1) << " to bitSum" <<
                // endl;
                if (nums[j] & (1 << i))
                {
                    bitSum++;
                };
            };
            // cout << "bitSum : " << bitSum << endl;
            if (bitSum % 3 == 1)
            {
                result = result | (1 << i);
                // cout << "current multiplier : " << multiplier << endl;
                // cout << "result updated : " << result << endl;
            };
        };
        // cout << "final result : " << result << endl;
        return result;
    };
};

// 💡 hint 1
// - If you sum up all the 1s at that specific bit position for every number in the array, what pattern or property would that sum have, considering every number appears exactly three times (except one)?
// 📍 my first approach
// int singleNumber(vector<int> &nums)
// {
//     long long result = 0;
//     long long multiplier = 1;
//     for (int i = 0; i <= 31; i++)
//     {
//         bool stopFlag = true;
//         cout << " i : " << i << endl;
//         // cout << "current multiplier : " << multiplier << endl;
//         int bitSum = 0;
//         for (int j = 0; j < nums.size(); j++)
//         {
//             // cout << " j : " << j << endl;
//             // cout << "adding " << ((nums[j] >> i) & 1) << " to bitSum" << endl;
//             int rightShiftedValue = (nums[j] >> i);
//             cout << "rightShiftedValue " << rightShiftedValue << endl;
//             if (rightShiftedValue != 0)
//             {
//                 stopFlag = false;
//             };
//             bitSum += (rightShiftedValue & 1);
//         };
//         if (stopFlag)
//         {
//             cout << "stopping" << endl;
//             break;
//         };
//         // cout << "bitSum : " << bitSum << endl;
//         if (bitSum % 3 == 1)
//         {
//             result += multiplier;
//             // cout << "current multiplier : " << multiplier << endl;
//             // cout << "result updated : " << result << endl;
//         };
//         multiplier *= 2;
//     };
//     cout << "final result : " << result << endl;
//     return result;
// };

int main()
{
    // vector<int> nums = {2, 2, 3, 2};
    // vector<int> nums = {2, 2, -2147483648, 2};
    // vector<int> nums = {2, 2, -2147483647, 2};
    // vector<int> nums = {30000,500,100,30000,100,30000,100};
    // vector<int> nums = {2, 2, -1, 2};

    // cout << bitset<32>(INT32_MIN+1) << endl; // 10000000000000000000000000000001
    // cout << bitset<32>((INT32_MIN+1) >> 1) << endl; //
    // vector<int> nums = {2,2,2,INT32_MIN+1};
    // cout << singleNumber(nums) << endl;

    // 💡 why casting the result from long long to int worked magically!

    // cout << customExponentiation(2,32) << endl; // 4294967296
    // cout << bitset<64>(4294967296) << endl; // 0000000000000000000000000000000100000000000000000000000000000000
    // cout << (int)customExponentiation(2,32) << endl; // 0
    // cout << customExponentiation(2,32) - 1 << endl; // 4294967295
    // cout << bitset<64>(4294967295) << endl; // 0000000000000000000000000000000011111111111111111111111111111111
    // cout << (int)(customExponentiation(2,32) - 1) << endl; // -1

    // 💡 have multiplier as a 64 bit long long is necessary
    // - if we had multiplier as a 32 bit integer then, the multiplier updation statement would cause integer overflow error at i = 30

    return 0;
};