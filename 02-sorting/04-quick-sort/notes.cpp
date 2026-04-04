#include <bits/stdc++.h>
using namespace std;

// 📍 sir's code
int partition(vector<int> &vect, int start, int end) {
    int pivot = vect[start];
    int i = start;
    int j = end;
    while(i < j){
        while(i<end && vect[i]<=pivot){
            i++;
        };
        while(j>start && vect[j]>pivot){
            j--;
        };
        if(i<j){
            swap(vect[i], vect[j]);
        };
    };
    swap(vect[j], vect[start]);
    return j;
};
void quickSortHelper(vector<int> &vect, int start, int end) {
    if(start < end){
        int pIndex = partition(vect, start, end);
        quickSortHelper(vect, start, pIndex - 1);
        quickSortHelper(vect, pIndex + 1, end);
    }
}
void quickSort(vector<int> vect)
{
    quickSortHelper(vect, 0, vect.size()-1);
};

// 📍 my code
// void quickSort(vector<int>& vect, int start, int end){
//     if(start<end){
//         int pivotIndex = start;
//         int i = start;
//         int j = end;
//         while(i<j){
//             // 📍 either this
//             // while(i<end && vect[i]<=vect[pivotIndex]){
//             //     i++;
//             // };
//             // while(j>start && vect[j]>vect[pivotIndex]){
//             //     j--;
//             // };
//             // 📍 or this
//             while(i<end && vect[i]<vect[pivotIndex]){
//                 i++;
//             };
//             while(j>start && vect[j]>=vect[pivotIndex]){
//                 j--;
//             };
//             if(i<j){
//                 swap(vect[i], vect[j]);
//             };
//         };
//         swap(vect[j], vect[pivotIndex]);
//         pivotIndex = j;
//         quickSort(vect, start, pivotIndex-1);
//         quickSort(vect, pivotIndex+1, end);
//     };
// };

// 📍 intution
// - step 1 : pick a pivot element and place it in its correct place in the sorted array
//   - any element can be the pivot element
// - step 2 : smaller on the left, larger on the right
// - step 3 : repeat the steps for the left array and the right array
// - see 📸 image-01-inution.png

// 📍 complexities
// - TC -> O(n * log(n))
// - SC -> O(1)

// - quick sort is better than merge sort, because merger sort needs a temporary error leading to a SC of O(N)
// - quick sort algorithm is a divide and conquer algorithm

int main()
{
    // {4, 6, 2, 5, 7, 9, 1, 3}
    return 0;
};