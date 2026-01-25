#include <bits/stdc++.h>
using namespace std;

// 📍 set the nth bit
void setNthBit(int &num, int n){
    // e.g. set 3rd bit of 9
    // - 9 -> 1001b
    // - after setting 3rd bit of 9, we'll get 1101
    // - 1 << (2) -> 100b
    // - do 1001b | 100b
    // - result 1101b -> 13 
    num | (1 << (n-1));
}

int main()
{
    
    return 0;
};