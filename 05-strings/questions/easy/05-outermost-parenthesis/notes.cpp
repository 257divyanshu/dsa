#include <bits/stdc++.h>
using namespace std;

// 📍 my second approach ✔️ (after GPT's micro-optimizations)
// 📍 MICRO-OPTIMIZATIONs:
// Avoided started → redundant
// Avoided repeated s.length() → stored n
// Preferred push_back over += for single chars
// Initialized without ""
string removeOuterParentheses(string s)
{
    int n = s.length();
    string result; // SC O(n)
    int pendingCount = 0;
    result.reserve(n);
    for (int i = 0; i < n; i++) { // TC O(n)
        if (s[i] == '(')
        {
            if(pendingCount++){
                result.push_back('(');
            }
        }
        else
        {
            if(--pendingCount){
                result.push_back(')');
            }
        }
    }
    return result;
}

// 📍 my first approach ✔️
// TC -> O(n)
// SC -> O(n)
// 📍 Analysis
// - result += is amortized TC O(1) due to reserve
// - Output string result stores up to n chars → SC O(n)
// string removeOuterParentheses(string s)
// {
//     bool started = 0;
//     string result = ""; // SC O(n)
//     int pendingCount = 0;
//     result.reserve(s.length());
//     for(int i = 0; i<s.length(); i++){ // TC O(n)
//         if(started){
//             if(s[i] == '('){
//                 pendingCount++;
//                 result += '(';
//             }
//             else{
//                 if(!pendingCount){
//                     started = 0;
//                 }
//                 else{
//                     pendingCount--;
//                     result += ')';
//                 }
//             }
//         }
//         else{
//             started = 1;
//         }
//     }
//     return result;
// }

int main()
{

    return 0;
};