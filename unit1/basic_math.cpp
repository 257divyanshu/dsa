#include <iostream>
#include <cmath>
using namespace std;

// TC OF GCD USNG EUCLIDIAN ALGORITHM
// is O(log(min(a,b))) // base phi

// GETTING DIVISORS
// one way is to loop from 1 to n, this will lead us to TC of O(n)
// another ways is to loop from 1 to sqrt(n), this will lead us to TC of O(sqrt(n)), in every iteration we will store the divisor and also it's partner divisor if the divisor and partner divisor aren't same

// COUNT DIGITS
// number of digits in n is (int)(log10(n)+1)
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     cout<<"number of digits in "<<n<<" is "<<(int)(log10(n)+1);
//     return 0;
// };