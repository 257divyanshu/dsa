#include <bits/stdc++.h>
using namespace std;

// 📝 about .find()
// std::string::find returns size_t
// If not found → returns string::npos (a large non-zero value)

// 📍 MIK sir's optimal approach
// - two ways : (i) using KMP algorithm (ii) using .find() method
// 📍 INTUITION
// - If we concatenate a string with itself, it will contain all rotations as a substring in it.
// 📍 COMPLEXITY ANALYSIS
// TC -> O(n) (KMP algorithm finds a substring in a string in O(n) time)
// TC will be O(n^2) if we use .find() to find a substring inside a string
// SC -> O(1)
// 1️⃣ using find()
// TC -> O(n^2)
// SC -> O(n)
// 📍 TIME COMPLEXITY ANALYSIS
// reserve(2n) → O(n) (may copy existing content)
// s += s → O(n)
// s.find(goal) → O(n · n) = O(n²) (worst case)
// 📍 CODE
// bool rotateString(string s, string goal)
// {
//     if (s == goal)
//     {
//         return true;
//     }
//     if (s.length() != goal.length())
//     {
//         return false;
//     }
//     s.reserve(2 * s.length());
//     s += s;
//     return s.find(goal) != string::npos;
// }

// 📍 MIK sir's bruteforce approach
// - TC -> O(n^2)
// - SC -> O(1)
// 📍 about rotate()
// - it doesn't return a new string
// - it rotates the string in place
// - it returns an iterator pointing to the new beginning
bool rotateString(string s, string goal)
{
    if (s == goal)
    {
        return true;
    }
    if (s.length() != goal.length())
    {
        return false;
    }
    for (int i = 1; i < goal.length(); i++)
    {
        rotate(s.begin(), s.begin() + 1, s.end());
        if (s == goal)
        {
            return true;
        };
    }
    return false;
}

// 📍 my third approach
// TC -> O(n^2)
// SC -> O(1)
// - this solution involves TC of O(n) per iteration
// - previous solution involved TC of O(2*n) per iteration
// - its a 'constant factor optimization', leading to 'better practical performance'
// bool rotateString(string s, string goal)
// {
//     if (s == goal)
//     {
//         return true;
//     }
//     if (s.length() != goal.length())
//     {
//         return false;
//     }
//     for (int i = 1; i < s.length(); i++)
//     {
//         bool possible = true;
//         for (int j = 0; j < s.length(); j++)
//         {
//             if (s[(j + i) % (s.length())] != goal[j])
//             {
//                 possible = false;
//                 break;
//             }
//         }
//         if (possible)
//         {
//             return true;
//         };
//     }
//     return false;
// }

// 📍 my second approach
// TC -> O(n^2)
// SC -> O(n)
// bool rotateString(string s, string goal)
// {
//     if (s == goal)
//     {
//         return true;
//     }
//     if (s.length() != goal.length())
//     {
//         return false;
//     }
//     for (int i = 1; i < s.length(); i++)
//     {
//         string rotatedGoal = s;
//         for (int j = 0; j < s.length(); j++)
//         {
//             rotatedGoal[(j + i) % (s.length())] = s[j];
//         }
//         if (rotatedGoal == goal)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// 📍 my first approach ❌
// 📝 I missed the cases where string has multiple instances of the same character
// bool rotateString(string s, string goal)
// {
//     if(s.length() != goal.length()){
//         return false;
//     }
//     int rotatedBy = goal.find(s[0]);
//     if(rotatedBy == string::npos){
//         return false;
//     }
//     for(int i = 0; i<goal.length(); i++){
//         if(goal[i] != s[(i + s.length() - rotatedBy) % s.length()]){
//             return false;
//         }
//     }
//     return true;
// }

int main()
{

    return 0;
};