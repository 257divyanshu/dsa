#include <bits/stdc++.h>
using namespace std;

// 📍 swap two numbers without using any third variable
void swapNumbers(int &a, int &b){
    // 📍 intution
    // a = 2, b = 3
    // a = a ^ b = 2 ^ 3
    // b = a ^ b = 2 ^ 3 ^ 3 = 2
    // a = a ^ b = 2 ^ 3 ^ 2 = 3
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
};
int main()
{
    int a = 2, b = 3;
    cout << "a => " << a << ", b => " << b << endl;
    swapNumbers(a,b);
    cout << "a => " << a << ", b => " << b << endl;
    return 0;
};