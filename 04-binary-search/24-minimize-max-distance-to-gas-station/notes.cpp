#include <bits/stdc++.h>
using namespace std;

// 📍 intution behind sir's optimal approach
// - the standard things we do in binary search: 
//   (i) while(start <= end)
//   (ii) start = mid + 1
//   (iii) end = mid - 1
// - won't work here
// - because here, we are working with long double (and not with int)
// - using the condition while(start <= end) for start and end of long double datatype will lead to too many interations (that would be redundant)
// - the condition needs to be while(end - start > 1e-6) (the 1e-6 is mentioned in the question)
// - also, we need to use start = mid; and end = mid; instead of start = mid + 1; and end = mid - 1;
// - why returning end works? see 📸 optimal-solution/image-01-why-return-end.png
// - the concept of opposite polarity won't work because here we don't have start = mid + 1; and end = mid - 1;
// - because the concept of opposite polarity doesn't work here, returning start (because we are supposed to move left on finding the answer) won't work

// 📍 sir's optimal
// - TC -> O( n + ( log(maxDiff) * n ) )
int numberOfGasStationsRequired(double dist, vector<int> &arr)
{
    int count = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        int stationsInBetween = (arr[i] - arr[i - 1]) / dist;
        // cout << "(arr[i] - arr[i - 1]) " << (arr[i] - arr[i - 1]) << endl;
        // cout << "stationsInBetween * dist " << stationsInBetween * dist << endl;
        if ((arr[i] - arr[i - 1]) == stationsInBetween * dist)
        {
            // cout << "decrementing stationsInBetween" << endl;
            stationsInBetween--;
        };
        count += stationsInBetween;
    }
    return count;
}
double minimiseMaxDistance(vector<int> &stations, int k)
{
    // Code here
    double start = 0;
    double end = 0;
    for (int i = 1; i < stations.size(); i++)
    {
        int diff = stations[i] - stations[i-1];
        // cout << "diff = " << diff << endl;
        if (diff > end)
        {
            end = diff;
        };
    };
    double difference = 1e-6;
    while (end - start > difference)
    {
        double mid = start + (end - start) / 2;
        cout << "start = " << start << "; end = " << end << "; mid = " << mid << endl;
        int count = numberOfGasStationsRequired(mid, stations);
        // cout << "count = " << count << endl;
        if (count <= k)
        {
            cout << "count <= k" << endl;
            cout << "moving left" << endl;
            end = mid;
        }
        else
        {
            cout << "count > k" << endl;
            cout << "moving right" << endl;
            start = mid;
        };
    };
    return end;
};

// 📍 better aproach
// - involves the use of Priority Queue (which internally uses Heap)
// - TC -> O( ( (n + k) * log(n) ) )
// - SC -> O(n)

// 📍 bruteforce solution
// - see 📁 bruteforce-solution
// - TC -> O((n * k) + n)

// 📍 my approach after watching intution from the solution video
// - TC -> O((n * log(maxDiff)))
// - SC -> O(1)
// 📍 variation
// bool isAllocationPossible(vector<int> &arr, long double mid, int k){
//     int count = 1;
//     for(int i = 1; i<arr.size(); i++){
//         count += ceil((long double)(arr[i]-arr[i-1])/mid);
//         if(count > arr.size() + k){
//             return false;
//         }
//     }
//     return true;
// }
// long double minimiseMaxDistance(vector<int> &arr, int k){
//     long double start = 0;
//     long double end = 0;
//     for(int i = 1; i<arr.size(); i++){
//         int difference = arr[i] - arr[i-1];
//         if(difference > end){
//             end = difference;
//         }
//     }
//     while(start <= end){
//         long double mid = start + (end - start)/2;
//         cout << "s = " << start << "; e = " << end << "; m = " << mid << endl;
//         if(isAllocationPossible(arr, mid, k)){
//             end = mid - 0.000001;
//         }
//         else{
//             start = mid + 0.000001;
//         }
//     }
//     return start;
// }
// 📍 initial code
// int memberCount(vector<int> &arr, long double mid){
//     int count = 1;
//     for(int i = 1; i<arr.size(); i++){
//         count += ceil((long double)(arr[i]-arr[i-1])/mid);
//     }
//     return count;
// }
// long double minimiseMaxDistance(vector<int> &arr, int k){
//     long double start = 0;
//     long double end = 0;
//     for(int i = 1; i<arr.size(); i++){
//         int difference = arr[i] - arr[i-1];
//         if(difference > end){
//             end = difference;
//         }
//     }
//     while(start <= end){
//         long double mid = start + (end - start)/2;
//         cout << "s = " << start << "; e = " << end << "; m = " << mid << endl;
//         int count = memberCount(arr, mid);
//         if(count <= arr.size() + k){
//             end = mid - 0.000001;
//         }
//         else{
//             start = mid + 0.000001;
//         }
//     }
//     return start;
// }

// ❌ flawed logic (solution for submission on GFG)
// double minimiseMaxDistanceHelper(vector<double> &arr, int k)
// {
//     // if(k == 1){
//     //     return 0.00;
//     // }
//     for(double gasStationPosition : arr){
//         cout << gasStationPosition << " ";
//     };
//     cout << endl;
//     double largestDistance = 0;
//     double secondLargestDistance = -1;
//     int indexAfterLargestDistance = -1;
//     for(int i = 1; i<arr.size(); i++){
//         double distance = arr[i] - arr[i-1];
//         cout << "i = " << i << endl;
//         cout << "arr[i] = " << arr[i] << endl;
//         cout << "arr[i-1] = " << arr[i-1] << endl;
//         cout << "distance = " << distance << endl;
//         if(distance >= largestDistance){
//             cout << "distance >= largestDistance" << endl;
//             secondLargestDistance = largestDistance;
//             largestDistance = distance;
//             indexAfterLargestDistance = i;
//         }
//         else if (distance < largestDistance && distance > secondLargestDistance){
//             secondLargestDistance = distance;
//         }
//         cout << "largestDistance = " << largestDistance << endl;
//         cout << "secondLargestDistance = " << secondLargestDistance << endl;
//         cout << "indexAfterLargestDistance = " << indexAfterLargestDistance << endl;
//     }
//     cout << "final largestDistance = " << largestDistance << endl;
//     cout << "final secondLargestDistance = " << secondLargestDistance << endl;
//     cout << "final indexAfterLargestDistance = " << indexAfterLargestDistance << endl;
//     if(k==0){
//         cout << "k == 0; returning " << largestDistance << endl;
//         return largestDistance;
//     }
//     int stationsToAdd = 1;
//     while(secondLargestDistance <= largestDistance/(stationsToAdd + 1)){
//         cout << "largestDistance/(stationsToAdd + 1) = " << largestDistance/(stationsToAdd + 1) << endl;
//         stationsToAdd++;
//         cout << "updating stationsToAdd to " << stationsToAdd<<endl;
//         if(stationsToAdd > k){
//             cout << "stationsToAdd exceeded k; decrementing stationsToAdd" << endl;
//             stationsToAdd--;
//             break;
//         }
//     }
//     cout << "final stationsToAdd to " << stationsToAdd<<endl;
//     k -= stationsToAdd;
//     cout << "updated k = " << k << endl;
//     double currentStation = arr[indexAfterLargestDistance - 1];
//     for(int i = 1; i<=stationsToAdd; i++){
//         cout << "inserting at " << indexAfterLargestDistance+i-1 << endl;
//         cout << "inserting " << currentStation+(largestDistance/(stationsToAdd+1)) << endl;
//         arr.insert(arr.begin()+indexAfterLargestDistance+i-1, currentStation+(largestDistance/(stationsToAdd+1)));
//         currentStation += (largestDistance/(stationsToAdd+1));
//     }
//     cout << "updated arr" << endl;
//     for(double gasStationPosition : arr){
//         cout << gasStationPosition << " ";
//     };
//     cout << endl;
//     cout << endl;
//     return minimiseMaxDistanceHelper(arr, k);
// }
// double minMaxDist(vector<int> &stations, int k){
//     vector<double> newArr = {};
//     for(int gasStationPosition : stations){
//         newArr.push_back((double)(gasStationPosition));
//     }
//     return minimiseMaxDistanceHelper(newArr, k);
// }

// ❌ flawed logic (solution for submission on TUF)
// long double minimiseMaxDistance(vector<long double> &arr, int k)
// {
//     // if(k == 1){
//     //     return 0.00;
//     // }
//     for(long double gasStationPosition : arr){
//         cout << gasStationPosition << " ";
//     };
//     cout << endl;
//     long double largestDistance = 0;
//     long double secondLargestDistance = -1;
//     int indexAfterLargestDistance = -1;
//     for(int i = 1; i<arr.size(); i++){
//         long double distance = arr[i] - arr[i-1];
//         if(distance > largestDistance){
//             secondLargestDistance = largestDistance;
//             largestDistance = distance;
//             indexAfterLargestDistance = i;
//         }
//         else if (distance < largestDistance && distance > secondLargestDistance){
//             secondLargestDistance = distance;
//         }
//         cout << "largestDistance = " << largestDistance << endl;
//         cout << "secondLargestDistance = " << secondLargestDistance << endl;
//         cout << "indexAfterLargestDistance = " << indexAfterLargestDistance << endl;
//     }
//     cout << "final largestDistance = " << largestDistance << endl;
//     cout << "final secondLargestDistance = " << secondLargestDistance << endl;
//     cout << "final indexAfterLargestDistance = " << indexAfterLargestDistance << endl;
//     if(k==0){
//         cout << "k == 0; returning " << largestDistance << endl;
//         return largestDistance;
//     }
//     int stationsToAdd = 1;
//     while(secondLargestDistance <= largestDistance/(stationsToAdd + 1)){
//         cout << "largestDistance/(stationsToAdd + 1) = " << largestDistance/(stationsToAdd + 1) << endl;
//         stationsToAdd++;
//         cout << "updating stationsToAdd to " << stationsToAdd<<endl;
//         if(stationsToAdd > k){
//             cout << "stationsToAdd exceeded k; decrementing stationsToAdd" << endl;
//             stationsToAdd--;
//             break;
//         }
//     }
//     cout << "final stationsToAdd to " << stationsToAdd<<endl;
//     k -= stationsToAdd;
//     cout << "updated k = " << k << endl;
//     long double currentStation = arr[indexAfterLargestDistance - 1];
//     for(int i = 1; i<=stationsToAdd; i++){
//         cout << "inserting at " << indexAfterLargestDistance+i-1 << endl;
//         cout << "inserting " << currentStation+(largestDistance/(stationsToAdd+1)) << endl;
//         arr.insert(arr.begin()+indexAfterLargestDistance+i-1, currentStation+(largestDistance/(stationsToAdd+1)));
//         currentStation += (largestDistance/(stationsToAdd+1));
//     }
//     cout << "updated arr" << endl;
//     for(long double gasStationPosition : arr){
//         cout << gasStationPosition << " ";
//     };
//     cout << endl;
//     cout << endl;
//     return minimiseMaxDistance(arr, k);
// }

int main()
{
    // vector<long double> arr = {3, 6, 12, 19, 33};
    // int k = 2;
    // vector<long double> arr = {3, 6, 12, 19, 33};
    // int k = 3;
    // long double answer = minimiseMaxDistance(arr, k);

    // vector<int> arr = {3, 6, 12, 19, 33};
    // int k = 3;
    // long double answer = minimiseMaxDistance(arr, k);
    // cout << answer << endl;

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 9;
    // int k = 10;
    // int k = 1;
    double answer = minimiseMaxDistance(arr, k);
    cout << answer << endl;
    
    // vector<int> arr = {1,3,5,6,11,12};
    // int k = 6;
    // long double answer = minimiseMaxDistance(arr, k);
    // cout << answer << endl;
    
    // vector<int> arr = {1, 13, 17, 23};
    // int k = 5;
    // long double answer = minimiseMaxDistance(arr, k);
    // cout << answer << endl;

    // vector<int> arr = {2,3,6,7,8,9,10,11,16,17,21,23,25,27,30,31,32,33,41,44,48,49};
    // int k = 16;
    // // int k = 10;
    // // int k = 1;
    // double answer = minimiseMaxDistance(arr, k);
    // cout << answer << endl;
    return 0;
};