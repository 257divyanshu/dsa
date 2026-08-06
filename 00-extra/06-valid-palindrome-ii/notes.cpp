// 🔊 one liner
// - Use two pointers,
// - at the first mismatch,
// - check whether skipping either the left or the right character results in a palindrome

// 🏆 optimal solution
// TC -> O(n)
// SC -> O(1)
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(const string &s, int l, int r)
{
    while (l < r)
    {
        if (s[l] != s[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
bool validPalindrome(string s)
{
    int l = 0, r = s.size() - 1;

    while (l < r)
    {
        if (s[l] != s[r])
        {
            return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
        }
        l++;
        r--;
    }

    return true;
}

int main()
{

    return 0;
};

// const string&:
// - avoids copying (&)
// - prevents accidental modification (const)