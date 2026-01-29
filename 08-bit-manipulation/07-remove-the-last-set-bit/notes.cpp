#include <bits/stdc++.h>
using namespace std;

void removeLastSetBit(int &num){
    // e.g. num is 12
    // - 12 -> 1100b
    // - on unsetting the last set bit, we get 1000b
    // - 1000b -> 8
    num = num & (num-1);
    // 📝 OBSERVATION
    // - when we move from n to n-1
    // - all the bits upto and including the first set bit from the right get toggled
};

int main()
{
    
    return 0;
};