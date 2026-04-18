#include <bits/stdc++.h>
using namespace std;

// 📍 check if string is palindrome or not
bool isPalindrome(string& str){
    int i = 0;
    int j = str.length() - 1;
    bool result = true;
    while(i<j){
        if(str[i] != str[j]){
            result = false;
            break;
        };
        i++;
        j--;
    };
    return result;
}

// 📍 reverse a string
// void reverseString(string& str){
//     int i = 0;
//     int j = str.length() - 1;
//     while(i<j){
//         swap(str[i++],str[j--]);
//     };
// }

int main()
{
    string str1 = "racecar";
    // string str1 = "madam";
    // string str1 = "sir";
    // string str1 = "abcd";
    // reverseString(str1);
    // cout << str1 << endl;
    cout << isPalindrome(str1) << endl;
    return 0;
};

// - character arrays have many limitations
// - in C++, there's a string class, from which we can make objects
// int main()
// {
//     // 📍 strings are dynamic (they can be resized in runtime)
//     // string str1 = "Hare Krishna";
//     // cout << str1 << endl;
//     // str1 = "Hari Bol";
//     // cout << str1 << endl;
//     // 📍 character arrays are not dynamic
//     // char str1[] = "Hare Krishna";
//     // cout << str1 << endl;
//     // str1 = "Hari Bol"; // ❌
//     // 📍 string concatenation
//     // string str1 = "Hare";
//     // string str2 = "Krishna";
//     // string str3 = str1 + " " + str2;
//     // cout << str3 << endl;
//     // 📍 string comparison
//     // string str1 = "Hare";
//     // string str2 = "Krishna";
//     // cout << (str1 == str2) << endl;
//     // - similarly we can use <, > operators
//     // 📍 .length() function
//     // string str1 = "Hare Krishna";
//     // cout << str1.length() << endl;
//     // 📍 taking single word string input
//     // string str;
//     // cout << "supply string : ";
//     // cin >> str;
//     // cout << "you supplied : " << str << endl;
//     // 📍 taking multiple word string input
//     // string str;
//     // cout << "supply string : ";
//     // getline(cin, str);
//     // cout << "you supplied : " << str << endl;
//     // 📍 iterating over a string (using traditional for loop)
//     // string str1 = "Hare Krishna";
//     // for(int i = 0; i<str1.length(); i++){
//     //     cout << str1[i];
//     // }
//     // cout << endl;
//     // 📍 iterating onver a string (using forEach loop)
//     // string str1 = "Hare Krishna";
//     // for(char chr : str1){
//     //     cout << chr;
//     // }
//     // cout << endl;
//     return 0;
// };