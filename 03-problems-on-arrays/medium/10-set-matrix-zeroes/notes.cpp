#include <bits/stdc++.h>
using namespace std;

// 📍 sir's optimal
// - TC -> O(m*n) (precisely O(2 * m * n))
// - SC -> O(1)
void setZeroes(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int col0 = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                if (j == 0)
                {
                    col0 = 0;
                }
                else
                {
                    matrix[0][j] = 0;
                }
                matrix[i][0] = 0;
            }
        }
    }
    // 📍 either iterate backward
    // for (int i = m-1; i > 0; i--)
    // {
    //     for (int j = n-1; j > 0; j--)
    //     {
    //         if(!matrix[i][0] || !matrix[0][j]){
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }
    // 📍 or iterate forward
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (!matrix[i][0] || !matrix[0][j])
            {
                matrix[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // 📍 either do it this way
    // for(int j = 0; j<n; j++){
    //     if(!matrix[0][0]){
    //         matrix[0][j] = 0;
    //     }
    // }
    // 📍 or do it this way
    if (!matrix[0][0])
    {
        for (int j = 0; j < n; j++)
        {
            matrix[0][j] = 0;
        }
    }
    // 📍 either do it this way
    // for (int i = 0; i < m; i++)
    // {
    //     if (!col0)
    //     {
    //         matrix[i][0] = 0;
    //     }
    // }
    // 📍 or do it this way
    if (!col0)
    {
        for (int i = 0; i < m; i++)
        {
            matrix[i][0] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// 📍 sir's better approach
// - TC -> O(2*m*n)
// - SC -> O(m+n)
// void setZeroes(vector<vector<int>> &matrix)
// {
//     int m = matrix.size();
//     int n = matrix[0].size();
//     vector<int> zeroIndicesI(m, 0);
//     vector<int> zeroIndicesJ(n, 0);
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 zeroIndicesI[i] = 1;
//                 zeroIndicesJ[j] = 1;
//             }
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if ((zeroIndicesI[i] == 1) || (zeroIndicesJ[j] == 1))
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// 📍 sir's bruteforce approach (for binary matrix)
// - TC -> O( (m*n) * (m+n) + m*n))
// - SC -> O(1)
// void setZeroes(vector<vector<int>> &matrix)
// {
//     int m = matrix.size();
//     int n = matrix[0].size();
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 // mark all the elements in that row as -1
//                 for (int k = 0; k < m; k++)
//                 {
//                     if (matrix[k][j] != 0)
//                     { // keep the zeroes unchanged
//                         matrix[k][j] = -1;
//                     }
//                 }
//                 // mark all the elements in that column as -1
//                 for (int k = 0; k < n; k++)
//                 {
//                     if (matrix[i][k] != 0)
//                     { // keep the zeroes unchanged
//                         matrix[i][k] = -1;
//                     }
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(matrix[i][j] != -1){
//                 cout << "+";
//             }
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == -1)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(matrix[i][j] != -1){
//                 cout << "+";
//             }
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
// }

// 📍 third approach (its the bruteforce that leetcode has mentioned in description)
// - TC -> O(m*n) (precisely O(3*m*n))
// - SC -> O(m*n)
// void setZeroes(vector<vector<int>> &matrix)
// {
//     int m = matrix.size();
//     int n = matrix[0].size();
//     // vector<vector<int>> matrix = matrix;
//     // vector<vector<int>> matrix = matrix;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 int ci = 0;
//                 while (ci < m)
//                 { // put 0s into that whole column
//                     matrix[ci++][j] = 0;
//                 }
//             }
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 int cj = 0;
//                 while (cj < n)
//                 { // put 0s into that whole row
//                     matrix[i][cj++] = 0;
//                 }
//             }
//         }
//     }
//     // ⏸️ paused before implementing it completely
// }

// 📍 second approach ❌
// - its 0s off the indices that shouldn't be 0ed off
// void setZeroes(vector<vector<int>> &matrix)
// {
//     int m = matrix.size();
//     int n = matrix[0].size();
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             if(matrix[i][j] == 0){
//                 int ci = 0;
//                 int cj = 0;
//                 while(ci < m){ // put 0s into that whole column
//                     matrix[ci++][j] = 0;
//                 }
//                 while(cj < n){ // put 0s into that whole row
//                     matrix[i][cj++] = 0;
//                 }
//             }
//         }
//     }
// }

// 📍 first approach (its the better that leetcode has mentioned in description)
// - TC -> O(2*m*n)
// - SC -> O(m+n)
// void setZeroes(vector<vector<int>> &matrix)
// {
//     int m = matrix.size();
//     int n = matrix[0].size();
//     unordered_set<int> zeroIndicesI;
//     unordered_set<int> zeroIndicesJ;
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             if(matrix[i][j] == 0){
//                 zeroIndicesI.insert(i);
//                 zeroIndicesJ.insert(j);
//             }
//         }
//     }
//     for(int i = 0; i<m; i++){
//         for(int j = 0; j<n; j++){
//             if((zeroIndicesI.find(i) != zeroIndicesI.end()) || (zeroIndicesJ.find(j) != zeroIndicesJ.end())){
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }

int main()
{
    // 📍 tc1
    // vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
    // setZeroes(matrix);
    // 📍 tc2
    // vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    // setZeroes(matrix);
    // 📍 tc3
    vector<vector<int>> matrix = {{1, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 0, 1}, {0, 1, 1, 1}};
    setZeroes(matrix);
    return 0;
};