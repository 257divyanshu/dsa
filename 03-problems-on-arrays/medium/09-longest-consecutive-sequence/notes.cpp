#include <bits/stdc++.h>
using namespace std;

// 📍 sir's bruteforce approach
// - see 📸image-01-bruteforce-code.png
// - TC -> O(N^3)
// - SC -> O(1)

// 📍 my first approach
// TC -> O(n + n * ( log(n) ) )
int longestConsecutive(vector<int> &nums){
    unordered_map<int,int> sequenceTracker;
    sort(nums.begin(), nums.end());
    // map<int,int> sequenceTracker;
    for(int num : nums){
        auto iter = sequenceTracker.find(num);
        auto nextIter = sequenceTracker.find(num+1);
        // 📍 fails:
        // if(iter == sequenceTracker.end() && nextIter == sequenceTracker.end()){
        //     cout << "entry not found for " << num << endl;
        //     sequenceTracker[num+1] = 1;
        // }
        // else{
        //     cout << "entry found for " << num << endl;
        //     int value = iter->second;
        //     sequenceTracker.erase(iter);
        //     sequenceTracker[num+1] = value + 1;
        // }
        // 📍 passes
        if(iter == sequenceTracker.end()){
            cout << "entry not found for " << num << endl;
            if(nextIter == sequenceTracker.end()){
                sequenceTracker[num+1] = 1;
            }
        }
        else{
            cout << "entry found for " << num << endl;
            int value = iter->second;
            sequenceTracker.erase(iter);
            sequenceTracker[num+1] = value + 1;
        }
    }
    int longestSequenceLength = 0;
    for(auto &iter : sequenceTracker){
        cout << iter.first << " -> " << iter.second << endl;
        if(iter.second > longestSequenceLength){
            longestSequenceLength = iter.second;
        }
    }
    return longestSequenceLength;
}

// 📍 first approach (MLE)
// - MLE due to array element = 999999999
// 📍 works for negatives as well
// int longestConsecutive(vector<int> &nums)
// {
//     if(nums.size() == 0){
//         return 0;
//     }
//     int maxi = INT32_MIN;
//     int mini = INT32_MAX;
//     for(int num : nums){ // O(n)
//         if(num > maxi){
//             maxi = num;
//         };
//         if(num < mini){
//             mini = num;
//         }
//     };
//     if(mini > 0){
//         mini = 0;
//     }
//     vector<int> vect(maxi + 1 - mini,0);
//     for(int num : nums){ // O(n)
//         vect[num - mini]++;
//     };
//     // for(int num : vect){
//     //     cout << num << " ";
//     // };
//     // cout << endl;
//     // for(int i = 0; i < vect.size(); i++){
//     //     cout << i + mini << " -> " << vect[i] << endl;
//     // };
//     int longestSequenceLength = 0;
//     int currentSequenceLength = 0;
//     for(int num : vect){
//         if(num != 0){
//             currentSequenceLength++;
//             if(currentSequenceLength > longestSequenceLength){
//                 longestSequenceLength = currentSequenceLength;
//             }
//         }
//         else{
//             currentSequenceLength = 0;
//         }
//     };
//     return longestSequenceLength;
// }
// 📍 works only if the nums has positives
// int longestConsecutive(vector<int> &nums)
// {
//     if(nums.size() == 0){
//         return 0;
//     }
//     int maxi = INT32_MIN;
//     for(int num : nums){
//         if(num > maxi){
//             maxi = num;
//         };
//     };
//     vector<int> vect(maxi+1,0);
//     for(int num : nums){
//         vect[num]++;
//     };
//     for(int num : vect){
//         cout << num << " ";
//     };
//     cout << endl;
//     int longestSequenceLength = 0;
//     int currentSequenceLength = 0;
//     for(int num : vect){
//         if(num != 0){
//             currentSequenceLength++;
//             if(currentSequenceLength > longestSequenceLength){
//                 longestSequenceLength = currentSequenceLength;
//             }
//         }
//         else{
//             currentSequenceLength = 0;
//         }
//     };
//     return longestSequenceLength;
// }

int main()
{
    // 📍 this piece of code fails silently (because of out of bound access) 
    // vector<int> vect(0);
    // vect[4] = -1;
    // cout << vect[4] << endl;
    // for(int num : vect){
    //     cout << num << " ";
    // };
    // cout <<endl;

    // 📍 tc1
    vector<int> nums = {100,4,200,1,3,2};
    // vector<int> nums = {8,4,9,1,10,3,11,2,12};
    // vector<int> nums = {1,3,5,7,9,11};
    // vector<int> nums = {-3,1,2,3,5};
    // vector<int> nums = {0,-1};
    cout << longestConsecutive(nums) << endl;

    return 0;
};