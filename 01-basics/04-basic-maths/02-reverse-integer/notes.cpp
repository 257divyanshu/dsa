#include <bits/stdc++.h>
using namespace std;
// 📍 intution for handling the edge case when reversing x causes the value to go outside the signed 32-bit integer range
// - inside the while loop code block:
// reversedNumber = reversedNumber * 10 + lastDigit;
// - is the statement where we are updating reversedNumber's value
// - two operations are being performed in this statement
// - one is addition (of the lastDigit)
// - second is multiplication (of 10 with the reversedNumber)
// - out of these two operations, the second operation (reversedNumber * 10) is the one that can cause the value to go outisde the signed 32-bit integer range
// - so before we perform the (reversedNumber * 10) operation, we need to check if doing so causes the value to go outisde the signed 32-bit integer range
// - if doing so causes the value to go outisde the signed 32-bit integer range, we should return 0 (because the question demands so) 
// 📍 approach 
// - TC -> O(log10(n))
// - SC -> O(1)
int reverseInteger(int x)
{
    int reversedNumber = 0;
    while (x != 0)
    {
        int lastDigit = x % 10;
        if (reversedNumber > INT_MAX / 10 || reversedNumber < INT_MIN / 10)
        {
            return 0;
        };
        reversedNumber = reversedNumber * 10 + lastDigit;
        x /= 10;
    };
    return reversedNumber;
}
int main()
{
    cout<<reverseInteger(0)<<endl;
    cout<<reverseInteger(-1)<<endl;
    cout<<reverseInteger(1)<<endl;
    cout<<reverseInteger(1234)<<endl;
    cout<<reverseInteger(-1234)<<endl;
    cout<<reverseInteger(-2147483648)<<endl; // 0
    cout<<reverseInteger(2147483647)<<endl; // 0
    return 0;
};