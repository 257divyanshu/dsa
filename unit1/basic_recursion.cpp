#include <iostream>
using namespace std;

// FUNCTIONAL
int sum(int n)
{
    cout<<"n is "<<n<<endl;
    if(n!=1)
    {
        return n+sum(n-1);
    }
    return 1;
};
int main()
{
    int n = 4;
    cout<<sum(n)<<endl;
    return 0;
};

// PARAMETERIZED RECURSION
// void sum(int i , int total)
// {
//     if(i>=1)
//     {
//         total+=i;
//         sum(i-1, total);
//     }
//     else
//     {
//         cout<<total<<endl;
//     };
// };
// int main()
// {
//     int n = 5;
//     sum(n,0);
//     return 0;
// };

// EXAMPLE
// void printer(int n, int i)
// {
//     if(n!=i) // base conditions
//     {
//         cout<<i<<endl;
//         printer(n,i+1);
//     };
// };
// int main()
// {
//     int n = 4;
//     printer(n,1);
//     return 0;
// };

// RECURSION
// when a function calls itself until a specified condition is met
// int main()
// {
//     cout<<"Mission Placement"<<endl;
//     return 0;
// };