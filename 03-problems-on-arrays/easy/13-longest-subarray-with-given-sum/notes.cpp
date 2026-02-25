#include <bits/stdc++.h>
using namespace std;

// 📍 subarray
// - is a contiguous part of an array

// 📍 optimal approach
// - TC -> O(n) (O(2*n) in worst case)
// - SC -> O(1)
int longestSubarrayWithSumK(vector<int> vect, long long k)
{
    int longestSubarrayLength = 0;
    long long currentSum = 0;
    int i = 0;
    for (int j = 0; j < vect.size(); j++)
    {
        cout << " i = " << i << "; j = " << j << endl;
        currentSum += vect[j];
        cout << "currentSum = " << currentSum << endl;
        if (currentSum == k)
        {
            int currSubarrayLength = j - i + 1;
            cout << "currSubarrayLength = " << currSubarrayLength << endl;
            longestSubarrayLength = max(longestSubarrayLength, currSubarrayLength);
            // currentSum -= vect[i];
            // i++;
        }
        else if (currentSum > k)
        {

            // 📍 might miss the subarray near the right end
            // currentSum -= vect[i];
            // i++;

            // 📍 won't miss the subarray near the right end
            while (currentSum > k)
            {
                currentSum -= vect[i];
                i++;
            }
            if (currentSum == k)
            {
                int currSubarrayLength = j - i + 1;
                cout << "currSubarrayLength = " << currSubarrayLength << endl;
                longestSubarrayLength = max(longestSubarrayLength, currSubarrayLength);
            }
        }
    }
    cout << "currentSum = " << currentSum << endl;
    return longestSubarrayLength;
}

// 📍 better approach (its optimal if the array contains negatives also)
// - TC -> O(n) (if using unordered_map)
// - TC -> O(n * log(n)) (if using map)
// - SC -> O(n)
// int longestSubarrayWithSumK(vector<int> vect, int k){
//     int longestSubarrayLength = 0;
//     unordered_map<int,int> hashMap;
//     int currSum = 0;
//     for(int i = 0; i < vect.size(); i++){
//         currSum += vect[i];
//         // hashMap[currSum] = i; // 📍 I placed it here
//         if(currSum == k){
//             longestSubarrayLength = max(longestSubarrayLength, i+1);
//         }
//         else if (hashMap.find(currSum-k)!=hashMap.end()){
//             longestSubarrayLength = max(longestSubarrayLength, i - hashMap[currSum-k]);
//         }
//         // 📍 if the array has only positives:
//         // hashMap[currSum] = i; // 📍 sir placed it here
//         // 📍 if the arrays has 0s and negatives as well
//         if(hashMap.find(currSum) == hashMap.end()){
//             hashMap[currSum] = i;
//         }
//     }
//     return longestSubarrayLength;
// };

// 📍 bruteforce approach
// 1️⃣ returning the longestSubarray
// vector<int> longestSubarrayWithSumK(vector<int> vect, int k){
//     vector<int> longestSubarray(0);
//     for(int i = 0; i < vect.size(); i++){
//         vector<int> currSubarray(0);
//         int currSum = 0;
//         for(int j = i; j < vect.size(); j++){
//             if(currSum + vect[j] < k){
//                 currSubarray.push_back(vect[j]);
//                 currSum += vect[j];
//             }
//             else if (currSum + vect[j] == k){
//                 currSubarray.push_back(vect[j]);
//                 currSum += vect[j];
//                 if(currSubarray.size() > longestSubarray.size()){
//                     longestSubarray = currSubarray;
//                 }
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     return longestSubarray;
// }
// 2️⃣ returning the length of longestSubarray
// - TC -> O(n^2)
// - SC -> O(1)
// int longestSubarrayWithSumK(vector<int> vect, int k){
//     int longestSubarrayLength = 0;
//     for(int i = 0; i < vect.size(); i++){
//         int currSum = 0;
//         for(int j = i; j < vect.size(); j++){
//             if(currSum + vect[j] < k){
//                 currSum += vect[j];
//             }
//             else if (currSum + vect[j] == k){
//                 currSum += vect[j];
//                 if(j-i+1 > longestSubarrayLength){
//                     longestSubarrayLength = j - i + 1;
//                 }
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     return longestSubarrayLength;
// }

int main()
{

    // vector<int> vect = {1,2,3,1,1,1,1,4,2,3};
    // int k = 3;
    // 1 + 2 = 3
    // 1 + 1 + 1 = 3
    // 1 + 1 + 1 = 3

    // vector<int> vect = {10, 5, 2, 7, 1, 9};
    // int k = 15;

    vector<int> vect = {1, 2, 3, 1, 1, 1, 1, 3, 3};
    int k = 6;

    // 1️⃣ returning the longestSubarray
    // vector<int> result = longestSubarrayWithSumK(vect, k);
    // cout << "longestSubarrayLength = " << result.size() << endl;
    // for(auto num : result){
    //     cout << num << " ";
    // }
    // cout << endl;

    // 2️⃣ returning the length of longestSubarray
    int longestSubarrayLength = longestSubarrayWithSumK(vect, k);
    cout << "longestSubarrayLength = " << longestSubarrayLength << endl;

    // unordered_map<int,int> hashMap;
    // cout << hashMap[2] << endl;

    return 0;
};