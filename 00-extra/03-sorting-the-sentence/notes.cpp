#include <bits/stdc++.h>
using namespace std;
string sortSentence(string s)
{

    istringstream ss(s);
    string word;
    vector<string> wordVector(9);
    string sentence = "";
    int counter = 1;

    while (ss >> word)
    {
        // cout << "iteration : " << counter << endl;
        counter++;
        // cout << word << endl;
        // cout << word[word.length()-1] << endl;
        // cout << (int)(word[word.length()-1] - '1') << endl;
        wordVector[(int)(word[word.length() - 1] - '1')] = word.substr(0, word.length() - 1);
    }

    // for(auto wordd : wordVector){
    //     cout << wordd << " ";
    // }
    // cout << endl;

    // cout << wordVector.size() << endl;

    sentence = wordVector[0];
    for (size_t i = 1; i < wordVector.size(); i++)
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
    // string s = "is2 sentence4 This1 a3";
    // cout << "|" << sortSentence(s) << "|" << endl;
    string s = "";
    // cout << "|" << s[2] << "|" << endl;
    // cout << "|" <<  "|" << endl;
    s[1] = 'x';
    cout << s << endl;
    cout << s[1] << endl;
    return 0;
};