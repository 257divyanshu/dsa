#include <bits/stdc++.h>
using namespace std;

// 📍 approach 2
// - tc -> O(sqrt(n))
void printAllDivisors(int num)
{
    for (int i = 1; i*i <= num; i++)
    // ❔ which is better? i*i<=num or i<=sqrt(num) 
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

// 📍 approach 1
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