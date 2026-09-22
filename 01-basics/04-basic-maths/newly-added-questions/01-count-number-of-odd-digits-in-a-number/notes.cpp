#include <bits/stdc++.h>
using namespace std;

// 📝 Extract each digit via n % 10, check if it's odd using digit & 1, count and divide

int countOddDigit(int n) {
    int odd_digit_count = 0;
    while(n != 0){
        int digit = n%10;
        if(digit & 1){
            odd_digit_count++;
        }
        n/=10;
    }
    return odd_digit_count;
}

int main()
{
    
    return 0;
};