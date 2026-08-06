// - Total Space Complexity = Input space + Auxiliary space
// - Auxiliary Space Complexity = Extra memory used by the algorithm, excluding the input.

#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(const string &s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
string firstPalindrome(vector<string> &words)
{
    for (const auto &word : words)
    {
        if (isPalindrome(word))
        {
            return word;
        }
    }
    return "";
}
int main()
{

    return 0;
};