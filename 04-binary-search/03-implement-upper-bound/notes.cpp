#include <bits/stdc++.h>
using namespace std;

int upperBound(vector<int> vect, int x)
{
    int start = 0;
    int end = vect.size() - 1;
    int result = vect.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vect[mid] <= x)
        {
            start = mid + 1;
        }
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
        // cout << "lower bound of " << i << " -> " << lowerBound(vect, i) << endl;
        // cout << "upper bound of " << i << " -> " << upperBound(vect, i) << endl;
        // cout << "lower bound of " << i << " -> " << (lower_bound(vect.begin(), vect.end(), i) - vect.begin()) << endl;
        cout << "upper bound of " << i << " -> " << (upper_bound(vect.begin(), vect.end(), i) - vect.begin()) << endl;
        // 📝 upper bound of element < mini = 0th index
        // 📝 upper bound of element > maxi = nth index (hypothetical)
    }

    return 0;
};

// 📍 upper bound
// - smallest index such that arr[ind] > x
// - TC -> O(log2(n))