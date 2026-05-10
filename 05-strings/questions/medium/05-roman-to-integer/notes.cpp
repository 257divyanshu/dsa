#include <bits/stdc++.h>
using namespace std;

// 📍 my second solution (GPT micro-optimized)
// same complexities as earlier
int romanToInt(string s)
{
    int n = s.length();
    int result = 0;
    int arr[128] = {};
    arr['I'] = 1;
    arr['V'] = 5;
    arr['X'] = 10;
    arr['L'] = 50;
    arr['C'] = 100;
    arr['D'] = 500;
    arr['M'] = 1000;
    for (int i = 0; i < n - 1; i++)
    {
        // cout << "char at index " << i << " is " << s[i] << endl;
        int curr = arr[s[i]];
        int next = arr[s[i + 1]];
        result += (curr < next) ? -curr : curr;
    }
    result += arr[s[n - 1]];
    return result;
}

// 📍 my second solution (after GPT's suggestion)
// same complexities as earlier
// int romanToInt(string s)
// {
//     int n = s.length();
//     int result = 0;
//     int arr[26] = {};
//     arr['I' - 'A'] = 1;
//     arr['V' - 'A'] = 5;
//     arr['X' - 'A'] = 10;
//     arr['L' - 'A'] = 50;
//     arr['C' - 'A'] = 100;
//     arr['D' - 'A'] = 500;
//     arr['M' - 'A'] = 1000;
//     for (int i = 0; i < n - 1; i++)
//     {
//         // cout << "char at index " << i << " is " << s[i] << endl;
//         if (arr[s[i] - 'A'] < arr[s[i + 1] - 'A'])
//         {
//             result -= arr[s[i] - 'A'];
//         }
//         else
//         {
//             result += arr[s[i] - 'A'];
//         }
//     }
//     result += arr[s[n - 1] - 'A'];
//     return result;
// }

// 📍 my first solution
// TC -> O(n)
// SC -> O(1)
// int romanToInt(string s)
// {
//     int n = s.length();
//     int result = 0;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << "char at index " << i << " is " << s[i] << endl;
//         if (s[i] == 'I')
//         {
//             cout << "adding 1" << endl;
//             result += 1;
//             cout << "updated result = " << result << endl;
//         }
//         else if (s[i] == 'V')
//         {
//             if (((i - 1) >= 0) && (s[i - 1] == 'I'))
//             {
//                 cout << "adding 4" << endl;
//                 result += 4;
//                 cout << "updated result = " << result << endl;
//                 i--;
//             }
//             else
//             {
//                 cout << "adding 5" << endl;
//                 result += 5;
//                 cout << "updated result = " << result << endl;
//             }
//         }
//         else if (s[i] == 'X')
//         {
//             if (((i - 1) >= 0) && (s[i - 1] == 'I'))
//             {
//                 cout << "adding 9" << endl;
//                 result += 9;
//                 cout << "updated result = " << result << endl;
//                 i--;
//             }
//             else
//             {
//                 cout << "adding 10" << endl;
//                 result += 10;
//                 cout << "updated result = " << result << endl;
//             }
//         }
//         else if (s[i] == 'L')
//         {
//             if (((i - 1) >= 0) && (s[i - 1] == 'X'))
//             {
//                 cout << "adding 40" << endl;
//                 result += 40;
//                 cout << "updated result = " << result << endl;
//                 i--;
//             }
//             else
//             {
//                 cout << "adding 50" << endl;
//                 result += 50;
//                 cout << "updated result = " << result << endl;
//             }
//         }
//         else if (s[i] == 'C')
//         {
//             if (((i - 1) >= 0) && (s[i - 1] == 'X'))
//             {
//                 cout << "adding 90" << endl;
//                 result += 90;
//                 cout << "updated result = " << result << endl;
//                 i--;
//             }
//             else
//             {
//                 cout << "adding 100" << endl;
//                 result += 100;
//                 cout << "updated result = " << result << endl;
//             }
//         }
//         else if (s[i] == 'D')
//         {
//             if (((i - 1) >= 0) && (s[i - 1] == 'C'))
//             {
//                 cout << "adding 400" << endl;
//                 result += 400;
//                 cout << "updated result = " << result << endl;
//                 i--;
//             }
//             else
//             {
//                 cout << "adding 500" << endl;
//                 result += 500;
//                 cout << "updated result = " << result << endl;
//             }
//         }
//         else
//         { // s[i] == 'D'
//             if (((i - 1) >= 0) && (s[i - 1] == 'C'))
//             {
//                 cout << "adding 900" << endl;
//                 result += 900;
//                 cout << "updated result = " << result << endl;
//                 i--;
//             }
//             else
//             {
//                 cout << "adding 1000" << endl;
//                 result += 1000;
//                 cout << "updated result = " << result << endl;
//             }
//         }
//     }
//     return result;
// }

int main()
{
    // 📍 given test-cases
    // string s = "III";
    // string s = "LVIII";
    // string s = "MCMXCIV";

    // 📍 simple edge cases
    // string s = "IV";
    // string s = "IX";
    // string s = "XL";
    // string s = "XC";
    // string s = "CD";
    // string s = "CM";

    // 📍 complex edge cases

    // string s = "IV";
    // string s = "XIV";

    // string s = "IX";
    // string s = "XIX";
    // string s = "XXXIX";

    // string s = "XL";
    // string s = "XLIV";
    // string s = "XLIX";

    // string s = "XC";
    // string s = "XCIV";
    // string s = "XCIX";
    string s = "DXCIX";

    // string s = "CD";
    // string s = "CDXL";
    // string s = "CDXLIV";
    // string s = "CDXLIX";
    // string s = "MCDXLIX";

    // string s = "CM";
    // string s = "CMXL";
    // string s = "CMXLIV";
    // string s = "CMXLIX";
    // string s = "CMXC";
    // string s = "CMXCIV";
    // string s = "CMXCIX";

    cout << "s = " << s << endl;
    int result = romanToInt(s);
    cout << "result = " << result << endl;
    return 0;
};