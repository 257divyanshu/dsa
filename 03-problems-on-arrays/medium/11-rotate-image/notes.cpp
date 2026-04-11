#include <bits/stdc++.h>
using namespace std;

// 📍 sir's optimal approach
// - TC -> O(n*n) (precisely : O ( n * ( n+ 1 ) / 2 )
// - SC -> O(1)
void rotate(vector<vector<int>> &matrix){
    int n = matrix.size();
    // take transpose of the matrix
    // 📍 way 1
    // for(int i = 0; i<n; i++){
    //     for(int j = i; j<n; j++){
    //         swap(matrix[i][j], matrix[j][i]);
    //     }
    // }
    // 📍 way 2
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(j > i){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    // (DEBUG) print the matrix
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // reverse each row
    for(int i = 0; i<n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
    // (DEBUG) print the matrix
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// 📍 my second approach
// - it in in place (no extra space required)
// 📍 GPT's TC ANALYSIS
// - SC -> O(1) (Only one temp variable)
// - TC -> O(n^2)
// - Outer loop: runs n/2 times → O(n)
// - Inner loop: for each i, runs from i to n-1-i → roughly O(n) per layer
// 📍 MY TC ANALYSIS
// - SC -> O(1)
// - TC -> O(n^2)
// - on noting down the no. of iterations I found no. of iterations < n(n+1)/4
// void rotate(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     for (int i = 0; i < n / 2; i++) 
//     {
//         for (int j = i; j < n - 1 - i; j++)
//         {
//             int temp = matrix[n - 1 - j][i];
//             matrix[n - 1 - j][i] = matrix[n - 1 - i][n - 1 - j];
//             matrix[n - 1 - i][n - 1 - j] = matrix[j][n - 1 - i];
//             matrix[j][n - 1 - i] = matrix[i][j];
//             matrix[i][j] = temp;
//         }
//     }
// }

// 📍 my first approach (same as sir's brute-force approach)
// - TC -> O(n*n)
// - SC -> O(n*n)
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
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    // Output: {{7,4,1},{8,5,2},{9,6,3};
    return 0;
};