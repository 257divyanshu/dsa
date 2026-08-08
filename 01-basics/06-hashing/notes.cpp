#include <bits/stdc++.h> 
using namespace std;

// - in maps, we can even have pairs as keys
// - in hashmaps, we can only have inidividual data types (like int, char, etc) as keys, we cannot have pairs as keys 

// - using unordered_map will give us O(n) TC in best and average case, and O(n^2) TC in worst case (when collisions happen)
// - using map will give us O(n*log(n)) TC

// 📍 hashing (using maps)
int main()
{
    int arr[15] = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
    int n = 15;
    unordered_map<int,int> hashMap;
    for(int i = 0; i < n; i++){
        hashMap[arr[i]]++;
    };
    cout << "5 occurred " << hashMap[5] << " times" << endl;
    cout << "4 occurred " << hashMap[4] << " times" << endl;
    cout << "3 occurred " << hashMap[3] << " times" << endl;
    cout << "2 occurred " << hashMap[2] << " times" << endl;
    cout << "1 occurred " << hashMap[1] << " times" << endl;
    cout << "0 occurred " << hashMap[0] << " times" << endl;
    cout << "10 occurred " << hashMap[10] << " times" << endl;
    return 0;
};

// 📍 character hashing (using arrays)
// int main()
// {
//     char arr[15] = {'a','b','b','c','c','c','d','d','d','d','e','e','e','e','e'};
//     int n = 15;
//     int maxi = 128;
//     int hashArray[maxi] = {0};
//     for(int i = 0; i<n; i++){
//         hashArray[arr[i]]++;
//     };
//     cout << "'a' occurred " << hashArray['a'] << " times" << endl;
//     cout << "'b' occurred " << hashArray['b'] << " times" << endl;
//     cout << "'c' occurred " << hashArray['c'] << " times" << endl;
//     cout << "'d' occurred " << hashArray['d'] << " times" << endl;
//     cout << "'e' occurred " << hashArray['e'] << " times" << endl;
//     cout << "'f' occurred " << hashArray['f'] << " times" << endl;
//     cout << "'g' occurred " << hashArray['g'] << " times" << endl;
//     return 0;
// };

// 📍 integer hashing (using arrays)
// - PROBLEM : we cannot hash large integer arrays using arrays, because there's a limit on how large arrays can be declared
// int main()
// {
//     int arr[15] = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};
//     int n = 15;
//     int maxi = INT32_MIN;
//     for(int i = 0; i<n; i++){
//         if(arr[i] > maxi){
//             maxi = arr[i];
//         };
//     };
//     int hashArray[maxi+1] = {0};
//     for(int i = 0; i<n; i++){
//         hashArray[arr[i]]++;
//     };
//     cout << "5 occurred " << hashArray[5] << " times" << endl;
//     cout << "4 occurred " << hashArray[4] << " times" << endl;
//     cout << "3 occurred " << hashArray[3] << " times" << endl;
//     cout << "2 occurred " << hashArray[2] << " times" << endl;
//     cout << "1 occurred " << hashArray[1] << " times" << endl;
//     cout << "0 occurred " << hashArray[0] << " times" << endl;
//     cout << "10 occurred " << hashArray[10] << " times" << endl; // logs a garbage value, because hashArray's length is 5
//     return 0;
// };

// - inside the main() function, we can at max declare an integer array of size 10^6
// - outside the main() function (i.e. globally), we can at max declare an integer array of size 10^7
// - for boolean arrays, the size limits are 10^7 and 10^8 respectively

// - hashing : pre-store and fetch when required