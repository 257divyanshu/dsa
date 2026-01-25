#include <bits/stdc++.h>
using namespace std;

// 📍 binary search
// - can be used in places where the search space is sorted
// - binary search is not just limited to arrays, it can be applied any place where the search space is sorted
// - TC -> O(log2(n))

// 📍 recursive approach
// int binarySearch(vector<int> vect, int target, int start, int end)
// {
//     // cout<<"start -> "<<start<<endl;
//     // cout<<"end -> "<<end<<endl;
//     if (start > end)
//     {
//         return -1;
//     };
//     // int mid = (end + start) / 2; // 📍 might cause overflow
//     int mid = start + (end - start) / 2; // 📍 won't cause overflow (if start and end aren't greater than INT32_MAX)
//     // cout<<"mid -> "<<mid<<endl;
//     // cout<<" "<<endl;
//     if (vect[mid] < target)
//     {
//         // binarySearch(vect, target, mid + 1, end); // 📍 because we forgot the return statement, a garbage value will be returned
//         return binarySearch(vect, target, mid + 1, end);
//     }
//     else if (vect[mid] == target)
//     {
//         return mid;
//     }
//     else
//     {
//         // binarySearch(vect, target, start, mid - 1); // 📍 because we forgot the return statement, a garbage value will be returned
//         return binarySearch(vect, target, start, mid-1);
//     };
// };

// 📍 iterative approach
int binarySearch(vector<int> vect, int target)
{
    int start = 0;
    int end = vect.size() - 1;
    while (start <= end)
    {
        // int mid = (end + start) / 2; // 📍 might cause overflow
        int mid = start + (end - start) / 2; // 📍 won't cause overflow (if start and end aren't greater than INT32_MAX)
        if (vect[mid] < target)
        {
            start = mid + 1;
        }
        else if (vect[mid] == target)
        {
            return mid;
        }
        else
        {
            end = mid - 1;
        };
    };
    return -1;
};

int main()
{

    // // 📍 example 1
    // vector<int> vect = {1};
    // cout << "0 found at: " << binarySearch(vect, 0) << endl;
    // cout << "1 found at: " << binarySearch(vect, 1) << endl;

    // // 📍 example 2
    // vector<int> vect = {1,2};
    // cout << "0 found at: " << binarySearch(vect, 0) << endl;
    // cout << "1 found at: " << binarySearch(vect, 1) << endl;
    // cout << "2 found at: " << binarySearch(vect, 2) << endl;

    // // 📍 example 3
    // vector<int> vect = {1,2,3};
    // cout << "0 found at: " << binarySearch(vect, 0) << endl;
    // cout << "1 found at: " << binarySearch(vect, 1) << endl;
    // cout << "2 found at: " << binarySearch(vect, 2) << endl;
    // cout << "3 found at: " << binarySearch(vect, 3) << endl;

    // // 📍 example 4
    // vector<int> vect = {1,2,3,4};
    // cout << "0 found at: " << binarySearch(vect, 0) << endl;
    // cout << "1 found at: " << binarySearch(vect, 1) << endl;
    // cout << "2 found at: " << binarySearch(vect, 2) << endl;
    // cout << "3 found at: " << binarySearch(vect, 3) << endl;
    // cout << "4 found at: " << binarySearch(vect, 4) << endl;

    // 📍 example 5
    vector<int> vect = {1,2,3,4,5};
    cout << "0 found at: " << binarySearch(vect, 0) << endl;
    cout << "1 found at: " << binarySearch(vect, 1) << endl;
    cout << "2 found at: " << binarySearch(vect, 2) << endl;
    cout << "3 found at: " << binarySearch(vect, 3) << endl;
    cout << "4 found at: " << binarySearch(vect, 4) << endl;
    cout << "5 found at: " << binarySearch(vect, 5) << endl;

    // 📍 testing the recursive approach
    // vector<int> vect = {0, 1, 2, 3, 4, 5};
    // cout << "-1 found at: " << binarySearch(vect, -1, 0, vect.size() - 1) << endl;
    // cout << "0 found at: " << binarySearch(vect, 0, 0, vect.size() - 1) << endl;
    // cout << "1 found at: " << binarySearch(vect, 1, 0, vect.size() - 1) << endl;
    // cout << "2 found at: " << binarySearch(vect, 2, 0, vect.size() - 1) << endl;
    // cout << "3 found at: " << binarySearch(vect, 3, 0, vect.size() - 1) << endl;
    // cout << "4 found at: " << binarySearch(vect, 4, 0, vect.size() - 1) << endl;
    // cout << "5 found at: " << binarySearch(vect, 5, 0, vect.size() - 1) << endl;

    return 0;
};