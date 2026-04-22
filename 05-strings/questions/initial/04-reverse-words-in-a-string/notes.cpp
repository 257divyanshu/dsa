#include <bits/stdc++.h>
using namespace std;

// 📍 my first approach ✔️
// - TC -> O(n^2)
// - see Ⓜ️ frequent-re-allocations-cannnot-add-O(n^2)-to-each-iteration.md
string reverseWords(string s)
{
    vector<char> reversedWordVector; // the default constructor already creates empty vector
    reversedWordVector.reserve(s.length()); // necessary to prevent re-allocations (NOTE : but frequent re-allocations cannot add O(n^2) to each iteration)
    vector<char> currentWordVector(0);
    for(int i = s.length()-1; i>=0; i--){ // O(sLen)
        if(isalnum(s[i])){
            currentWordVector.push_back(s[i]);
        }
        // 📍 misses the last word :
        // else{
        //     reverse(currentWordVector.begin(), currentWordVector.end());
        //     reversedWordVector.insert(reversedWordVector.end(), currentWordVector.begin(), currentWordVector.end());
        //     reversedWordVector.push_back(' ');
        //     currentWordVector.clear();
        // }
        // 📍 doesn't miss the last word : 
        if((currentWordVector.size() > 0) && (!isalnum(s[i]) || i == 0)){
            reverse(currentWordVector.begin(), currentWordVector.end()); // O(currentWordVectorLength)
            reversedWordVector.insert(reversedWordVector.end(), currentWordVector.begin(), currentWordVector.end()); // O(reversedWordVectorLength + currentWordVectorLength)
            reversedWordVector.push_back(' ');
            currentWordVector.clear(); // O(currentWordVectorLength)
        }
    }
    reversedWordVector.pop_back();
    cout << "|";
    for(char chr : reversedWordVector){
        cout << chr;
    }
    cout << "|";
    cout << endl;
    string reversedWord(reversedWordVector.begin(), reversedWordVector.end());
    return reversedWord;
    // return "unimplemented";
}

int main()
{

    // 📍 given testcases
    // string s = "the sky is blue";
    // string s = "  hello world  ";
    // string s = "a good   example";

    // 📍 edge cases
    // string s = "a";
    // string s = " a";
    // string s = "a ";
    string s = " a ";

    cout << endl << "provided string : " << "|" << s << "|" << endl << endl;;
    cout << "result : |" << reverseWords(s) << "|" << endl;

    return 0;
};