#include <bits/stdc++.h>
using namespace std;

// 📍 optimal approach (two pointers)
// - TC -> O(m+n)
// - SC -> O(m+n)
vector<int> unionOfTwoSortedArrays(vector<int> vect1, vector<int> vect2)
{
    vector<int> result(0);
    int i = 0;
    int j = 0;
    cout << "____________while 1____________" << endl << endl;
    while (i < vect1.size() && j < vect2.size())
    {
        cout << "i = " << i << "; j = " << j << endl;
        if (vect1[i] < vect2[j])
        {
            cout << "vect1[i] < vect2[j]" << endl;
            if (result.empty() || result.back() != vect1[i])
            {
                cout << "pushing vect1[i]" << endl;
                result.push_back(vect1[i]);
            };
            cout << "incrementing i" << endl;
            i++;
        }
        else if (vect1[i] == vect2[j])
        {
            cout << "vect1[i] == vect2[j]" << endl;
            if (result.empty() || result.back() != vect1[i])
            {
                cout << "pushing vect1[i]" << endl;
                result.push_back(vect1[i]);
            };
            cout << "incrementing i and j" << endl;
            i++;
            j++;
        }
        else
        {
            cout << "vect1[i] > vect2[j]" << endl;
            if (result.empty() || result.back() != vect2[j])
            {
                cout << "pushing vect2[j]" << endl;
                result.push_back(vect2[j]);
            };
            cout << "incrementing j" << endl;
            j++;
        }
        cout << endl;
    }
    cout << "____________while 2____________" << endl << endl;
    while (i < vect1.size())
    {
        cout << "i = " << i << endl;
        if (result.empty() || result.back() != vect1[i])
        {
            cout << "pushing vect1[i]" << endl;
            result.push_back(vect1[i]);
        };
        cout << "incrementing i" << endl;
        i++;
    }
    cout << "____________while 3____________" << endl << endl;
    while (j < vect2.size())
    {
        cout << "j = " << j << endl;
        if (result.empty() || result.back() != vect2[j])
        {
            cout << "pushing vect1[i]" << endl;
            result.push_back(vect2[j]);
        };
        cout << "incrementing j" << endl;
        j++;
    }
    return result;
};

// 📍 bruteforce approach
// TC -> O( n1*log(n) + n2*log(n) + (n1+n2))
// SC -> O( (n1 + n2) + (n1 + n2) ) (one n1+n2 is for solving the problem (for resultantSet) and one n1+n2 is for returning the answer (for resultantArray))
// vector<int> unionOfTwoSortedArrays(vector<int> vect1, vector<int> vect2)
// {
//     set<int> resultantSet;
//     vector<int> resultantArray(0);
//     for(auto num : vect1){
//         resultantSet.insert(num);
//     }
//     for(auto num : vect2){
//         resultantSet.insert(num);
//     }
//     for(auto num : resultantSet){
//         resultantArray.push_back(num);
//     }
//     return resultantArray;
// }

int main()
{
    // vector<int> vect1 = {1, 1, 2, 3, 4, 5, 5, 5, 5, 5, 6, 6, 7};
    vector<int> vect1 = {1, 1, 2, 3, 4, 5};
    // vector<int> vect2 = {2, 3, 4, 4, 5};
    vector<int> vect2 = {2, 3, 4, 4, 5, 5, 5, 5, 5, 6, 6, 7};
    // result = {1,1,2,2,3,3,4,4,4,5,5}; ❌
    // result = {1,2,3,4,5}; ✔️
    vector<int> result = unionOfTwoSortedArrays(vect1, vect2);
    for (auto num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    // cout << vect1.back() << endl;
    // cout << vect2.back() << endl;
    // vector<int> vect3 = {};
    // cout << vect3.back() << endl;

    return 0;
};