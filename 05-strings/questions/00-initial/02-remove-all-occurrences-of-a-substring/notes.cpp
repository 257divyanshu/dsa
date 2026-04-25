#include <bits/stdc++.h>
using namespace std;

// 📍 ma'am's optimal (similar to my bruteforce)
// string removeOccurrences(string s, string part)
// {
//     while (s.length() > 0 && s.find(part) < s.length())
//     {
//         s.erase(s.find(part), part.length());
//     }
//     return s;
// }

// 🏆 optimal approach
// - TC -> O(n*m)
string removeOccurrences(string s, string part)
{
    string result = "";
    result.reserve(s.length());
    for (int i = 0; i < s.length(); i++) // O(n)
    {
        cout << "appending " << s[i] << " to |" << result << "|" << endl;
        result += s[i]; // O(1) OPERATION
        cout << "updated result = " << result << endl;
        bool partPresent = true;
        if (result.length() >= part.length())
        {
            cout << "result.length() > s.length()" << endl;
            // 📍 OPERATION 1 : check if result contains part or not O(m)
            for (int j = 0; j < part.length(); j++)
            {
                if (part[part.length() - 1 - j] != result[result.length() - 1 - j])
                {
                    partPresent = false;
                    break;
                }
            }
            // 📍 OPERATION 2 : if result contains part, erase the part // O(1)
            if (partPresent)
            {
                cout << "part found" << endl;
                cout << "erasing part" << endl;
                // result.erase(result.length() - part.length(), part.length());
                result.resize(result.length() - part.length());
                cout << "updated result = " << result << endl
                     << endl;
            }
            else
            {
                cout << "part not found" << endl
                     << endl;
            }
        }
    }
    return result;
}

// 📍 another approach
// - TC -> see Ⓜ️ second-approach-complexity-discussion.md
// string removeOccurrences(string s, string part)
// {
//     string result = "";
//     result.reserve(s.length());
//     for (int i = 0; i < s.length(); i++) // O(n)
//     {
//         cout << "appending " << s[i] << " to |" << result << "|" << endl;
//         result += s[i]; // O(1) OPERATION
//         cout << "updated result = " << result << endl;
//         bool partPresent = true;
//         if (result.length() >= part.length())
//         {
//             cout << "result.length() > s.length()" << endl;
//             // 📍 OPERATION 1 : check if result contains part or not O(m)
//             for (int j = 0; j < part.length(); j++)
//             {
//                 if (part[part.length() - 1 - j] != result[result.length() - 1 - j])
//                 {
//                     partPresent = false;
//                     break;
//                 }
//             }
//             // 📍 OPERATION 2 : if result contains part, erase the part // O(result.length())
//             if (partPresent)
//             {
//                 cout << "part found" << endl;
//                 cout << "erasing part" << endl;
//                 result.erase(result.length() - part.length(), part.length());
//                 cout << "updated result = " << result << endl << endl;
//             }
//             else{
//                 cout << "part not found" << endl << endl;
//             }
//         }
//     }
//     return result;
// }

// 📍 complexities of string::find(substring) and string::erase(substring)
// - TC of string::find(substring) is O(n*m) (n is length of main string) (m is length of substring)
// - TC of string:erase(pos, len) is O(n) (In worst case, it shifts all characters after pos + len to fill the gap.)
// - both's SC -> O(1) auxiliary space (Both operate in-place, no extra memory proportional to input size.)

// 📍 bruteforce approach complexity discussion
// - TC -> O(n^2)
// - explanation :
//   - n -> length of main string
//   - m -> length of substring
//   - k -> number of occurrences
//   - while loop runs k times
//   - each iteration involves finding (O(n)) and erasing (O(n*m))
//   - so each iteration involved O(n*m) computation
//   - so total TC -> O(k * n * m)
//   - k = n / m
//   - so TC -> O(n^2)
// - SC -> O(1)
// 📍 bruteforce approach
// string removeOccurrences(string s, string part)
// {
//     size_t occurrencePosition = s.find(part); // O(n*m)
//     int counter = 1;
//     while(occurrencePosition != string::npos){
//         s.erase(occurrencePosition, part.length()); // O(n)
//         occurrencePosition = s.find(part); // O(n*m)
//         cout << "iteration " << counter++ << endl;
//         cout << "updated s = " << s << endl << endl;
//     }
//     return s;
// }

int main()
{
    // 📍 given testcases
    // string s = "daabcbaabcbc", part = "abc";
    // string s = "axxxxyyyyb", part = "xy";

    // 📍 edge testcases
    string s = "aaaaa", part = "a";

    cout << endl
         << "original s = " << s << endl
         << endl;
    cout << "|" << removeOccurrences(s, part) << "|" << endl;
    return 0;
};