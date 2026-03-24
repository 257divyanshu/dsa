#include <bits/stdc++.h>
using namespace std;

// 📍 sir's optimal approach
// - TC -> O(log(n))
// - SC -> O(1)
int findKthPositive(vector<int> &arr, int k){
    int start = 0;
    int end = arr.size() - 1;
    if(arr[start] > k){
        return k;
    }
    int mid = -1;
    while(start <= end){
        mid = start + (end - start)/2;
        cout << "s=" << start << "; e=" << end << "; mid=" << mid << endl;
        int missingCount = arr[mid] - mid - 1;
        cout << "missingCount = " << missingCount << endl;
        if(missingCount >= k){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    cout << "s=" << start << endl;
    cout << "e=" << end << endl;
    // return arr[e nd] + k - (arr[end] - end - 1);
    return k + end + 1;
}

// 📍 thought process
// - the question wants a time complexity less than O(n)
// - the question probably wants O(log(n))
// - can we apply binary search on arr?
// - no, because it does contain the missing number
// - can we apply binary search on answers?
// - no, because we want the kth missing number, not the minimum missing numbeer of the maximum missing number

// 📍 sir's bruteforce approach
// - TC -> O(n)
// - SC -> O(1)
// int findKthPositive(vector<int> &arr, int k){
//     int kthPositive = k;
//     for(int num : arr){
//         if(num <= kthPositive){
//             kthPositive++;
//         }
//         else{
//             break;
//         }
//     }
//     return kthPositive;
// }

// 📍 Complexity Analysis 
// - TC -> O(2*(maxNum + k + 1) + arr.size())
// - SC -> O(maxNum + k + 1)

// 📍 my approach 1
// int findKthPositive(vector<int> &arr, int k)
// {
//     vector<int> missingNums(arr[arr.size() - 1] + k + 1, 1);
//     for (int num : arr)
//     {
//         missingNums[num] = 0;
//     }
//     int missingIndex = 0;
//     for (int i = 0; i < missingNums.size(); i++)
//     {
//         if (missingNums[i])
//         {
//             missingIndex++;
//         }
//         if (missingIndex == k + 1)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

int main()
{
    // 📍 tc1
    // vector<int> arr = {2,3,4,7,11};
    // int k = 5;
    // 📍 tc2
    // vector<int> arr = {1,2,3,4};
    // int k = 2;
    // 📍 tc3
    // vector<int> arr = {1,2,4,7,11,15,21};
    // int k = 16;
    // 📍 tc4
    vector<int> arr = {5,6,8,11,15,20};
    int k = 3;
    cout << findKthPositive(arr, k) << endl;
    return 0;
};