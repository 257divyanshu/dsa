#include <iostream>
using namespace std;

// 

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