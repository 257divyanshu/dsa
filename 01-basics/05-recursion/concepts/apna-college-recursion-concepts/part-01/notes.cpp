#include <bits/stdc++.h>
using namespace std;

// finding time complexity using recurrence relation is more mathematical way
// also, its not always possible to find the recurrence relation for a question
// so, generally time complexity is calculated using the formula Total Time Complexity = Total No. of Recursive Calls * Work in each call

// - space complexity of the factorial calculation code is O(n)

// 📍 space complexity discussion for recusion
// - the call stack frames present in the call stack occupy memory
// - Total SC = depth of recursion tree * memory occupied in each call
// - or
// - Total SC = height of callstack * memory occupied in each call

// 📍 calculate factorial of a number
// TC -> O(n) see : 📸 image-02-factorial.png and image-03-factorial.png
int factorial (int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

// in memory we have a call stack
// it stores the data of functions that are invoked
// for the printNto1(4) function call, call stack looks like this
// - printNto1(int n = 0) // base case // returns without printing
// - printNto1(int n = 1) // prints 1 // calls printNto1(0)
// - printNto1(int n = 2) // prints 2 // calls printNto1(1)
// - printNto1(int n = 3) // prints 3 // calls printNto1(2)
// - printNto1(int n = 4) // prints 4 // calls printNto1(3)
// - main()

// 📍 print n to 1 using recursion
// TC -> O(n) see : 📸 image-01-printNto1.png
void printNto1(int n){
    if(n <= 0){
        return;
    }
    cout << n << " ";
    printNto1(n-1);
}

// recursion happens when a function calls itself
// tasks that can be accomplished using loops can also be accomplished using recursion 
// for some tasks loops are preferred and for some tasks recursion is preferred

int main()
{

    // printNto1(5);
    // printNto1(1);
    // printNto1(0);
    printNto1(-1);

    return 0;
};