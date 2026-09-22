#include <bits/stdc++.h>
using namespace std;

// 📝 Track answer = 0, extract each digit via n % 10, update answer if digit is larger

int largestDigit(int n)
{
    int answer = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit > answer)
        {
            answer = digit;
        }
        n /= 10;
    }
    return answer;
}

int main()
{

    return 0;
};