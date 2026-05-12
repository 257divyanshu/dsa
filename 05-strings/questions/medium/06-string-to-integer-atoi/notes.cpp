#include <bits/stdc++.h>
using namespace std;

// 📍 ASCII codes
// 'a' -> 97
// 'z' -> 122
// 'A' -> 65
// 'Z' -> 90
// '0' -> 48
// '9' -> 57
// ' ' -> 32

// 🏆 my first solution (GPT micro-optimized)
int myAtoi(const string &s)
{
    int i = 0;
    int n = s.length();

    while (i < n && s[i] == ' ')
    {
        i++;
    }

    bool isNegative = false;

    if (i < n && (s[i] == '-' || s[i] == '+'))
    {
        isNegative = (s[i] == '-');
        i++;
    }

    int result = 0;

    while (i < n && s[i] >= '0' && s[i] <= '9')
    {
        int digit = s[i] - '0';

        if (result > INT_MAX / 10 ||
            (result == INT_MAX / 10 && digit >= 8))
        {
            return isNegative ? INT_MIN : INT_MAX;
        }

        result = result * 10 + digit;
        i++;
    }

    return isNegative ? -result : result;
}

// 📍 my first solution (version 2)
// int myAtoi(string s)
// {
//     int result = 0;
//     int isNegative = 0;
//     int i = 0;
//     int n = s.length();
//     while (s[i] == ' ')
//     {
//         i++;
//     };
//     if (s[i] == '-')
//     {
//         isNegative = 1;
//         i++;
//     }
//     else if (s[i] == '+')
//     {
//         i++;
//     };
//     while (s[i] >= '0' && s[i] <= '9')
//     {
//         int currentInteger = s[i] - '0';
//         if (!isNegative && ((result > INT32_MAX / 10) ||
//                             (result * 10 > INT32_MAX - currentInteger)))
//         {
//             return INT32_MAX;
//         }
//         else if (isNegative && ((result < INT32_MIN / 10) ||
//                                 (result * 10 < INT32_MIN + currentInteger)))
//         {
//             return INT32_MIN;
//         }
//         if (isNegative)
//         {
//             result = result * 10 - currentInteger;
//         }
//         else
//         {
//             result = result * 10 + currentInteger;
//         }
//     }
//     return result;
// }

// 📍 my first solution
// int myAtoi(string s)
// {
//     int result = 0;
//     int startedFlag = 0;
//     int isNegative = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if ((s[i] == '.') || (s[i] >= 'a' && s[i] <= 'z') ||
//             (s[i] >= 'A' && s[i] <= 'Z') ||
//             (startedFlag && (s[i] == ' ' || s[i] == '-' || s[i] == '+')))
//         {
//             return result;
//         }
//         else
//         {
//             if (s[i] == '-')
//             {
//                 startedFlag = 1;
//                 isNegative = 1;
//             }
//             else if (s[i] == '+')
//             {
//                 startedFlag = 1;
//             }
//             else if (s[i] >= '0' && s[i] <= '9')
//             {
//                 startedFlag = 1;
//                 int curr = (s[i] - '0');
//                 if (!isNegative && ((result > INT32_MAX / 10) ||
//                                     (result * 10 > INT32_MAX - curr)))
//                 {
//                     return INT32_MAX;
//                 }
//                 else if (isNegative && ((result < INT32_MIN / 10) ||
//                                         (result * 10 < INT32_MIN + curr)))
//                 {
//                     return INT32_MIN;
//                 }
//                 if (isNegative)
//                 {
//                     result = result * 10 - curr;
//                 }
//                 else
//                 {
//                     result = result * 10 + curr;
//                 }
//             }
//         }
//     }
//     return result;
// }

int main()
{

    return 0;
};