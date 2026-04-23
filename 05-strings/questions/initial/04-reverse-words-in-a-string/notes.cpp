#include <bits/stdc++.h>
using namespace std;

// 📍 ma'am solution
string reverseWords(string s){
    reverse(s.begin(), s.end());
    string result = "";
    int i = 0;
    while(i < s.length()){
        string word = "";
        while(i < s.length() && isalnum(s[i])){
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if(word.length() > 0){
            result += " " + word;
        }
        i++;
    }
    return result.substr(1);
}

// 📍 my second approach ✔️ (after intution from ma'am lecture)
// 📍 why its better that my first approach:
// - Lower constant space usage (no extra vectors)
// - More in-place work
// 📍 about that result.reserve(s.length())
// - using reserve() avoids extra copying work and therefore reduces actual runtime, even though big-O stays the same.
// string reverseWords(string s)
// {
//     reverse(s.begin(), s.end()); // O(n)
//     int start = -1;
//     int end = -1;
//     int i = 0;
//     while ( i < s.length()) // O(n)
//     {
//         if (isalnum(s[i]))
//         {
//             start = i;
//             while (i < s.length() && isalnum(s[i]))
//             {
//                 i++;
//             }
//             end = i;
//             reverse(s.begin() + start, s.begin() + end); // O(n)
//             start = -1;
//             end = -1;
//         }
//         else{
//             i++;
//         }
//     }
//     cout << "updated s : " << "|" << s << "|" << endl;
//     string result = "";
//     result.reserve(s.length()); 
//     for(int i = 0; i<s.length(); i++){ // O(n)
//         if(isalnum(s[i])){
//             result.push_back(s[i]); // O(1)
//         }
//         else{
//             if(result.back() != ' '){
//                 result.push_back(' '); // O(1)
//             }
//         }
//     }
//     // if(result.back() == ' '){
//     //     result.pop_back();
//     // }
//     return result;
// }

// 📍 my first approach ✔️
// - TC -> O(n)
// - see Ⓜ️ frequent-re-allocations-cannnot-add-O(n^2)-to-each-iteration.md
// - SC -> O(n)
// string reverseWords(string s)
// {
//     vector<char> reversedWordVector; // the default constructor creates empty vector
//     reversedWordVector.reserve(s.length()); // necessary to prevent re-allocations (NOTE : but frequent re-allocations cannot add O(n^2) to each iteration)
//     vector<char> currentWordVector;
//     for(int i = s.length()-1; i>=0; i--){ // O(sLen)
//         if(isalnum(s[i])){
//             currentWordVector.push_back(s[i]);
//         }
//         // 📍 misses the last word :
//         // else{
//         //     reverse(currentWordVector.begin(), currentWordVector.end());
//         //     reversedWordVector.insert(reversedWordVector.end(), currentWordVector.begin(), currentWordVector.end());
//         //     reversedWordVector.push_back(' ');
//         //     currentWordVector.clear();
//         // }
//         // 📍 doesn't miss the last word :
//         if((currentWordVector.size() > 0) && (!isalnum(s[i]) || i == 0)){
//             reverse(currentWordVector.begin(), currentWordVector.end()); // O(currentWordVectorLength)
//             reversedWordVector.insert(reversedWordVector.end(), currentWordVector.begin(), currentWordVector.end()); // O(reversedWordVectorLength + currentWordVectorLength)
//             reversedWordVector.push_back(' ');
//             currentWordVector.clear(); // O(currentWordVectorLength)
//         }
//     }
//     reversedWordVector.pop_back();
//     cout << "|";
//     for(char chr : reversedWordVector){
//         cout << chr;
//     }
//     cout << "|";
//     cout << endl;
//     string reversedWord(reversedWordVector.begin(), reversedWordVector.end());
//     return reversedWord;
//     // return "unimplemented";
// }

int main()
{

    // 📍 given testcases
    // string s = "the sky is blue";
    // string s = "hello world";
    // string s = "hello world ";
    // string s = "hello world  ";
    // string s = " hello world";
    // string s = "  hello world";
    // string s = " hello world ";
    // string s = " hello world  ";
    // string s = "  hello world ";
    string s = "  hello world  ";
    // string s = "a good   example";

    // 📍 edge cases
    // string s = "a";
    // string s = " a";
    // string s = "a ";
    // string s = " a ";

    cout << endl
         << "provided string : " << "|" << s << "|" << endl
         << endl;
    ;
    cout << "result : |" << reverseWords(s) << "|" << endl;

    return 0;
};