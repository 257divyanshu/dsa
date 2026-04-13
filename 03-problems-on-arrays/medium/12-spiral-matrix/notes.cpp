#include <bits/stdc++.h>
using namespace std;

// 📍 my first approach ✔️
vector<int> spiralOrder(vector<vector<int>> &matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    int ai = 0;
    int aj = 0;
    int bi = m-1;
    int bj = n-1;
    vector<int> result = {};
    while(ai<=bi && aj<=bj && ai<m && bi>-1 && aj<n && bj>-1){
        cout << "ai = " << ai << "; aj = " << aj << "; bi = " << bi << "; bj = " << bj << endl;
        bool firstLoopWorked = false;
        bool secondLoopWorked = false;
        bool thirdLoopWorked = false;
        for(int y = aj; y<=bj; y++){
            firstLoopWorked = true;
            cout << "1 pushing " << matrix[ai][y] << endl;
            result.push_back(matrix[ai][y]);
        }
        if(firstLoopWorked){
            for(int x = ai+1; x<=bi; x++){
                secondLoopWorked = true;
                cout << "2 pushing " << matrix[x][bj] << endl;
                result.push_back(matrix[x][bj]);
            }
        }
        if(secondLoopWorked){
            for(int y = bj-1; y>=aj; y--){
                thirdLoopWorked = true;
                cout << "3 pushing " << matrix[bi][y] << endl;
                result.push_back(matrix[bi][y]);
            }
        }
        if(thirdLoopWorked){
            for(int x = bi-1; x>ai; x--){
                cout << "4 pushing " << matrix[x][aj] << endl;
                result.push_back(matrix[x][aj]);
            }
        }
        ai++;
        aj++;
        bi--;
        bj--;
    }
    return result;
}

// 📍 first wrong approach ❌
// vector<int> spiralOrder(vector<vector<int>> &matrix)
// {
//     int m = matrix.size();    // no of rows
//     int n = matrix[0].size(); // no of columns
//     int i = 0;
//     int j = 0;
//     int top = -1;
//     int right = n;
//     int bottom = m;
//     int left = -1;
//     vector<int> result = {};
//     bool moved = true;
//     while (moved)
//     {
//         moved = false;
//         while (j <= right - 1)
//         {
//             if (!moved)
//             {
//                 moved = true;
//             }
//             cout << "pushing matrix[" << i <<"][" << j << "] = " << matrix[i][j] << endl;
//             result.push_back(matrix[i][j]);
//             j++;
//         }
//         if (moved)
//         {
//             j--;
//             right--;
//             cout << "i = " << i << " j = " << j << endl;
//             continue;
//         }
//         while (i <= bottom - 1)
//         {
//             if (!moved)
//             {
//                 moved = true;
//             }
//             cout << "pushing matrix[" << i <<"][" << j << "] = " << matrix[i][j] << endl;
//             result.push_back(matrix[i][j]);
//             i++;
//         }
//         if (moved)
//         {
//             i--;
//             bottom--;
//             cout << "i = " << i << " j = " << j << endl;
//             continue;
//         }
//         while (j >= left + 1)
//         {
//             if (!moved)
//             {
//                 moved = true;
//             }
//             cout << "pushing matrix[" << i <<"][" << j << "] = " << matrix[i][j] << endl;
//             result.push_back(matrix[i][j]);
//             j--;
//         }
//         if (moved)
//         {
//             j++;
//             left++;
//             cout << "i = " << i << " j = " << j << endl;
//             continue;
//         }
//         while (i >= top + 1)
//         {
//             if (!moved)
//             {
//                 moved = true;
//             }
//             cout << "pushing matrix[" << i <<"][" << j << "] = " << matrix[i][j] << endl;
//             result.push_back(matrix[i][j]);
//             i--;
//         }
//         if (moved)
//         {
//             i++;
//             top++;
//             cout << "i = " << i << " j = " << j << endl;
//             continue;
//         }
//     }
//     return result;
// }

int main()
{
    // 📍 tc1 (m = n)
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    
    // 📍 tc2 (n = m+1)
    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    // 📍 tc3 (m = n+1)
    // vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    
    // 📍 tc4 (n = m+2)
    // vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8}};

    // 📍 tc4 (m = n+2)
    // vector<vector<int>> matrix = {{1,2},{3,4},{5,6},{7,8}};
    
    vector<int> result = spiralOrder(matrix);
    cout << endl;
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;
    return 0;
};