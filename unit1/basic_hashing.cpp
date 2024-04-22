#include <bits/stdc++.h>
using namespace std;

// TIME COMPELXITY IN HASHING
// using maps : sotring and fetching both takes O(logN) (in all cases)
// using unordered maps : sorting and fetching takes O(1) (O(N) is worst case)
// use unordered maps it it leads to TLE use maps

// HASHING USING MAPSTO HASH CHARACTERS
int main()
{
    cout << "Enter the string: ";
    string str;
    cin >> str;
    map<char, int> map1;
    for (int i = 0; i < str.length(); i++)
    {
        map1[str[i]]++;
    };
    for (auto it : map1)
    {
        cout << it.first << "->" << it.second << " ";
    };
    return 0;
};

// HASING USING MAPS TO HASH INTEGERS
// int main()
// {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     map<int,int> map1;
//     cout<<"Enter the elements: ";
//     for(int i = 0; i<n; i++)
//     {
//         cin>>arr[i];
//         map1[arr[i]]++;
//     };
//     cout<<"data: "<<endl;
//     for(auto it : map1)
//     {
//         cout<<it.first<<"->"<<it.second<<" ";
//     };
//     cout<<endl;
//     // int num = 0;
//     // while(num!=420)
//     // {
//     //     cout<<"Enter the num: ";
//     //     cin>>num;
//     //     cout<<num<<" occured "<<map1[num]<<" times"<<endl;
//     // }
//     return 0;
// };
// maps sorted all the elements in sorted manner

// HASHING CHARACTERS OF A STRING USING ARRAYS
// int main()
// {
//     string str;
//     cout<<"Enter the string: ";
//     cin>>str;
//     int strSize = str.length();
//     int frek[255] = {0};
//     for(int i = 0; i<strSize; i++)
//     {
//         frek[str[i]]++;
//     };
//     char chr = 'a';
//     cout<<"Enter the character: ";
//     cin>>chr;
//     while(chr!='x')
//     {
//         cout<<chr<<" occured "<<frek[chr]<<" times"<<endl;
//         cout<<"Enter the character: ";
//         cin>>chr;
//     }
//     return 0;
// };

// HASHING INTEGERAL DATA USING ARRAYS
// problem : max int arr size in int main is 10^6, max int arr size in the global space is 10^7
// for integers the ranges are 10^7 and 10^8
// int main()
// {
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements: ";
//     int maxi = 0;
//     for(int i = 0; i<n; i++)
//     {
//         cin>>arr[i];
//         if(arr[i]>maxi)
//         {
//             maxi = arr[i];
//         }
//     };
//     cout<<"max element is "<<maxi<<endl;
//     int frek[maxi+1] = {0};
//     for(int i = 0; i<n; i++)
//     {
//         frek[arr[i]]++;
//     };
//     cout<<"frek array is ";
//     for(int i = 0; i<(maxi+1); i++)
//     {
//         cout<<frek[i]<<" ";
//     };
//     cout<<endl;
//     int num = 0;
//     cout<<"Enter the num: ";
//     cin>>num;
//     while(num!=420)
//     {
//         if(num>maxi)
//         {
//             cout<<"out of range!"<<endl;
//         }
//         else
//         {
//             cout<<num<<" occured "<<frek[num]<<" times"<<endl;
//         }
//         cout<<"Enter the num: ";
//         cin>>num;
//     }
//     return 0;
// };

// HASHING BRTUEFORCE METOD
// we will make a function that will supply us the frequency of the element if we supply the element and the array
// we will keep storing the frequency of every unique element in a vector, and we have got the frequency vector
// TC of this code is O(m*n) (where m is the number of unique elements and n is the total number of elements in the array)

// int main()
// {
//     cout<<"Mission Placement"<<endl;
//     return 0;
// };