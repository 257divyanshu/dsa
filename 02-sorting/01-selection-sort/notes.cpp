#include <bits/stdc++.h>
using namespace std;

// 📍 trick
// - outer -> 0 to n-1
// - inner -> i+1 to n

// 📍 complexity
// - TC -> O(n^2)

void selectionSort(vector<int>& vect)
{
    for (int num : vect)
    {
        cout << num << " ";
    };
    cout << endl;
    for (int i = 0; i < vect.size() - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < vect.size(); j++)
        {
            if (vect[j] < vect[minIndex])
            {
                minIndex = j;
            };
        };
        swap(vect[minIndex], vect[i]);
        for (int num : vect)
        {
            cout << num << " ";
        };
        cout << endl;
    };
}

int main()
{
    vector<int> vect = {13, 46, 24, 52, 20, 9};
    selectionSort(vect);
    return 0;
};

// 📍 walkthrough
// - given unsorted array : 13, 46, 24, 52, 20, 9
// -  13, 46, 24, 52, 20, 9
// -  9, 46, 24, 52, 20, 13
// -  9, 13, 24, 52, 20, 46
// -  9, 13, 20, 52, 24, 46
// -  9, 13, 20, 24, 52, 46
// -  9, 13, 20, 24, 46, 52

// 📍 selection sort : select minimums and swap