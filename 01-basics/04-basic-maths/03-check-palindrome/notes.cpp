#include <iostream>
using namespace std;

// 🏆 approach 1 v2

// 📍 method 2 (pro optimization)
// - TC -> O(log10(n))
// - SC -> O(1)
// - more specifically, the while loop will run d/2 times, where d is the number of digits
// - in this approach, we reverse only half the number, if the number is a palindrome, the first half and the reversed second half will be equal 
// - because, we are reversing only half the number, the integer overflow check is not needed
bool isPalindrome(int x)
{
    // 1. Edge Case: Negatives are not palindromes.
    // 2. Edge Case: Numbers ending in 0 (like 10) are not palindromes, unless the number is 0 itself.
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }
    int reversedHalf = 0;
    // Keep moving digits from x to reversedHalf until reversedHalf is equal or larger
    while (x > reversedHalf)
    {
        reversedHalf = (reversedHalf * 10) + (x % 10);
        x /= 10;
    };
    // If length is even: x == reversedHalf (e.g., 1221 -> 12 == 12)
    // If length is odd: x == reversedHalf / 10 (e.g., 121 -> 1 == 12/10)
    return x == reversedHalf || x == reversedHalf / 10;
}

// 📍 why v2 is better than v1
// - In software engineering, explicit code is almost always better than implicit code.
// - Version 2 explicitly checks if (x < 0) return false;. This tells the reader immediately: "I know the rules — negative numbers cannot be palindromes (e.g., -121 becomes 121-), so I am handling that edge case first."
// - Version 1 handles negative numbers "accidentally" via the loop condition while (dup > 0). If x is negative, the loop is skipped entirely, and it returns 0 == x (which is false). While this produces the correct result, it forces the reader to simulate the loop in their head to realize that negative numbers are handled.

// 📍 NOTE
// - Since, we are either filtering out negatives explicitly (Version 2) or preventing the loop from running on negatives (Version 1), reverseNumber will never be negative, we can safely remove the INT32_MIN check to clean up the code.

// 📍 complexity analysis
// - TC -> O(log10(n))
// - SC -> O(1)
// 📍 approach 1 (v1) (implicit)
// Function to check if a given integer is a palindrome
// bool isPalindrome(int x)
// {
//     int dup = x; // Create a duplicate variable to store the original number
//     int reverseNumber = 0; // Initialize a variable to store the reverse of the number
//     // Iterate through each digit of the number until it becomes 0
//     while (dup > 0)
//     {
//         int lastDigit = dup % 10; // Extract the last digit of the number
//         if (reverseNumber > INT32_MAX / 10 || reverseNumber < INT32_MIN / 10) // 📍 we can safely remove the INT32_MIN check to clean up the code
//         {
//             return false;
//         };
//         reverseNumber = reverseNumber * 10 + lastDigit; // Build the reverse number by appending the last digit
//         dup /= 10; // Remove the last digit from the original number
//     };
//     return reverseNumber == x; // Check if the original number is equal to its reverse
// }
// 📍 approach 1 (v2) (explicit)
// Function to check if a given integer is a palindrome
// bool isPalindrome(int x)
// {
//     if (x < 0)
//     {
//         return false;
//     };
//     int dup = x; // Create a duplicate variable to store the original number
//     int reverseNumber = 0; // Initialize a variable to store the reverse of the number
//     // Iterate through each digit of the number until it becomes 0
//     while (dup != 0)
//     {
//         int lastDigit = dup % 10; // Extract the last digit of the number
//         if (reverseNumber > INT32_MAX / 10 || reverseNumber < INT32_MIN / 10) // 📍 we can safely remove the INT32_MIN check to clean up the code
//         {
//             return false;
//         };
//         reverseNumber = reverseNumber * 10 + lastDigit; // Build the reverse number by appending the last digit
//         dup /= 10; // Remove the last digit from the original number
//     };
//     return reverseNumber == x; // Check if the original number is equal to its reverse
// }

int main()
{
    // int number = -1;
    // int number = 0;
    // int number = 12321;
    // if (isPalindrome(number))
    // {
    //     cout << number << " is a palindrome." << endl;
    // }
    // else
    // {
    //     cout << number << " is not a palindrome." << endl;
    // }

    for (int i = 0; i <= 1000; i++)
    {
        if (isPalindrome(i))
        {
            cout << i << " is a palindrome." << endl;
        }
    }

    // cout<<(-121%10)<<endl; // -1

    return 0;
}
