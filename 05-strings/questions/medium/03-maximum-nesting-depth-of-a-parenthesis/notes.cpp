#include <bits/stdc++.h>
using namespace std;

// 📍 editorial's first approach (using stack)
// - TC -> O(n)
// - SC -> O(n)
// int maxDepth(string s)
// {
//     int ans = 0;
//     stack<char> bracketStack;
//     for (char c : s)
//     {
//         if (c == '(')
//         {
//             bracketStack.push(c);
//         }
//         else if (c == ')')
//         {
//             bracketStack.pop();
//         }

//         ans = max(ans, (int)bracketStack.size());
//     }

//     return ans;
// }

// 🏆 my first approach
// - TC -> O(n)
// - SC -> O(1)
int maxDepth(string s)
{
    int currentDepth = 0;
    int maximumDepth = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            currentDepth++;
            if (currentDepth > maximumDepth)
            {
                maximumDepth = currentDepth;
            }
        }
        else if (s[i] == ')')
        {
            currentDepth--;
        }
    }
    return maximumDepth;
}

int main()
{

    return 0;
};