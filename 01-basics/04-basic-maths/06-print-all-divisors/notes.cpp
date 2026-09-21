#include <bits/stdc++.h>
using namespace std;

// 📝 Approach 2 (square root optimization): Loop from 1 to √n — for each valid divisor i, print both i and n/i together (skip duplicate when i == n/i i.e. perfect square).

// 📍 approach 2 (square root optimization)
// - tc -> O(sqrt(n))
void printAllDivisors(int num)
{
    for (int i = 1; i*i <= num; i++)
    // ❔ which is better? i*i<=num or i<=sqrt(num) 
    // ✅ i*i <= num is better (it avoids floating point issues and is faster since sqrt() is called every iteration in the latter)
    {
        if (num % i == 0)
        {
            if(i != num/i){

                cout << i << " and " << num/i << " are divisors" << endl;
            }
            else{
                cout << i << " is a divisor" << endl;
            }
        }
    };
};

// 📝 Approach 1 (brute force): Loop from 1 to n, print i if it divides n.

// 📍 approach 1 (brute force)
// - tc -> O(n)
// void printAllDivisors(int num)
// {
//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << i << " is a divisor" << endl;
//         }
//     };
// };

int main()
{
    // printAllDivisors(0);
    // printAllDivisors(1);
    // printAllDivisors(2);
    // printAllDivisors(3);
    // printAllDivisors(4);
    // printAllDivisors(5);
    // printAllDivisors(9);
    printAllDivisors(36);
    return 0;
};