// 🏆 -> approach 1

#include <bits/stdc++.h>
using namespace std;
// 📍 approach 2
// int countDigits(int n)
// {
//     // return int(1 + log10(n)); // ❌ this will give wrong answer for inputs <= 0
//     if (n == 0) // edge case
//     {
//         return 1;
//     };
//     if (n == INT32_MIN){ // edge case
//         return 10;
//     };
//     if (n < 0)
//     {
//         n = abs(n); // taking absolute value because logarithm is valid only for positive numbers
//         // ❔1️⃣ Which is better in the current context: 'n = -n' or 'n = abs(n)'?
//         // ✅1️⃣ ANSWER:
//         // - both are safe, because we have handled the INT32_MIN case above
//         // - but abs() is preferred, because it makes our intent ("we want the magnitude") clearer
//     };
//     return int(1 + log10(n));
// }
// 📍 approach 1 v2
// - A do-while loop guarantees the code runs at least once. This automatically handles the case where n = 0 (count becomes 1).
int countDigits(int n)
{
    int count = 0;
    do
    {
        count++;
        n /= 10;
    } while (n != 0);
    return count;
}
// 📍 approach 1 v1
// int countDigits(int n)
// {
//     if (n == 0) // edge case
//     {
//         return 1;
//     };
//     int count = 0;
//     while (n != 0) // n!=0 handles negative inputs as well
//     {
//         count++;
//         n /= 10;
//     };
//     return count;
// }
int main()
{
    cout << "'0' => " << countDigits(0) << endl;
    cout << "'1' => " << countDigits(1) << endl;
    cout << "'-1' => " << countDigits(-1) << endl;
    cout << "'2' => " << countDigits(2) << endl;
    cout << "'-2' => " << countDigits(-2) << endl;
    cout << "'10' => " << countDigits(10) << endl;
    cout << "'111' => " << countDigits(111) << endl;
    cout << "'-1111' => " << countDigits(-1111) << endl;
    cout << "'-2147483647' => " << countDigits(-2147483647) << endl;
    cout << "'-2147483648' => " << countDigits(-2147483648) << endl;
    return 0;
};