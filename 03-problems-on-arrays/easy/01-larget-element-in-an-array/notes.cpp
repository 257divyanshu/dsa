#include <bits/stdc++.h>
using namespace std;

// 📍 bruteforce approach
// - TC -> O(n * log(n))
// - SC -> O(log(n)) (due to sort())
// int largestElement (vector<int> vect){
//     sort(vect.begin(), vect.end());
//     return vect[vect.size() - 1];
// }

// 📍 optimal approach 
// - TC -> O(n)
// - SC -> O(1)
int largestElement (vector<int> vect){
    int largest = INT32_MIN;
    for(int i = 0; i < vect.size(); i++){
        if(largest > vect[i]){
            largest = vect[i];
        };
    };
    return largest;
}

int main()
{
    
    return 0;
};