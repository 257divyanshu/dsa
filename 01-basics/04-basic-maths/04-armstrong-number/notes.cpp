// NOTE : the concept of ARMSTRONG numbers is not applied to negative numbers

// 🏆 approach 2

#include <bits/stdc++.h>
using namespace std;
// 📍 approach 3 (next level optimization) (optional)
// TC -> O(log10(n))
// SC -> O(1)
int power(int base, int exp)
{
    int answer = 1;
    for (int i = 1; i <= exp; i++)
    {
        answer *= base;
    }
    return answer;
}
bool isArmstrong(int n)
{
    int digitCount = 0;
    int sumOfPowers = 0;
    int temp = n;
    // Step 1: Count digits
    do
    {
        digitCount++;
        temp /= 10;
    }while (temp != 0);
    cout<<"digitCount -> "<<digitCount<<endl;
    // Reset temp to n to process digits again
    temp = n;
    // Step 2: Pre-compute powers for digits 0-9
    int powers[10];
    for(int i = 0; i<10; i++){
        powers[i] = power(i,digitCount);
    }
    // Step 3: Calculate Sum of powers using the pre-computed array
    while (temp != 0)
    {
        int lastDigit = temp % 10;
        sumOfPowers += powers[lastDigit];
        temp /= 10;
    }
    return sumOfPowers == n;
}

// 📍 approach 2 (using integer math for calculating power)
// TC -> O ( ( log10 ( n ) ) ^ 2 )
// SC -> O(1)
// int power(int base, int exp)
// {
//     int answer = 1;
//     for (int i = 1; i <= exp; i++)
//     {
//         answer *= base;
//     };
//     return answer;
// }
// bool isArmstrong(int n)
// {
//     int digitCount = 0;
//     int sumOfPowers = 0;
//     int temp = n;
//     // Step 1: Count digits
//     do
//     {
//         digitCount++;
//         temp /= 10;
//     }while (temp != 0);
//     // Reset temp to n to process digits again
//     temp = n;
//     // Step 2: Calculate Sum of powers
//     while (temp != 0)
//     {
//         int lastDigit = temp % 10;
//         sumOfPowers += power(lastDigit, digitCount);
//         temp /= 10;
//     };
//     return sumOfPowers == n;
// }

// 📍 approach 1 (using pow)
// TC -> un-analyzed
// SC -> O(1)
// bool isArmstrong (int n){
//     int digitCount = 0;
//     int sumOfPowers = 0;
//     int m = n;
//     do{
//         digitCount++;
//         m/=10;
//     }while(m!=0);
//     m = n;
//     while(m!=0){
//         int lastDigit = m%10;
//         sumOfPowers += round(pow(lastDigit,digitCount));
//         m/=10;
//     };
//     return sumOfPowers == n;
// }

int main()
{
    for (int i = 0; i <= 0; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << endl;
        };
    };
    return 0;
};