#include <bits/stdc++.h>
using namespace std;

void toggleNthBit(int &num, int n){
    // e.g. toggle the 3rd bit of 13
    // - 13 -> 1101b
    // - 3rd bit of 13 is 1
    // - after toggling the 3rd bit of 13, the result will be 1001b
    // - 1001b -> 9
    num = num ^ (1 << n-1);
};

int main()
{
    
    return 0;
};