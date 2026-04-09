#include <bits/stdc++.h>
using namespace std;

// 📍 my second approach
void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i; j < n - 1 - i; j++)
        {
            int temp = matrix[n - 1 - j][i];
            matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
            matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
            matrix[j][n - 1 - i] = matrix[i][j];
            matrix[i][j] = temp;
        }
    }
}

// 📍 my first approach
// - TC -> O(m*n)
// - SC -> O(m*n)
// - its not in place
// - it uses an additional n x n matrix
// void rotate(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     vector<vector<int>> helperMatrix;
//     for (int j = 0; j < n; j++)
//     {
//         vector<int> toInsert;
//         for (int i = n - 1; i >= 0; i--)
//         {
//             toInsert.push_back(matrix[i][j]);
//         }
//         helperMatrix.push_back(toInsert);
//     }
//     matrix = helperMatrix;
// }

int main()
{

    return 0;
};