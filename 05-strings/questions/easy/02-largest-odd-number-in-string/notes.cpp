#include <bits/stdc++.h>
using namespace std;

// 🔬 LEARNING
// - while working on the bruteforce approach, I tried converting substrings into numbers (integers and float), only to discover that neither integer nor float datatype could handle the substring's numeric converions because of the constaint 1 <= num.length <= 105
// 📝 LESSON : don't ignore constraints (I did dry run the bruteforce approach despite being pretty sure about the logic, but missed analysing the constraints due to the excitement of 'testcase dry-run success')

// 📍 my second approach ✔️
// TC -> O(n)
// SC -> O(n)
// 📍 TC ANALYSIS
// 📍 Worst Case
// No odd digit OR odd digit at index 0
// Loop runs full n iterations
// One substr of size n
// 👉 Total TC: O(n) + O(n) = O(n)
// 📍 Best Case
// Last digit is odd
// Loop stops immediately
// substr of size n
// TC: O(n) (dominated by substring copy)
string largestOddNumber(string num)
{
    for (int i = num.length(); i >= 0; i--)
    {
        if (num[i] & 1)
        {
            return num.substr(0, i + 1);
        }
    };
    return "";
};

// 📍 my first approach ✔️
// TC -> O(n^2)
// SC -> O(n)
// string largestOddNumber(string num)
// {
//     string largestOdd = ""; // SC -> O(numLen)
//     largestOdd.reserve(num.length());
//     string candidate = ""; // SC -> O(numLen)
//     candidate.reserve(num.length());
//     for (int i = 0; i < num.length(); i++) // TC -> O(numLen)
//     {
//         candidate += num[i];
//         if (num[i] & 1)
//         {
//             largestOdd = candidate; // TC -> (largestOddNumLen)
//         }
//     };
//     return largestOdd;
// };

int main()
{
    // 7542351161
    // 2147483647
    char character = '0';
    cout << (character & 1) << endl;
    return 0;
};