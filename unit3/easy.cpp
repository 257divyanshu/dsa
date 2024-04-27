#include <bits/stdc++.h>
using namespace std;

// 🟩 MAXIMUM CONSECUTIVE ONES
// https://leetcode.com/problems/max-consecutive-ones/description/
// TC is o(n)
// int findMaxConsecutiveOnes(vector<int> &nums)
// {
//     int count = 0;
//     int maxCount = 0;
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == 1)
//         {
//             count++;
//         }
//         else
//         {
//             if (count > maxCount)
//             {
//                 maxCount = count;
//             }
//             count = 0;
//         };
//     };
//     if (maxCount < count)
//     {
//         maxCount = count;
//     };
//     return maxCount;
// };

// 🟩 FIND THE MISSING NUMBER
// https://leetcode.com/problems/missing-number/description/
// BRUTEFORCE METHOD
// run a loop from 0 to n
// in every iteration check if the value of i is present in the vector or not
// if it's present then no problem
// as soon as you find a value of i that is not present in the vector return it.
// TC is O(n^2)
// BETTER
// using hashing technique
// create a hash array of size n
// iterate over the given array to store the frequence of each element in the hash array
// after this iterate the hash array to find which index contains the element 0
// return the index that contains the element 0
// TC is O(2n) ~ O(n) (2n because, we are doing two interations, one iteration over the array and second iteration over the map) (hashing an element into the unordered_map has time complexity = O(1))
// SC is O(n)
// OPTIMAL 1
// sum approach
// find the sum from 0 to n
// find the sum of the elements in the array
// return the different sum1-sum2
// TC is O(n)
// SC is O(1)
// OPTIMAL 2
// make a variable named xorvalue
// set xorvalue to n
// now iterate over the given array and then do
// xor^=i; and then xor^=arr[i];
// return the value or xor
// TC is O(n)
// SC is O(1)

// MOVE ZEROES TO THE END
// https://leetcode.com/problems/move-zeroes/description/
// BRUTEFORCE METHOD
// make a new temp vector
// iterate over the original array, store the non zero elements into the temp vector and count the number of 0s
// now iterate over the temp vector to fill the content of the temp vector into the array
// iterate once more to fill 0s into the original vector
// TC is O(n) + O(x) + O(n-x) (x is the number of non zero elements)
// total TC is O(2n) ~ O(n)
// OPTIMIZED
// void moveZeroes(vector<int> &arr)
// {
//     int j = -1;
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             j = i;
//             break;
//         };
//     };
//     if (j != -1)
//     {
//         for (int i = j + 1; i < n; i++)
//         {
//             if (arr[i] != 0)
//             {
//                 swap(arr[j], arr[i]);
//                 j++;
//             };
//         };
//     };
// };
// TC is O(x) + O(n-x) = O(n)
// SC is O(1) (no extra space) (but we are using the array)

// 🟩 LEFT ROTATE AN ARRAY D PLACES
// BRUTEFORCE METHOD
// void rotateByD(vector<int> &vect, int k, int n)
// {
//     vector<int> temp(0);
//     for(int i = 0; i<k; i++)
//     {
//         temp.push_back(vect[i]);
//     };
//     for(int i = k; i<n; i++)
//     {
//         vect[i-k] = vect[i];
//     };
//     for(int i = n-k; i<n; i++)
//     {
//         vect[i] = temp[i-n+k];
//     };
// };
// OPTIMAL
// #include <bits/stdc++.h>
// vector<int> rotateArray(vector<int>& vect, int n) {
//     // Write your code here.
//     int k = 1;
//     reverse(vect.begin(),vect.begin()+k);
//     reverse(vect.begin()+k,vect.end());
//     reverse(vect.begin(),vect.end());
//     return vect;
// };
// TC is O(d) + O(n-d) + O(n) = O(2n)
// SC is O(1)

// 🟩 LEFT ROTATE AN ARRAY BY ONE PLACE
// https://www.naukri.com/code360/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
// BRUTEFORCE METHOD
// store the first element in a temp variable
// loop over the array from 1 to n
// do arr[i-1] = arr[i];
// now put temp in the last element
// TC is O(n)
// SC is O(1) as we are not using any extra space
// we are using O(n) space to solve the problem (of the array)
// but we are not using any extra space

// 🟩 REMOVE DUPLICATES
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
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

// 🟩 CHECK IF ARRAY IS SORTED AND ROTATE
// https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
// bool check(vector<int>& arr) {
//         int count = 0;
//         int n = arr.size();
//         for(int i = 0; i<n-1; i++)
//         {
//             if(arr[i+1]<arr[i])
//             {
//                 count++;
//             };
//         };
//         if(arr[n-1]>arr[0])
//         {
//             count++;
//         };
//         return count<=1;
//     };

// 🟩 CHECK IF THE ARRAY IS SORTED OR NOT
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

// 🟩 SECOND LARGEST NUMBER
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
// OPTIMAL
// TC is O(N)
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