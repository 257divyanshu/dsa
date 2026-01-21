// 📍 check if a string is palindrome
#include <bits/stdc++.h>
using namespace std;
// bool isPalindrome
int main()
{
    string lordName = "Shri Krishna";
    cout << lordName.length() << endl;
    return 0;
};

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
//     if (i > 5)
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
// - 📸 recursion tree : similar to that in image recursion-tree-01
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
//     // 📍 my approach 4
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
//     // 📍 my approach 4
//     // printNTo1(5, 1);
//     return 0;
// };

// 📍 print numbers from 1 to N
// - 📸 recursion tree : similar to that in image recursion-tree-01
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
// - 📸 see image recursion-tree-01
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