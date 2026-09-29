#include <bits/stdc++.h>
using namespace std;

// 📍 recursive approach
// 📝 Extract last digit via n % 10, add it to recursive call on n/10, base case at n == 0.
// - TC -> O(log(n))
// - SC -> O(log(n))
int sumOfDigits(int n){
    if(n == 0){
        return 0;
    }
    return (n%10) + sumOfDigits(n/10);
}

int main()
{
    cout << sumOfDigits(123) << endl;
    return 0;
};