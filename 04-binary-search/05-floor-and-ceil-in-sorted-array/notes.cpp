#include <bits/stdc++.h>
using namespace std;

int binaryFloor(vector<int> vect, int x)
{
    int start = 0;
    int end = vect.size() - 1;
    int result = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vect[mid] <= x)
        {
            result = vect[mid];
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        };
    };
    return result;
};

int binaryCeil(vector<int> vect, int x)
{
    int start = 0;
    int end = vect.size() - 1;
    int result = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (vect[mid] >= x)
        {
            result = vect[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        };
    };
    return result;
};

int main()
{
    vector<int> vect = {1,2,2,4,5};
    for(int i = 0; i<=6; i++){
        cout << i << "'s Floor value : " << binaryFloor(vect,i) << endl;
        // cout << i << "'s Ceil value : " << binaryCeil(vect,i) << endl;
    };
    return 0;
};

// 📍 floor
// - largest element in the array <= x
// - for x > maxi -> floor will be maxi
// - for x < mini -> -1

// 📍 ceil
// - smallest element in the array >= x
// - for x > maxi -> ceil will be -1
// - for x < mini -> ceil will be mini