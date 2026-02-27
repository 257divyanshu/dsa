#include <bits/stdc++.h>
using namespace std;

// 📍 trick
// - outer loop : 0 to n
// - inner loops condition:
//   - initialization: j = i
//   - condition: ( ( j > 0 ) && ( vect[j-1] > vect[j] ) ) 

// 📍 complexity
// - TC -> O(n^2)
// - O(n) for best case (when the array is already sorted)

int insertionSort(vector<int> &vect)
{
    for (int num : vect)
    {
        cout << num << " ";
    };
    cout << endl;
    cout << endl;
    for (int i = 0; i < vect.size(); i++)
    {
        int j = i;
        // 📍 second approach (better)
        while (j > 0 && (vect[j - 1] > vect[j]))
        {
            swap(vect[j - 1], vect[j]);
            j--;
            for (int num : vect)
            {
                cout << num << " ";
            };
            cout << endl;
        };
        // 📍 first approach
        // for (int j = i; j > 0; j--)
        // {
        //     if (vect[j - 1] > vect[j])
        //     {
        //         swap(vect[j - 1], vect[j]);
        //         for (int num : vect)
        //         {
        //             cout << num << " ";
        //         };
        //         cout << endl;
        //     }
        //     else
        //     {
        //         break;
        //     };
        //     // for (int num : vect)
        //     // {
        //     //     cout << num << " ";
        //     // };
        //     // cout << endl;
        // };
        cout << endl;
        cout << "after iteration " << i << " :" << endl;
        for (int num : vect)
        {
            cout << num << " ";
        };
        cout << endl;
        cout << endl;
    };
};

int main()
{
    vector<int> vect = {14, 9, 15, 12, 6, 8, 13};
    insertionSort(vect);
    return 0;
};

// 📍 walkthrough
// - given unsorted array : 14, 9, 15, 12, 6, 8, 13
// - (14), 9, 15, 12, 6, 8, 13 // algorithms starts
// - 14, (9), 15, 12, 6, 8, 13
// - 9, 14, (15), 12, 6, 8, 13
// - 9, 14, 15, (12), 6, 8, 13
// - 9, 12, 14, 15, (6), 8, 13
// - 6, 9, 12, 14, 15, (8), 13
// - 6, 8, 9, 12, 14, 15, (13)
// - 6, 8, 9, 12, 13, 14, 15

// 📍 insertion sort : take an element and place it in its correct position