#include <bits/stdc++.h>
using namespace std;
bool checkString(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'b' && s[i + 1] == 'a')
        {
            return false;
        };
    };
    return true;
};
int main()
{

    return 0;
};