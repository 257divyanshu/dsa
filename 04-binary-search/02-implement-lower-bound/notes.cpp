#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> vect, int x)
{
    int start = 0;
    int end = vect.size() - 1;
    int result = vect.size(); // result's default value set to vect.size() ensures that vect.size() is returned as lower bound of candidates that are greater than the last element of the array
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vect[mid] < x)
        {
            start = mid + 1;
        }
        // 📍 wrong approach :
        // - this will return -1 for all the targets that are not present in the array
        // else if (vect[mid] == x)
        // {
        //     result = mid;
        //     end = mid - 1;
        // }
        // else
        // {
        //     end = mid - 1;
        // };
        // 📍 right approach :
        // - this will prevent -1 from being retruned, for all the targets that are not present in the array
        else
        {
            result = mid;
            end = mid - 1;
        };
    };
    return result;
};

int main()
{

    // vector<int> vect = {1, 2, 3, 4, 5};
    // for (int i = 0; i <= 8; i++)
    // {
    //     cout << "lower bound of " << i << " -> " << lowerBound(vect, i) << endl;
    // }

    // vector<int> vect = {1, 2, 4, 5};
    // cout << "lower bound of " << 3 << " -> " << lowerBound(vect, 3) << endl;

    // vector<int> vect = {1, 2, 4, 4, 5};
    // cout << "lower bound of " << 3 << " -> " << lowerBound(vect, 3) << endl;

    // 📍 the built-in function for finding lower bound and upper_bound
    // - the lower_bound() returns an iterator
    vector<int> vect = {1, 2, 4, 4, 5};
    for (int i = 0; i <= 8; i++)
    {
        cout << "lower bound of " << i << " -> " << lowerBound(vect, i) << endl;
        // cout << "upper bound of " << i << " -> " << upperBound(vect, i) << endl;
        // cout << "lower bound of " << i << " -> " << (lower_bound(vect.begin(), vect.end(), i) - vect.begin()) << endl;
        // cout << "upper bound of " << i << " -> " << (upper_bound(vect.begin(), vect.end(), i) - vect.begin()) << endl;
        // 📝 lower bound of element < mini = 0th index
        // 📝 lower bound of element > maxi = nth index (hypothetical)
    }

    return 0;
};

// 📍 lower bound
// - smallest index such that arr[ind] >= x
// - to search the lower bound of a number in an array, the array must be sorted
// - e.g. lower bound of x = 8 in the vector [3, 5, 8, 15, 19] is index 2
// - e.g. lower bound of x = 9 in the vector [3, 5, 8, 15, 19] is index 3
// - e.g. lower bound of x = 16 in the vector [3, 5, 8, 15, 19] is index 4
// - e.g. lower bound of x = 20 in the vector [3, 5, 8, 15, 19] is index 5 (the hypothetical index or the size of the array)
// - TC -> O(log2(n))