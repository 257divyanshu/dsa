#include <bits/stdc++.h>
using namespace std;

// 📍 binary search
// TC -> O(log(n))
// SC -> O(log(n))
int binarySearch(vector<int> arr, int start, int end, int target){
    if(start>end){
        return -1;
    }
    int midIndex = start + (end - start)/2;
    if(arr[midIndex] == target){
        return midIndex;
    }
    else if (arr[midIndex] > target){
        return binarySearch(arr,start,midIndex-1,target);
    }
    else{
        return binarySearch(arr,midIndex+1,end,target);
    }
}

// 📍 check if array is sorted or not
// TC -> O(n)
// SC -> O(n)
// 📍 ma'am's approach
bool checkIfSorted(vector<int> arr, int n){
    if(n == 1){
        return true;
    }
    if(arr[n-2] > arr[n-1]){
        return false;
    }
    return checkIfSorted(arr, n-1);
}

// 📍 fibonacii
// sequence : 0 1 1 2 3 5 8 13 21 34 55 89 144
// TC -> O(2^n)
// SC -> O(n)
int fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}

int main()
{

    // for(int i = 0; i<10; i++){
    //     cout << i << " -> " << fibo(i) << endl;
    // }

    // vector<int> arr = {0,1,2,3,4};
    // vector<int> arr = {0,0,2,3,4};
    // vector<int> arr = {1,0,0,0,0};
    vector<int> arr = {0,0,0,0,-1};
    // 📍 my approach
    // cout << checkIfSorted(arr, 0) << endl;
    // 📍 ma'am's approach
    cout << checkIfSorted(arr, 5) << endl;

    return 0;
};