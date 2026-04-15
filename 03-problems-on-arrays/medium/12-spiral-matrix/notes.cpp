#include <bits/stdc++.h>
using namespace std;

// 📍 sir's approach
// - TC -> O(m*n)
// - SC -> O(1)
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int top = 0;
    int left = 0;
    int bottom = m - 1;
    int right = n - 1;
    vector<int> result = {};
    // cout << "top = " << top << "; bottom = " << bottom << "; left = " << left << "; right = " << right << endl;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            // cout << "1 pushing " << matrix[top][i] << endl;
            result.push_back(matrix[top][i]);
        };
        top++;
        for (int i = top; i <= bottom; i++)
        {
            // cout << "2 pushing " << matrix[i][right] << endl;
            result.push_back(matrix[i][right]);
        };
        right--;
        if (top <= bottom) // for cases like {{1,2,3,4}}
        {
            for (int i = right; i >= left; i--)
            {
                // cout << "3 pushing " << matrix[bottom][i] << endl;
                result.push_back(matrix[bottom][i]);
            };
        }
        bottom--;
        if (left <= right) // for cases like {{1}, {2}, {3}, {4}}
        {
            for (int i = bottom; i >= top; i--)
            {
                // cout << "4 pushing " << matrix[i][left] << endl;
                result.push_back(matrix[i][left]);
            };
        }
        left++;
    }
    return result;
}

// what interview wants to evaluate through this question:
// - implementation
// - clean code

// 📍 my approach ✔️
// - TC -> O(m*n)
// - SC -> O(1)
// vector<int> spiralOrder(vector<vector<int>> &matrix)
// {
//     int ai = 0;
//     int aj = 0;
//     int bi = matrix.size() - 1;
//     int bj = matrix[0].size() - 1;
//     vector<int> result = {};
//     while (ai <= bi && aj <= bj)
//     {
//         cout << "ai = " << ai << "; aj = " << aj << "; bi = " << bi << " bj = " << bj << endl;
//         bool firstLoopWorked = false;
//         bool secondLoopWorked = false;
//         bool thirdLoopWorked = false;
//         bool fourthLoopWorked = false;
//         for (int y = aj; y <= bj; y++)
//         {
//             firstLoopWorked = true;
//             cout << "1 pushing " << matrix[ai][y] << endl;
//             result.push_back(matrix[ai][y]);
//         }
//         // cout << "p1 pushing " << matrix[ai][bj] << endl;
//         // result.push_back(matrix[ai][bj]);
//         if (firstLoopWorked)
//         {
//             cout << "firstLoopWorked" << endl;
//             for (int x = ai + 1; x <= bi; x++)
//             {
//                 secondLoopWorked = true;
//                 cout << "2 pushing " << matrix[x][bj] << endl;
//                 result.push_back(matrix[x][bj]);
//             }
//         }
//         // cout << "p2 pushing " << matrix[bi][bj] << endl;
//         // result.push_back(matrix[bi][bj]);
//         if (secondLoopWorked)
//         {
//             cout << "secondLoopWorked" << endl;
//             for (int y = bj - 1; y >= aj; y--)
//             {
//                 thirdLoopWorked = true;
//                 cout << "3 pushing " << matrix[bi][y] << endl;
//                 result.push_back(matrix[bi][y]);
//             }
//         }
//         // cout << "p3 pushing " << matrix[bi][aj] << endl;
//         // result.push_back(matrix[bi][aj]);
//         // for(int x = bi-1; x>=ai; x--){
//         if (thirdLoopWorked)
//         {
//             cout << "thirdLoopWorked" << endl;
//             for (int x = bi - 1; x > ai; x--)
//             {
//                 fourthLoopWorked = true;
//                 cout << "4 pushing " << matrix[x][aj] << endl;
//                 result.push_back(matrix[x][aj]);
//             }
//         }
//         if(fourthLoopWorked){
//             cout << "fourthLoopWorked" << endl;
//         }
//         ai++;
//         aj++;
//         bi--;
//         bj--;
//     }
//     // if(m != n){
//     //     result.pop_back();
//     // }
//     return result;
// }

int main()
{
    // 📍 tc1 (m = n)
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    // 📍 tc2 (n = m+1)
    // vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // 📍 tc3 (m = n+1)
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    // 📍 tc4 (n = m+2)
    // vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8}};

    // 📍 tc5 (m = n+2)
    // vector<vector<int>> matrix = {{1,2},{3,4},{5,6},{7,8}};

    // 📍 tc6
    vector<vector<int>> matrix = {{1,2,3,4}};

    // 📍 tc7
    // vector<vector<int>> matrix = {{1}, {2}, {3}, {4}};

    cout << "provided matrix" << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    vector<int> result = spiralOrder(matrix);
    cout << endl;
    cout << "resultant traversal" << endl;
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
};