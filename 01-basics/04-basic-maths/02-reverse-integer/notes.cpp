#include <bits/stdc++.h>
using namespace std;
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