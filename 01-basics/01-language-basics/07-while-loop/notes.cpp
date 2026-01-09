// 📍 demonstration
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (n < 0)
    {
        cout << "We expect a non-negative value." << endl;
    }
    else
    {
        int i = 1;
        int prod = 1;
        while (i <= n)
        {
            prod *= i;
            i++;
        };
        cout << n << "! = " << prod << endl;
    }
    return 0;
};

// 📍 while loop
// - A while loop is a control structure in programming that repeatedly executes a block of code as long as a specified condition remains true. A "while" loop will not execute the code at all if the initial condition is false.