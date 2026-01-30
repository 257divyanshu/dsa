// 📍 right shifting INT32_MIN by 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << (INT32_MIN) << endl; // -2147483648
    cout << bitset<32>(INT32_MIN) << endl; // 10000000000000000000000000000000
    cout << (INT32_MIN >> 1) << endl; // -1073741824
    cout << bitset<32>(INT32_MIN >> 1) << endl; // 11000000000000000000000000000000
    // 📝 right shifting a negative number fills with 1s instead of 0s
    return 0;
};

// 📍 left shifting INT32_MAX by 1
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout << ((INT32_MAX)<<1) << endl; // -2
//     // cout << bitset<32>(INT32_MAX) << endl; // 01111111111111111111111111111111
//     // 01111111111111111111111111111111 << 1
//     // 11111111111111111111111111111110
//     // TAKE TWO's COMPLIMENT
//     // STEP 1 : one's compliment
//     // 00000000000000000000000000000001
//     // STEP 2 : add 1
//     // 00000000000000000000000000000010
//     // result = -2
//     return 0;
// };

// 📍 operators
// - AND : 
//   - 0 & 0 -> 0
//   - 0 & 1 -> 0
//   - 1 & 1 -> 1
// - OR : 
//   - 0 | 0 -> 0
//   - 0 | 1 -> 1
//   - 1 | 1 -> 1
// - XOR : 
//   - 0 ^ 0 -> 0
//   - 0 ^ 1 -> 1
//   - 1 ^ 1 -> 0
// - RIGHT SHIFT (>>)
//   1. 13 >> 1
//   -> 13 -> 1101
//   -> 13 >> 1 -> 0110 -> 6
//   2. 13 >> 2
//   -> 13 -> 1101
//   -> 13 >> 1 -> 0110
//   -> 13 >> 2 -> 0011 -> 3
//   3. 13 >> 4
//   -> 13 -> 1101
//   -> 13 >> 1 -> 0110
//   -> 13 >> 2 -> 0011
//   -> 13 >> 3 -> 0001
//   -> 13 >> 4 -> 0000
//   📝 x >> k -> x / (2 ^ k) (here ^ denotes 'power' and not 'XOR operator')
// - LEFT SHIFT (<<)
//   1. 13 << 1
//   -> 13 -> 1101
//   -> 13 << 1 -> 11010 -> 26 
//   📝 x << k -> x * (2 ^ k) (here ^ denotes 'power' and not 'XOR operator')
// - NOT (~)
// - 1. ~ 5
//   -> 5  -> 00000000000000000000000000000101
//   -> ~5 -> 11111111111111111111111111111010
//   ->       00000000000000000000000000000101
//   ->       00000000000000000000000000000110
//   -> result : -6
// - 2. ~ -6
//   ->   6 -> 00000000000000000000000000000110
//   ->  ~6 -> 11111111111111111111111111111001
//   ->  -6 -> 11111111111111111111111111111010
//   -> ~-6 -> 00000000000000000000000000000101
//   -> result : 5
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout << ~ 5 << endl; // -6
//     cout << ~ (-6) << endl; // 5
//     return 0;
// };

// 📝 storing a negative integer
// - suppose the number if -13
// - first we'll drop the negative sign
// - 13's binary representation : 00000000000000000000000000001101
// - we need to take its two's complement
// - STEP 1 : take one's compliment
// - 11111111111111111111111111110010
// - STEP 2 : add one to it
// - 11111111111111111111111111110011
// - so the binary representation for -13 is 11111111111111111111111111110011 
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // cout << bitset<32>(-13) << endl; // 11111111111111111111111111110011
//     cout << bitset<32>(INT_MIN) << endl; // 10000000000000000000000000000000 
//     return 0;
// };

// 📍 1's complement and 2's complelement
// 1️⃣ demonstration 1 (1's complment of 13)
// -  13 -> 00000000000000000000000000001101
// - ~13 -> 11111111111111111111111111110010
// 📝 C++ uses Two's Complement to interpret signed integers.
// -  In Two's Complement, a number starting with 1 is treated as a negative number.
// - so 11111111111111111111111111110010 resembles some negative value
// - calculation of that negative value is done using two's complement
// - to calculate two's complement, there are two steps:
// - STEP 1 : take one's compliment
// - 00000000000000000000000000001101
// - STEP 2 : add one to it
// - 00000000000000000000000000001110
// - 00000000000000000000000000001110 represents 14
// - so -14 will be printed
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout << ~13 << endl;
//     // 📝 For any integer n, the value of ~n is always: 
//     // - ~n = -(n + 1)
//     // 📝 to get the binary representation of a number we can use the bitset<no_of_bits> function
//     cout << bitset<32>(13) << endl;
//     cout << bitset<32>(~13) << endl;
//     return 0;
// };

// 📍 binary to decimal
// - TC -> O(len)
// - SC -> O(1)
// - where len is the length of binary representation
// #include <bits/stdc++.h>
// using namespace std;
// int binaryToDecimal(string binaryRep){
//     int multiplier = 1;
//     int decimalValue = 0;
//     for(int i = binaryRep.length()-1; i>=0; i--){
//         if(binaryRep[i]=='1'){
//             decimalValue += multiplier;
//         };
//         multiplier *= 2;
//     };
//     return decimalValue;
// };
// int main()
// {
//     cout << "0" << " -> " << binaryToDecimal("0") << endl;
//     cout << "1" << " -> " << binaryToDecimal("1") << endl;
//     cout << "10" << " -> " << binaryToDecimal("10") << endl;
//     cout << "11" << " -> " << binaryToDecimal("11") << endl;
//     cout << "100" << " -> " << binaryToDecimal("100") << endl;
//     cout << "101" << " -> " << binaryToDecimal("101") << endl;
//     cout << "110" << " -> " << binaryToDecimal("110") << endl;
//     cout << "111" << " -> " << binaryToDecimal("111") << endl;
//     cout << "1000" << " -> " << binaryToDecimal("1000") << endl;
//     cout << "1001" << " -> " << binaryToDecimal("1001") << endl;
//     cout << "1010" << " -> " << binaryToDecimal("1010") << endl;
//     cout << "1011" << " -> " << binaryToDecimal("1011") << endl;
//     cout << "1100" << " -> " << binaryToDecimal("1100") << endl;
//     cout << "1101" << " -> " << binaryToDecimal("1101") << endl;
//     cout << "1110" << " -> " << binaryToDecimal("1110") << endl;
//     cout << "1111" << " -> " << binaryToDecimal("1111") << endl;
//     cout << "10000" << " -> " << binaryToDecimal("10000") << endl;
//     return 0;
// };

// 🏆 sir's approach
// - My approach is slower because of how computers handle strings in memory when we add characters to the front versus the back.
// - In C++, std::string stores characters in a contiguous block of memory (like an array).
// - The Problem with my approach: When we add a character to the front of a string, the computer cannot just "slip" it in. It has to:
//   - Create a new memory space (or shift existing data).
//   - Copy every single character currently in binaryRep one step to the right to make room for the new character at index 0.
//   - Insert the new character.
// - The Cost: As the string gets longer, this copying process takes longer. In the first iteration, you copy 0 characters. In the last iteration (for a 32-bit number), you are shifting ~30 characters.
// - Time Complexity: O(N^2) (Quadratic), where N is the number of bits.
// - The Advantage that sir's approach has: When we add a character to the end (+= or push_back), C++ usually has extra "reserved" space at the end of the string array. It simply drops the character into the next empty slot. No existing characters need to move.
// - The Cost:
//   - Appending: This is an "Amortized O(1)" operation (constant time). It is extremely fast.
//   - Reversing: The reverse function swaps characters from both ends meeting in the middle. This takes O(N) time.Time Complexity: O(N) + O(N) = O(N) (Linear).

// 📍 decimal to binary
// #include <bits/stdc++.h>
// using namespace std;
// string decimalToBinary(int num)
// {
//     string binaryRep = "";
//     // 📍 my approach TC -> O( log2(n) ^ 2 )
//     // while(num!=0){
//     //     int lastBit = num%2;
//     //     if(lastBit){
//     //         binaryRep = "1" + binaryRep;
//     //     }
//     //     else{
//     //         binaryRep = "0" + binaryRep;
//     //     };
//     //     num/=2;
//     // };
//     // return binaryRep;
//     // 📍 sir's approach TC -> O( log2(n) )
//     while (num != 0)
//     {
//         int lastBit = num % 2;
//         if (lastBit)
//         {
//             binaryRep += '1';
//             // 📝1️⃣ appending a character to a string -> ammortized constant time O(1)
//         }
//         else
//         {
//             binaryRep += '0';
//         };
//         num /= 2;
//     };
//     reverse(binaryRep.begin(), binaryRep.end());
//     // 📝 reverse function's TC -> O(n)
//     return binaryRep;
// };
// int main()
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         cout << i << " -> " << decimalToBinary(i) << endl;
//     };
//     return 0;
// };

// 📝1️⃣ appending a character to a string -> ammortized constant time O(1)
// - string is essentially a dynamic array of characters
// - Most of the time (O(1)): The string usually has hidden "spare capacity" (extra memory reserved). Appending a character just fills one of these empty slots. This is instant.
// - Occasionally (O(N)): If the string runs out of spare capacity, it must:
//   - Allocate a larger block of memory.
//   - Copy the entire existing string to the new block (Linear Time).
//   - Delete the old block.
// - Because this expensive resizing happens very rarely (usually when the string doubles in size), the average time per append remains constant.
// 💡 OPTIMIZATION TIP:
// - If we know we are going to append a lot of characters (e.g., inside a loop), we can force it to be Strictly O(1) by reserving memory first:
// std::string text;
// text.reserve(1000); // Pre-allocate memory for 1000 chars
// // Now the first 1000 appends are guaranteed to be O(1) without resizing
// text.push_back('a');