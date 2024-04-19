#include <bits/stdc++.h>
using namespace std;



// CHECK IF ARRAY IS SORTED AND ROTATE
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
// BRUTEFORCE
// make a set
// iterate over the array and keep pushing elements into the map
// then iterate over the map
// and fill the elements of map back into the array
// TC is O(n*logN + n)
// for inserting an element into map logN
// we are inserting n times so n * logN
// and another n for iterating over the map
// OPTIMAL
// two pointer approach
// int removeDuplicates(vector<int> &arr)
// {
//     int i = 0;
//     for (int j = 0; j < arr.size(); j++)
//     {
//         if (arr[i] != arr[j])
//         {
//             i++;
//             arr[i] = arr[j];
//         };
//     };
//     return i + 1;
// }

// CHECK IF THE ARRAY IS SORTED OR NOT
// https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
// TC is O(n)
// int isSorted(int n, vector<int> arr) {
//     // Write your code here.
//     for(int i = 0; i<n-1; i++)
//     {
//         if(arr[i+1]<arr[i])
//         {
//             return false;
//         };
//     };
//     return true;
// }

// SECOND LARGEST NUMBER
// https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
// BRUTEFORCE
// sort the array
// get the largest
// traverse from back to find the element which is not equal to the largest, when found, set it as the secondlargest
// similarly for smallest elements as well
// TC is O(n*logn) + n
// O(n*logn) for sorting the array
// n for finding the second largest/smallest
// BETTER
// itearte over the array once to find the largest
// set secondlargest to INT_MIN
// in the second iteration find the secondlargest (if arr[i]>secondlargest && arr[i]<largest then set secondlargest to arr[i])
// TC is O(N+N) = O(2N) = O(N)
// vector<int> getSecondOrderElements(int n, vector<int> arr) {
//     // Write your code here.
//     int largest = INT_MIN;
//     int smallest = INT_MAX;
//     int secondLargest = largest;
//     int secondsmallest = smallest;
//     for(int i = 0; i<n; i++)
//     {
//         if(arr[i]>largest)
//         {
//             secondLargest = largest;
//             largest = arr[i];
//         }
//         else
//         {
//             if(arr[i]>secondLargest)
//             {
//                 secondLargest = arr[i];
//             };
//         };
//         if(arr[i]<smallest)
//         {
//             secondsmallest = smallest;
//             smallest = arr[i];
//         }
//         else
//         {
//             if(arr[i]<secondsmallest)
//             {
//                 secondsmallest = arr[i];
//             };
//         };
//     };
//     vector<int> result = {secondLargest,secondsmallest};
//     return result;
// }