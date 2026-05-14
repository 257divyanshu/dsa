#include <bits/stdc++.h>
using namespace std;

// 📍 my second approach ✔️
int customExponentiation(int a, int b)
{
    int result = 1;
    for (int i = 1; i <= b; i++)
    {
        result *= a;
    };
    return result;
};
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> resultSet;
    for (int i = 0; i < customExponentiation(2, n); i++)
    {
        vector<int> currSet;
        int currBit = 0;
        int iCopy = i;
        while (iCopy != 0)
        {
            if ((iCopy & 1) == 1)
            {
                currSet.push_back(nums[currBit]);
            };
            currBit++;
            iCopy >>= 1;
        };
        sort(currSet.begin(), currSet.end());
        resultSet.emplace(currSet);
    };
    vector<vector<int>> resultVect(resultSet.begin(), resultSet.end());
    return resultVect;
};

// 📍 my first approach ❌
// int customExponentiation(int a, int b)
// {
//     int result = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         result *= a;
//     };
//     return result;
// };
// vector<vector<int>> subsetsWithDup(vector<int> &nums)
// {
//     int n = nums.size();
//     set<vector<int>> resultSet;
//     for (int i = 0; i < customExponentiation(2, n); i++)
//     {
//         vector<int> currSet;
//         int currBit = 0;
//         int iCopy = i;
//         while (iCopy != 0)
//         {
//             if ((iCopy & 1) == 1)
//             {
//                 currSet.push_back(nums[currBit]);
//             };
//             currBit++;
//             iCopy >>= 1;
//         };
//         resultSet.emplace(currSet);
//     };
//     vector<vector<int>> resultVect(resultSet.begin(), resultSet.end());
//     return resultVect;
// };

int main()
{
    vector<vector<int>> vect1 = {{}, {1}, {1, 4}, {4}, {4, 1}, {4, 1, 4}, {4, 4}, {4, 4, 1}, {4, 4, 1, 4}, {4, 4, 4}, {4, 4, 4, 1}, {4, 4, 4, 1, 4}, {4, 4, 4, 4}};
    vector<vector<int>> vect2 = {{}, {1}, {1, 4}, {1, 4, 4}, {1, 4, 4, 4}, {1, 4, 4, 4, 4}, {4}, {4, 4}, {4, 4, 4}, {4, 4, 4, 4}};
    // cout << vect1.size() << endl;
    // cout << vect2.size() << endl;
    for (int i = 0; i < max(vect1.size(), vect2.size()); i++)
    {
        cout << "vect1[" << i << "] ";
        if (i < vect1.size())
        {
            cout << "{ ";
            for (int j = 0; j < vect1[i].size(); j++)
            {
                cout << vect1[i][j] << " ";
            }
            cout << "}";
            cout << endl;
        };
        // cout << "vect2[" << i << "] " ;
        // if(i<vect2.size()){
        //     cout << "{ ";
        //     for(int j = 0; j<vect2[i].size(); j++){
        //         cout << vect2[i][j] << " ";
        //     }
        //     cout << "}";
        //     cout << endl;
        // };
        // cout << endl;

        auto it = find(vect2.begin(), vect2.end(), vect1[i]);
        if (it == vect2.end())
        {
            cout << "not found in vect2" << endl;
        }
        else
        {
            cout << "found in vect2" << endl;
        }
        cout << endl;
    }
    return 0;
};