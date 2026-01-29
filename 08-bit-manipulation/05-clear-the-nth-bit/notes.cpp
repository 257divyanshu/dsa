#include <bits/stdc++.h>
using namespace std;

// 📍 clear the nth bit
void clearNthBit(int &num, int n){
    // e.g. clear 3rd bit of 13
    // - 13 -> 1101b
    // - after clearing 3rd bit of 13, we'll get 1001
    // - 1001b -> 9
    // 📍 my approach
    // num = ~((~num) | (1 << n-1));
    // 📍 sir's approach
    num = num & ~(1 << n-1);
}

int main()
{
    
    return 0;
};