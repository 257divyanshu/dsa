#include <bits/stdc++.h>
using namespace std;

// 🏆 ma'am's optimal approach
// - TC -> O(n)
// - SC -> O(1)
int compress(vector<char> &chars){
    int index = 0;
    for(int i = 0; i<chars.size(); i++){
        char currentCharacter = chars[i];
        int count = 0;
        while(i<chars.size() && chars[i]==currentCharacter){
            count++;
            i++;
        }
        chars[index++] = currentCharacter;
        if(count == 1){
        }
        else{
            string countString = to_string(count);
            for(char digit : countString){
                chars[index++] = digit;
            }
        }
        i--;
    }
    return index;
}

// 📍 my second approach ✔️
// - TC -> O(n)
// - SC -> O(1)
// int compress(vector<char> &chars)
// {
//     char currentCharacter = chars[0];
//     int currentCharacterCount = 0;
//     int j = 0;
//     for (int i = 0; i < chars.size(); i++)
//     { // O(charsLen)
//         if (chars[i] == currentCharacter)
//         {
//             currentCharacterCount++;
//         }
//         else
//         {
//             chars[j++] = currentCharacter;
//             if (currentCharacterCount != 1)
//             {
//                 string currentCharacterCountString = to_string(currentCharacterCount); // worst case O(4)
//                 for (int k = 0; k < currentCharacterCountString.length(); k++)         // worst case O(4)
//                 {
//                     chars[j++] = currentCharacterCountString[k];
//                 }
//             }
//             currentCharacter = chars[i];
//             currentCharacterCount = 1;
//         }
//     }
//     chars[j++] = currentCharacter;
//     if (currentCharacterCount != 1)
//     {
//         string currentCharacterCountString = to_string(currentCharacterCount); // worst case O(4)
//         for (int k = 0; k < currentCharacterCountString.length(); k++)         // worst case O(4)
//         {
//             chars[j++] = currentCharacterCountString[k];
//         }
//     }
//     return j;
// }

// 📍 my first approach ✔️
// - TC -> O(n)
// - SC -> O(n)
// int compress(vector<char> &chars)
// {
//     char currentCharacter = chars[0];
//     int currentCharacterCount = 1;
//     // vector<char> helper = {currentCharacter};
//     string helper(1, currentCharacter);
//     helper.reserve(chars.size());
//     for(int i = 1; i<chars.size(); i++){ // O(charsLen)
//         if(chars[i] == currentCharacter){
//             currentCharacterCount++;
//         }
//         else{
//             currentCharacter = chars[i];
//             if(currentCharacterCount != 1){
//                 helper += (to_string(currentCharacterCount) + currentCharacter); // worstcase O(5) (when currentCharacterCount >= 1000)
//             }
//             else{
//                 helper += (currentCharacter); // O(1)
//             }
//             currentCharacterCount = 1;
//         }
//     }
//     if(currentCharacterCount != 1){
//         helper += to_string(currentCharacterCount);
//     }
//     for(int i = 0; i<helper.size(); i++){ // O(helperLen) ~ O(charsLen)
//         chars[i] = helper[i];
//     }
//     // cout << "helper = |" << helper << "|" << endl;
//     return helper.length();
// }

int main()
{
    // 📍 given testcases
    // vector<char> chars = {'a','a','b','b','c','c','c'};
    // vector<char> chars = {'a'};
    vector<char> chars = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};

    cout << endl
         << "given chars : ";
    for (char character : chars)
    {
        cout << character << " ";
    }
    cout << endl
         << endl;
    int compressResult = compress(chars);
    cout << "compress result = " << compressResult << endl;

    cout << endl
         << "updated chars : ";
    // for(char character : chars){
    //     cout << character << " ";
    // }
    for (int i = 0; i < chars.size(); i++)
    {
        cout << chars[i] << " ";
        if (i == (compressResult - 1))
        {
            cout << "<-> ";
        }
    }
    cout << endl
         << endl;
    return 0;
};