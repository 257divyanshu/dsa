#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// INSERTION SORT
// take an element and place in it's correct index
// void insertionSort(vector<int> &vect)
// {
//     int n = vect.size();
//     for(int i = 1; i<n; i++)
//     {
//         int main = i;
//         for(int j = i-1; j>=0; j--)
//         {
//             if(vect[j]>vect[main])
//             {
//                 swap(vect[j],vect[main]);
//                 main = j;
//             };
//         };
//     };
// };
int main()
{
    // vector<int> vect = {5,4,3,2,1};
    // insertionSort(vect);
    // int n = vect.size();
    // for(int i = 0; i<n; i++)
    // {
    //     cout<<vect[i]<<" ";
    // };
    // cout<<endl;
    vector<int> vect(0);
    cout<<"printing"<<endl;
    cout<<vect[0]<<endl;
    cout<<"printed"<<endl;
    return 0;
};

// BUBBLE SORT
// push the max to the last by adjacent swaps
// TC is O(n^2) (worst case & average case)
// for best case it's 
// void bubbleSort(vector<int> &vect)
// {
//     int n = vect.size();
//     for(int i = 0; i<n-1; i++)
//     {
//         int didSwap = 0;
//         for(int j = 0; j<n-1-i; j++)
//         {
//             if(vect[j]>vect[j+1])
//             {
//                 swap(vect[j],vect[j+1]);
//                 didSwap = 1;
//             };
//         };
//         for(int k = 0; k<n; k++)
//         {
//             cout<<vect[k]<<" ";
//         };
//         cout<<endl;
//         if(didSwap==0)
//         {
//             cout<<"breaking out"<<endl;
//             break;
//         };
//     };
// };
// int main()
// {
//     vector<int> vect = {5,4,3,2,1};
//     reverse(vect.begin(),vect.end());
//     bubbleSort(vect);
//     return 0;
// };

// SELECTION SORT 
// select minimums and swap
// TC is O(n^2) (for best worst and average)
// void selectionSort(vector<int> &vect)
// {
//     int n = vect.size();
//     for(int i = 0; i<n-1; i++)
//     {
//         int minInd = i;
//         for(int j = i+1; j<n; j++)
//         {
//             if(vect[j]<vect[i])
//             {
//                 minInd = j;
//             };
//         };
//         swap(vect[minInd],vect[i]);      
//         for(int k = 0; k<n; k++)
//         {
//             cout<<vect[k]<<" ";
//         };
//         cout<<endl;
//     };
// };
// int main()
// {
//     vector<int> vect = {5,4,3,2,1};
//     selectionSort(vect);
//     return 0;
// };