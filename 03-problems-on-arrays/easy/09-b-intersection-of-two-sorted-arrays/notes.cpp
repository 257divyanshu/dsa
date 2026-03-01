#include <bits/stdc++.h>
using namespace std;

// 📍 bruteforce approach
// - TC -> O(n1 * n2)
// - SC -> O(n2 + x) (x for storing the answer, and not for solving the problem)
// vector<int> intersectionOfTwoSortedArrays(vector<int> vect1, vector<int> vect2)
// {
//     vector<int> visited(vect2.size(), 0);
//     vector<int> resultantArray(0);
//     for(int i = 0; i < vect1.size(); i++){
//         for(int j = 0; j < vect2.size(); j++){
//             if((vect1[i] == vect2[j]) && visited[j]==0){
//                 resultantArray.push_back(vect1[i]);
//                 visited[j] = 1;
//                 break;
//             }
//             else if (vect1[i] < vect2[j]){
//                 break;
//             }
//         }
//     }
//     return resultantArray;
// }

// 📍 optimal approach
// - two pointer approach
// - TC -> O(n1 + n2)
// - TC's worst case scenario
//   - vect1 = {1,3,5,7,9,11}
//   - vect2 = {2,4,6,8,10,12}
// - SC -> O(n1 + n2) (for storing the result) (no space used for solving the problem)
vector<int> intersectionOfTwoSortedArrays(vector<int> vect1, vector<int> vect2){
    vector<int> resultantArray(0);
    int i = 0;
    int j = 0;
    while(i < vect1.size() && j < vect2.size()){
        if(vect1[i] < vect2[j]){
            i++;
        }
        else if (vect1[i] == vect2[j]){
            //
            // 📍 if interstion array should contain unique elements:
            // if(resultantArray.empty() || resultantArray.back() != vect1[i]){
            //     resultantArray.push_back(vect1[i]);
            // }
            // 📍 if intersection array should contain one representative of each pair
            resultantArray.push_back(vect1[i]);
            //
            j++;
            i++;
        }
        else{
            j++;
        }
    }
    return resultantArray;
};

int main()
{
    vector<int> vect1 = {1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> vect2 = {2, 3, 3, 5, 6, 6, 7};
    // result = {2,3,5,6}
    vector<int> result = intersectionOfTwoSortedArrays(vect1, vect2);
    for (auto elem : result)
    {
        cout << elem << " ";
    }
    cout << endl;
    return 0;
};