#include <bits/stdc++.h>
using namespace std;

// 🏆 approach 1 (using vector)

// 📍 approach 2 (using a hashmap)
// - TC -> O(n * log(n)) (due to hashmap)
// SC -> O(m) (where m is the length of string s)
// string sortSentence(string s)
// {
//     istringstream ss(s);
//     string word;
//     map<int,string> map1;
//     string sentence = "";
//     while (ss >> word) // TC -> O(n) ( O(9) in worst case )
//     {
//         // cout << word << endl;
//         // cout << word[word.length()-1] << endl;
//         // cout << (int)(word[word.length()-1] - '1') << endl;
//         map1[(int)(word[word.length() - 1] - '1')] = word.substr(0, word.length() - 1); // TC -> O(log(n)) ( O(log(9)) in worst case )
//     }
//     for(auto it : map1){ // TC -> O(n) ( O(9) in worst case )
//         if(sentence!=""){
//             sentence += " ";
//         }
//         sentence += it.second;
//     }
//     return sentence;
// }

// 📍 approach 1 (using a vector)
// TC -> O(n)
// SC -> O(m) (where m is the length of string s)
string sortSentence(string s)
{
    istringstream ss(s);
    string word;
    vector<string> wordVector(9);
    string sentence = "";
    // int counter = 1;
    while (ss >> word) // TC -> O(n) ( O(9) in worst case )
    {
        // cout << "iteration : " << counter << endl;
        // cout << word << endl;
        // counter++;
        int index = word.back() - '1';
        word.pop_back();
        // cout << "index " << index << "; word " << word << endl;
        wordVector[index] = word; // O(1)
    }
    // for(auto wordd : wordVector){
    //     cout << wordd << " ";
    // }
    // cout << endl;
    // cout << wordVector.size() << endl;
    sentence = wordVector[0];
    for (size_t i = 1; i < wordVector.size(); i++) // TC -> O(n) ( O(9) in worst case )
    {
        if (wordVector[i] != "")
        {
            // cout << "|" << wordVector[i] << "|" << endl;
            sentence += " " + wordVector[i];
        }
    }
    return sentence;
}

int main()
{
    string s = "is2 sentence4 This1 a3";
    cout << "|" << sortSentence(s) << "|" << endl;
    // string s = "";
    // cout << "|" << s[2] << "|" << endl;
    // cout << "|" <<  "|" << endl;
    // s[1] = 'x';
    // cout << s << endl;
    // cout << s[1] << endl;
    return 0;
};