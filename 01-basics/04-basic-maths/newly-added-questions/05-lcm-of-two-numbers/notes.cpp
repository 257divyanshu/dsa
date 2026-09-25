#include <bits/stdc++.h>
using namespace std;

int getGCD(int x, int y)
{
    while (x > 0 && y > 0)
    {
        if (x > y)
        {
            x = x % y;
        }
        else
        {
            y = y % x;
        };
    };
    if (x == 0)
    {
        return y;
    };
    if (y == 0)
    {
        return x;
    };
}

// 📍 first approach
// - tc -> O(logφ(min(a,b)))
// - sc -> O(1)
int LCM(int x, int y)
{
    return (x * y) / getGCD(x,y);
}

int main()
{

    return 0;
};