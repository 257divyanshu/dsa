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

// 📍 my first solution
int myAtoi(string s)
{
    int result = 0;
    int startedFlag = 0;
    int isNegative = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] == '.') || (s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z') ||
            (startedFlag && (s[i] == ' ' || s[i] == '-' || s[i] == '+')))
        {
            return result;
        }
        else
        {
            if (s[i] == '-')
            {
                startedFlag = 1;
                isNegative = 1;
            }
            else if (s[i] == '+')
            {
                startedFlag = 1;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                startedFlag = 1;
                int curr = (s[i] - '0');
                if (!isNegative && ((result > INT32_MAX / 10) ||
                                    (result * 10 > INT32_MAX - curr)))
                {
                    return INT32_MAX;
                }
                else if (isNegative && ((result < INT32_MIN / 10) ||
                                        (result * 10 < INT32_MIN + curr)))
                {
                    return INT32_MIN;
                }
                if (isNegative)
                {
                    result = result * 10 - curr;
                }
                else
                {
                    result = result * 10 + curr;
                }
            }
        }
    }
    return result;
}

int main()
{

    return 0;
};