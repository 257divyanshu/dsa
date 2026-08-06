// 📍 check if a string is palindrome
#include <bits/stdc++.h>
using namespace std;
// 🏆 approach 1 polished version
// 📍 approach 1 polished version
// - TC -> O(n)
// - SC -> O(1)
bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        // 1. Move start forward if not alphanumeric
        while (!isalnum(s[start]))
        {
            start++;
            continue;
        };
        // 2. Move end backward if not alphanumeric
        while (!isalnum(s[end]))
        {
            end--;
            continue;
        };
        // cout << s[start] << " and " << s[end] << endl;
        // 3. Compare characters
        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        };
        // 4. Update pointers after a successful match
        start++;
        end--;
    };
    return true;
};
// 📍 approach 2
// - TC -> O(n)
// - SC -> O(n)
// - where n is the length of the string s
// bool isPalindrome(string s)
// {
//     string updatedString = "";
//     for (int i = 0; i < s.length(); i++) // O(n)
//     {
//         if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') ||
//             (s[i] >= '0' && s[i] <= '9'))
//         {
//             updatedString += tolower(s[i]); // 📝 appending a character is ammortized constant time operation (O(1)) 
//         };
//     };
//     int start = 0;
//     int end = updatedString.length() - 1;
//     while (start <= end) // O(n/2)
//     {
//         // cout << updatedString[start] << " and " << updatedString[end] << endl;
//         if (updatedString[start] != updatedString[end])
//         {
//             return false;
//         };
//         start++;
//         end--;
//     };
//     return true;
// };
// 📍 approach 1
// - TC -> O(n)
// - SC -> O(1)
// - where n is the length of the string s
// bool isPalindrome(string s)
// {
//     int start = 0;
//     int end = s.length() - 1;
//     while (start <= end) // O(n/2)
//     {
//         while (start <= end && !(s[start] >= 'a' && s[start] <= 'z') &&
//                !(s[start] >= 'A' && s[start] <= 'Z') &&
//                !(s[start] >= '0' && s[start] <= '9'))
//         {
//             start++;
//         };
//         while (start <= end && !(s[end] >= 'a' && s[end] <= 'z') &&
//                !(s[end] >= 'A' && s[end] <= 'Z') &&
//                !(s[end] >= '0' && s[end] <= '9'))
//         {
//             end--;
//         };
//         // cout << s[start] << " and " << s[end] << endl;
//         if (start <= end && (tolower(s[start]) != tolower(s[end])))
//         {
//             return false;
//         };
//         start++;
//         end--;
//     };
//     return true;
// };
// int main()
// {
//     string lordName = "Shri Krishna";
//     cout << lordName.length() << endl;
//     return 0;
// };

// 📍 reverse an array
// #include <bits/stdc++.h>
// using namespace std;
// void reverseArray(vector<int> &nums, int i)
// {
//     int n = nums.size();
//     if (i > (n / 2))
//     {
//         return;
//     };
//     swap(nums[i], nums[n - i - 1]);
//     reverseArray(nums, i + 1);
// };
// int main()
// {
//     // vector<int> nums = {1, 2, 3, 4, 5};
//     vector<int> nums = {1, 2, 3, 4, 5, 6};
//     reverseArray(nums, 0);
//     for (int num : nums)
//     {
//         cout << num << " ";
//     };
//     cout << endl;
//     return 0;
// };

// 📍 factorial of a number
// #include <bits/stdc++.h>
// using namespace std;
// // 1️⃣ functional recursion
// // - TC -> O(n)
// // - SC -> O(n) (stack space)
// // int facto (int n){
// //     if(n == 0){
// //         return 1;
// //     };
// //     return (n * facto(n-1));
// // };
// // 2️⃣ parameterized recursion
// void facto (int n, int result){
//     if(n == 0){
//         cout << result << endl;
//         return;
//     };
//     facto(n-1, result * n);
// };
// int main()
// {
//     // cout << facto(5) << endl;
//     facto(5, 1);
//     return 0;
// };

// 📍 sum of first N numbers
// #include <bits/stdc++.h>
// using namespace std;
// 1️⃣ functional recursion
// int sumOfFirstNNumbers(int n){
//     if(n == 0){
//         return 0;
//     };
//     return (n + sumOfFirstNNumbers(n-1));
// }
// 2️⃣ parameterized recursion
// 📍 my approach
// int sumOfFirstNNumbers(int n, int sum){
//     if(n < 1){
//         return sum;
//     };
//     sumOfFirstNNumbers(n-1, sum+n);
// }
// 📍 sir's approach
// void sumOfFirstNNumbers(int n, int sum){
//     if(n < 1){
//         cout << sum << endl;
//         return;
//     };
//     sumOfFirstNNumbers(n-1, sum+n);
// }
// int main()
// {
//     // cout << sumOfFirstNNumbers(5,0) << endl;
//     sumOfFirstNNumbers(5,0);
//     return 0;
// };

// 📍 print numbers from N to 1 using backtracking
// #include <bits/stdc++.h>
// using namespace std;
// void printNTo1(int n, int i)
// {
//     if (i > n)
//     {
//         // cout << "done" << endl;
//         return;
//     };
//     printNTo1(n, i+1);
//     cout << i << endl;
// };
// int main()
// {
//     printNTo1(5,1);
//     return 0;
// };

// 📍 print numbers from 1 to N using backtracking
// #include <bits/stdc++.h>
// using namespace std;
// void print1ToN(int n, int i)
// {
//     if (i <= 0)
//     {
//         // cout << "done" << endl;
//         return;
//     };
//     print1ToN(n, i-1);
//     cout << i << endl;
// };
// int main()
// {
//     print1ToN(5,5);
//     return 0;
// };

// 📍 print numbers from N to 1
// - TC -> O(n)
// - SC -> O(n) (stack space)
// #include <bits/stdc++.h>
// using namespace std;
// void printNTo1(int n, int i)
// {
//     // 📍 my approach 1
//     // if (i >= n)
//     // {
//     //     cout << "done" << endl;
//     //     return;
//     // };
//     // cout << n-i << endl;
//     // printNTo1(n, i+1);
//     // 📍 my approach 2 (same as sir's approach)
//     if (i <= 0)
//     {
//         cout << "done" << endl;
//         return;
//     };
//     cout << i << endl;
//     printNTo1(n, i-1);
//     // 📍 my approach 3
//     // if (i > n)
//     // {
//     //     return;
//     // };
//     // printNTo1(n, i+1);
//     // cout << i << endl;
// };
// int main()
// {
//     // 📍 my approach 1
//     // printNTo1(5, 0);
//     // 📍 my approach 2
//     printNTo1(5, 5);
//     // 📍 my approach 3
//     // printNTo1(5, 1);
//     return 0;
// };

// 📍 print numbers from 1 to N
// - TC -> O(n)
// - SC -> O(n) (stack space)
// #include <bits/stdc++.h>
// using namespace std;
// void print1ToN(int n, int i)
// {
//     if (i > n)
//     {
//         cout << "done" << endl;
//         return;
//     };
//     cout << i << endl;
//     print1ToN(n, i+1);
// };
// int main()
// {
//     print1ToN(5, 1);
//     return 0;
// };

// 📍 print name n times
// - TC -> O(n)
// - SC -> O(n) (stack space)
// #include <bits/stdc++.h>
// using namespace std;
// void greetNTimes (int n, int i) {
//     if(i>n){
//         cout << "Radhe Radhe" << endl;
//         return;
//     };
//     cout << "Hare Krishna" << endl;
//     greetNTimes(n, i+1);
// }
// int main()
// {
//     greetNTimes(5, 1);
//     return 0;
// };

// - when a function is invoked, it enters the stack

// - its the base condition that prevents stack overflow

// 📍 RECURSION
// - a function calling itself until a specific condition is met