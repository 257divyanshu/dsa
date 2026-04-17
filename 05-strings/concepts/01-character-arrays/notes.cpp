#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 📍 taking a string as input
    // char str[]; // invalid
    // char str[100]; // valid
    // cout << "supply the string : ";
    // cin >> str;
    // cout << "you supplied : " << str << endl;
    // 📍 use cin.getline() to take a string input
    // char str[100];
    // cout << "supply the string : ";
    // cin.getline(str, 100);
    // cout << "you supplied : " << str << endl;
    // 📍 delimiter in cin.getline(str, len, delimiter)
    // - delimiter stops the input
    // - by default, cin.getline() stops taking input when it sees a null character
    // char str[100];
    // cout << "supply the string : ";
    // // cin.getline(str, 100, 'x');
    // cin.getline(str, 100);
    // cout << "you supplied : " << str << endl;
    // 📍 iteraing over a character array
    // char str[100];
    // cout << "supply the string : ";
    // cin.getline(str, 100);
    // cout << "you supplied : " << str << endl;
    // for(char chr : str){
    //     cout << chr << " ";
    // }; // even if we supply a 6 character string, this loop will print 100 characters
    // cout << endl;
    // 📍 calculating the length of a string (made using character arrays) using for loop
    char str[100];
    cout << "supply the string : ";
    cin.getline(str, 100);
    cout << "you supplied : " << str << endl;
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    };
    cout << len << endl;
    // ⏸️ 13:04
    return 0;
};

// character arrays are also called C strings
// int main()
// {
//     // 📍 a character array
//     // char str[] = {'a','b','c','e'};
//     // cout << str << endl; // abce@@
//     // - until we end the set of characters with the null character (\0) it won't be a valid string
//     // - c++ array names are constant pointers
//     // int arr[] = {1,2,3,4};
//     // cout << arr << endl; // 0x61fefc (its a memory address)
//     // - to convert the above character array into a string, we introduce a '\0' character at the end
//     // 📍 using character arrays as strings
//     // char str[] = {'a','b','c','e','\0'};
//     // cout << str << endl; // abce
//     // cout << strlen(str) << endl; // 4
//     // - '\0' is called null character
//     // - '\0' takes 1 byte in memory
//     // - '\n' takes 1 byte in memory
//     // 📍 another way to use character arrays as strings
//     char str[] = "abcd";
//     cout << str << endl;
//     cout << strlen(str) << endl;
//     // - internally we'll have this array in memory : a b c d \0
//     cout << str[0] << endl;
//     cout << str[1] << endl;
//     cout << str[2] << endl;
//     cout << str[3] << endl;
//     cout << str[4] << endl;
//     cout << str[5] << endl; // doesn't print anything
//     // - when we use a character array to store string, then that particular character array is explicitly ended with a null character
//     return 0;
// };