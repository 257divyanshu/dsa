#include <bits/stdc++.h>
using namespace std;

bool allocatable(int arr[], int n, int k, int pages){
    int currentAllocation = 0;
    int studentsAllocated = 1;
    for(int i = 0; i<n; i++){
        if(currentAllocation + arr[i] <= pages){
            currentAllocation += arr[i];
        }
        else{
            currentAllocation = arr[i];
            studentsAllocated += 1;
        };
    };
    return studentsAllocated<=k;
}

int findPages(int arr[], int n, int k) {
    if(k>n){
        return -1;
    };
    int start = 0;
    int end = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>start){
            start = arr[i];
        };
        end += arr[i];
    };
    int answer = -1;
    while(start<=end){
        int mid = start + (end - start) / 2;
        if(allocatable(arr, n, k, mid)){
            answer = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        };
    };
    return answer;
}

int main()
{
    
    return 0;
};