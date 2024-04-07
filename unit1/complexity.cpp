#include <iostream>
using namespace std;
int main()
{
     cout<<"Mission Placement"<<endl;
     return 0;
};


// MODERN SERVERS
// can do 10^8 operations in 1s

// EXAMPLE 3
// given a and b
// find its sum
// int c = a+b; // is ok
// b = a+b; // is not ok
// never manipulate the data untill asked to 

// EXAMPLE 2
// if for solving a problem we make an array of size n, then the space complexity of out program will O(n)

// EXAMPLE 1
// int main()
// {
//      int a;
//      int b;
//      cin>>a;
//      cin>>b;
//      int c = a+b;
//      return 0;
// };
// the memory used by c is the auxiliary space (extra space used to solve the problem)
// a and b are the input space which are used to store the inputs

// SPACE COMPLEXITY
// the amount of space taken by a program to run is not the space complexity
// the rate at with the space taken by a program increases wrt to the input is the space complexity
// here also we will use the big oh notation
// total space = auxiliary space + input space
// auxiliaty space is the space that we take to solve the problem
// input space is the space that we take to store the inputs

// EXAMPLE 3
// int main()
// {
//      int n = 10;
//      for(int i = 0; i<n; i++)
//      {
//           for(int j = 0; j<i; j++)
//           {
//                // code
//           };
//      };
//      return 0;
// };
// for 0 -> 1
// for 1 -> 2
// for 2 -> 3
// for n-1 -> n
// 1 + 2 + 3 .... n
// = (n(n+1))2 
// = O(n^2)

// EXAMPLE 2
// int main()
// {
//      int n = 10;
//      for(int i = 0; i<n; i++)
//      {
//           for(int j = 0; j<n; j++)
//           {
//                // code
//           };
//      };
//      return 0;
// };
// TC is O(n^2)

// FINALIZING THE TC
// O(4n^3 + 3n^2 + 8) -> O(n^3)
// 

// THE THREE CASES
// BEST CASE (omega notation) (lower bound)
// AVERAGE CASE (theta notation)
// WORST CASE (big o notation) (upper bound)
// we want our program to handle the worst cases

// EXAMPLE 1
// int main()
// {
//      int n = 10;
//      for(int i = 0; i<=n; i++)
//      {
//           cout<<"Chinu is placed"<<endl;
//      };
//      return 0;
// };
// for every iteration 3 operations are being done: increment check print
// so TC comes out to be O(3n)
// we will ignore 3 so TC is O(n)

// RULES FOR ANALYZING TC
// analyze for worst case scenario only
// avoid constants
// avoid lower values

// INTRODUCTION
// complexity is a way to judge code
// time taken by a program to run isn't it's time complexity
// because the time taken by a program to run is dependent on the machine in which we are running the program
// the rate at which time taken increases wrt input size is caled time complexity
// Big Oh notation is used for analyzing the TC of a program