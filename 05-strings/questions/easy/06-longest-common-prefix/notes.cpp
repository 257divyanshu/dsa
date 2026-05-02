#include <bits/stdc++.h>
using namespace std;

// 📍 neetcode's approach
// - TC -> O(n*m)
// - SC -> O(m)
// - where n is the length of strs and m is the length of shortest string in strs
// 📍 version 03
string longestCommonPrefix(vector<string> &strs)
{
    if (strs.size() == 1)
    {
        return strs[0];
    };
    string lcp = "";
    for(int j = 0; j<strs[0].length(); j++)
    {
        for (int i = 0; i < strs.size(); i++)
        {
            if (j == strs[i].length() || strs[i][j] != strs[0][j])
            {
                return lcp;
            }
        }
        lcp += strs[0][j];
    }
    return lcp;
}
// 📍 version 02
// string longestCommonPrefix(vector<string> &strs)
// {
//     if (strs.size() == 1)
//     {
//         return strs[0];
//     };
//     string lcp = "";
//     for(int j = 0; j<strs[0].length(); j++)
//     {
//         for (int i = 0; i < strs.size(); i++)
//         {
//             if (j == strs[i].length())
//             {
//                 return lcp;
//             }
//             else
//             {
//                 if (strs[i][j] != strs[0][j])
//                 {
//                     return lcp;
//                 }
//             }
//         }
//         lcp += strs[0][j];
//     }
//     return lcp;
// }
// 📍 version 01
// string longestCommonPrefix(vector<string> &strs)
// {
//     if (strs.size() == 1)
//     {
//         return strs[0];
//     };
//     int j = 0;
//     string lcp = "";
//     int flag = 1;
//     while (flag)
//     {
//         for (int i = 0; i < strs.size(); i++)
//         {
//             if (j == strs[i].length())
//             {
//                 flag = 0;
//                 break;
//             }
//             else
//             {
//                 if (strs[i][j] != strs[0][j])
//                 {
//                     flag = 0;
//                     break;
//                 }
//             }
//         }
//         if (flag)
//         {
//             lcp += strs[0][j];
//         }
//         j++;
//     }
//     return lcp;
// }

// 📍 my first approach v2 (after GPT's micro-optimizations)
// string longestCommonPrefix(vector<string> &strs)
// {
//     if (strs.size() == 1)
//     {
//         return strs[0];
//     };
//     int shortestStringIndex = 0;
//     for (int i = 0; i < strs.size(); i++)
//     {
//         if (strs[i].length() == 0)
//         {
//             return "";
//         }
//         if (strs[i].length() < strs[shortestStringIndex].length())
//         {
//             shortestStringIndex = i;
//         }
//     }
//     int lcpLen = strs[shortestStringIndex].length();
//     for (int i = 0; i < strs.size(); i++)
//     {
//         if(i == shortestStringIndex){
//             continue;
//         }
//         int k = 0;
//         while (k < lcpLen && strs[i][k]==strs[shortestStringIndex][k])
//         {
//             k++;
//         }
//         lcpLen = k;
//         if(lcpLen == 0){
//             return "";
//         }
//     }
//     return strs[shortestStringIndex].substr(0,lcpLen);
// }

// 📍 my first approach ✔️
// - TC -> O(n*m)
// - SC -> O(m)
// - where n is length of strs, and m is the length of the shortest string in strs
// - 🔗 Why TC is O(n*m)? See https://chatgpt.com/share/69f58feb-20b0-8321-aa2f-ae22643a537a
// string longestCommonPrefix(vector<string> &strs)
// {
//     if (strs.size() == 1)
//     {
//         return strs[0];
//     };
//     int shortestStringIndex = 0;
//     for (int i = 0; i < strs.size(); i++)
//     {
//         if (strs[i].length() == 0)
//         {
//             return "";
//         }
//         if (strs[i].length() < strs[shortestStringIndex].length())
//         {
//             shortestStringIndex = i;
//         }
//     }
//     string lcp = strs[shortestStringIndex];
//     for (int i = 0; i < strs.size(); i++)
//     {
//         int j = 0;
//         int k = 0;
//         while (k < lcp.length())
//         {
//             if (strs[i][j] == lcp[k])
//             {
//                 k++;
//             }
//             else
//             {
//                 lcp = lcp.substr(0, k);
//                 break;
//             }
//             j++;
//         }
//     }
//     return lcp;
// }
int main()
{
    // string lcp;
    // lcp.reserve(10);
    // cout << lcp.length() << endl;
    return 0;
};