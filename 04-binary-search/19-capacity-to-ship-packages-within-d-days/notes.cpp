#include <bits/stdc++.h>
using namespace std;

// 📍 complexity analysis
// - TC -> O(log(summation(weights) - maxWeight + 1)) (due to binary search) * O(weights.size()) (for calculating canShipWithinDeadline or not)
// - SC -> O(1)

// 📍 sirs logic to check if canShipWithinDeadline
bool canShipWithinDeadline(int capacity, vector<int> &weights, int days){
    int numberOfDaysRequired = 1;
    int currentLoad = 0;
    for(int weight : weights){
        if(currentLoad + weight > capacity){
            numberOfDaysRequired++;
            currentLoad = weight;
        }
        else{
            currentLoad += weight;
        }
    }
    return numberOfDaysRequired <= days;
}
// 📍 my logic to check if canShipWithinDeadline
// bool canShipWithinDeadline(int capacity, vector<int> &weights, int days){
//     int numberOfDaysRequired = 0;
//     int currentLoad = 0;
//     for(int weight : weights){
//         currentLoad += weight;
//         if(currentLoad > capacity){
//             numberOfDaysRequired++;
//             currentLoad = weight;
//         }
//     }
//     numberOfDaysRequired++;
//     return numberOfDaysRequired <= days;
// }

int shipWithinDays(vector<int> &weights, int days)
{
    int start = -1;
    int end = -1;
    for(int weight : weights){
        if(weight > start){
            start = weight;
        }
        end += weight;
    }
    // int answer = 0;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(canShipWithinDeadline(mid, weights, days)){
            // answer = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    // cout << "answer = " << answer << endl;
    return start;
}

int main()
{
    // 📍 tc1
    // vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    // int days = 5;
    // 📍 tc2
    // vector<int> weights = {3,2,2,4,1,4};
    // int days = 3;

    // 📍 mtc1
    // vector<int> weights = {3,2,2,4,1,4};
    // int days = 1;
    // 📍 mtc2
    // vector<int> weights = {3,2,2,4,1,4};
    // int days = 6;
    // 📍 mtc3
    // vector<int> weights = {1,1,1,1,1,1};
    // int days = 6;
    // 📍 mtc4
    // vector<int> weights = {1,1,1,1,1,1};
    // int days = 1;
    // 📍 mtc5
    vector<int> weights = {1,1,1,1,1,1};
    int days = 3;

    cout << shipWithinDays(weights, days) << endl;
    return 0;
};