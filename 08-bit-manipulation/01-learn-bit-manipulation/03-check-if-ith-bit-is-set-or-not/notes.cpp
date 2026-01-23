#include <bits/stdc++.h>
using namespace std;

// 📍 check if nth bit is set or not
// - TC -> O(1)
// - SC -> O(1)
bool checkNthBit (int num, int n){
    // 📍 using left shift operator
    // num = 13, n = 2
    // 13 -> 1101
    // 2nd bit is 0
    // do 1 << 1 -> 10
    // do 1101 & 10
    // return ((num & (1 << n-1)) != 0);
    // 📍 using right shift operator
    // num = 13, n = 2
    // 13 -> 1101
    // 2nd bit is 0
    // do 13 >> 1 -> 110
    // do 110 & 1
    return (((num >> (n-1)) & 1) != 0);
};
int main()
{
    int num = 13;
    for(int n = 1; n<=4; n++){
        cout << "bit " << n << " is " << checkNthBit(num,n) << endl;
    };
    return 0;
};