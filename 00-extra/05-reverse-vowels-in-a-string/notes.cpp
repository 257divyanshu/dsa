#include <bits/stdc++.h>
using namespace std;

// 🏆 GPT micro-optimized
inline bool isVowel(char c)
{
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return true;
    default:
        return false;
    }
}

string reverseVowels(string s)
{
    int start = 0;
    int end = s.length() - 1;
    while (start < end)
    {
        while (start < end && !isVowel(s[start])){
            start++;
        }
        while (start < end && !isVowel(s[end])){
            end--;
        }
        if (start < end)
        {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    return s;
}

// 📍 my first approach
// bool isVowel(char &c)
// {
//     if (
//         c == 'A' ||
//         c == 'E' ||
//         c == 'I' ||
//         c == 'O' ||
//         c == 'U' ||
//         c == 'a' ||
//         c == 'e' ||
//         c == 'i' ||
//         c == 'o' ||
//         c == 'u')
//     {
//         return true;
//     }
//     return false;
// }
// string reverseVowels(string s)
// {
//     int n = s.length();
//     int start = 0;
//     int end = n - 1;
//     while (start < end)
//     {
//         while (start < n && !isVowel(s[start]))
//         {
//             start++;
//         }
//         while (end > -1 && !isVowel(s[end]))
//         {
//             end--;
//         }
//         if(start < n && end > -1 && start<end){
//             swap(s[start],s[end]);
//         }
//         start++;
//         end--;
//     }
//     return s;
// }

int main()
{

    return 0;
};