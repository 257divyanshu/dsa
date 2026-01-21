// 📍 decimal to binary
#include <bits/stdc++.h>
using namespace std;

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

string decimalToBinary(int num)
{
    string binaryRep = "";
    // 📍 my approach
    // while(num!=0){
    //     int lastBit = num%2;
    //     if(lastBit){
    //         binaryRep = "1" + binaryRep;
    //     }
    //     else{
    //         binaryRep = "0" + binaryRep;
    //     };
    //     num/=2;
    // };
    // return binaryRep;
    // 📍 sir's approach
    while (num != 0)
    {
        int lastBit = num % 2;
        if (lastBit)
        {
            binaryRep += '1';
            // 📝1️⃣ appending a character to a string -> ammortized constant time O(1)
        }
        else
        {
            binaryRep += '0';
        };
        num /= 2;
    };
    reverse(binaryRep.begin(), binaryRep.end());
    // 📝 reverse function's TC -> O(n)
    return binaryRep;
};
int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << " -> " << decimalToBinary(i) << endl;
    };
    return 0;
};

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