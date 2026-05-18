#include <bits/stdc++.h>
using namespace std;

// 📍 optimal approach
// - TC -> O(n)
// - SC -> O(1)
bool isPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start <= end)
    {
        if (!(isalnum(s[start])))
        {
            start++;
            continue;
        };
        if (!(isalnum(s[end])))
        {
            end--;
            continue;
        };
        // cout << s[start] << " and " << s[end] << endl;
        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        };
        start++;
        end--;
    };
    return true;
};

int main()
{

    return 0;
};