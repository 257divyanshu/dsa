#include <bits/stdc++.h>
using namespace std;

// 🏆 GPT's approach
string reverseStr(string s, int k)
{
    int n = s.size();
    for (int i = 0; i < n; i += 2 * k)
    {
        reverse(s.begin() + i, s.begin() + min(i + k, n));
    }
    return s;
}

// 📍 my approach 1
// string reverseStr(string s, int k)
// {
//     int n = s.length();
//     int i = 0;
//     while(i < n){
//         int j = i;
//         while(i<n && i-j<k){
//             i++;
//         }
//         reverse(s.begin()+i, s.begin()+j);
//         i+=k;
//     }
//     return s;
// }

int main()
{

    return 0;
};