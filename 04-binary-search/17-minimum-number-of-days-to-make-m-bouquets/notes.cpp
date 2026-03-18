#include <bits/stdc++.h>
using namespace std;

int calculateNumberOfPossibleBouquets(vector<int> &bloomDay, int k, int mid){
    int possibleBouquets = 0;
    int flowerCountInBouquet = 0;
    for(int i = 0; i<bloomDay.size(); i++){
        cout << "bloomDay[i] = " << bloomDay[i] << endl;
        if(bloomDay[i] <= mid){
            cout << "it is <= mid=" << mid << endl;
            flowerCountInBouquet+=1;
            cout << "flowerCountInBouquet = " << flowerCountInBouquet << endl;
            if(flowerCountInBouquet == k){
                cout << "flowerCountInBouquet == k=" << k << endl;
                possibleBouquets++;
                cout << "popossibleBouquets = " << possibleBouquets << endl;
                flowerCountInBouquet = 0;
                cout << "updated flowerCountInBouquet = " << flowerCountInBouquet << endl;
            };
        }
        else{
            cout << "it is > mid=" << mid << endl;
            flowerCountInBouquet = 0;
            cout << "flowerCountInBouquet = " << flowerCountInBouquet << endl;
        }
    }
    return possibleBouquets;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
    long long product = (long)m * k;
    // if(m * k > bloomDay.size()){ // ⚠️ m*k can cause integer overflow
    if(product > bloomDay.size()){
        return -1;
    }
    int start = INT32_MAX;
    int end = INT32_MIN;
    for(int num : bloomDay){
        if(num < start) {
            start = num;
        }
        if(num > end) {
            end = num;
        }
    }
    int answer = -1;
    while(start <= end){
        int mid = start + (end - start)/2;
        cout << "s = " << start << "; e = " << end << "; m = " << mid << endl;
        int possibleBouquets = calculateNumberOfPossibleBouquets(bloomDay, k, mid);
        if(possibleBouquets >= m){
            answer = mid;
            end = mid - 1;
            cout << "updated answer = " << mid << endl;
            cout << "moving left" << endl;
        }
        else{
            start = mid + 1;
            cout << "moving right" << endl;
        }
        cout << endl;
    }
    return answer;
}

int main()
{
    // // 📍 TC 1
    // vector<int> bloomDay = {1,10,3,10,2};
    // int m = 3;
    // int k = 1;
    // // 📍 TC 2
    // vector<int> bloomDay = {1,10,3,10,2};
    // int m = 3;
    // int k = 2;
    // 📍 TC 3
    vector<int> bloomDay = {7,7,7,7,12,7,7};
    int m = 2;
    int k = 3;

    cout << minDays(bloomDay, m, k) << endl;
    return 0;
};