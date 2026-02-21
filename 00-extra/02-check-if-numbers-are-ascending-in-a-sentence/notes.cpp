#include <bits/stdc++.h>
using namespace std;

// 📍 better approach
bool areNumbersAscending(string s)
{
    istringstream ss(s);
    string word;
    int prevNum = -1;

    // Extract space-separated words one by one
    while (ss >> word)
    {
        // Check if the word is a number (checking the first character is enough)
        if (isdigit(word[0]))
        {
            int currNum = stoi(word); // Convert the string to an integer

            if (currNum <= prevNum)
            {
                return false;
            }
            prevNum = currNum;
        }
    }

    return true;
}

// 📍 my approach 1 (better version)
// bool areNumbersAscending(string s)
// {
//     int prevNum = -1;
//     for(int i = 0; i<s.length(); i++){
//         if(isdigit(s[i])){
//             int currNum = 0;
//             while(i < s.length() && isdigit(s[i])){
//                 currNum = currNum * 10 + (s[i] - '0');
//                 i++;
//             }
//             if(currNum <= prevNum){
//                 return false;
//             }
//             prevNum = currNum;
//         }
//     }
//     return true;
// }

// 📍 my approach 1
// bool areNumbersAscending(string s)
// {
//     int smallerNum = -1;
//     for(int i = 0; i<s.length(); i++){
//         if(isdigit(s[i])){
//             int currNum = s[i] - '0';
//             if(i+1 < s.length() && isdigit(s[i+1])){
//                 currNum = currNum * 10 + (s[i + 1] - '0');
//                 i++;
//             };
//             if(currNum > smallerNum){
//                 smallerNum = currNum;
//             }
//             else{
//                 return false;
//             }
//         }
//     }
//     return true;
// }

int main()
{

    return 0;
};