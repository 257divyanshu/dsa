// 📍 print numbers from N to 1 using backtracking

// 📍 print numbers from 1 to N using backtracking

// ⏸️ 14:30

// 📍 print numbers from N to 1
// - 📸 recursion tree : similar to that in image recursion-tree-01
// - TC -> O(n)
// - SC -> O(n) (stack space)
#include <bits/stdc++.h>
using namespace std;
void print1ToN(int n, int i)
{
    // 📍 my approach 1
    // if (i >= n)
    // {
    //     cout << "done" << endl;
    //     return;
    // };
    // cout << n-i << endl;
    // print1ToN(n, i+1);
    // 📍 my approach 2 (same as sir's approach)
    if (i <= 0)
    {
        cout << "done" << endl;
        return;
    };
    cout << i << endl;
    print1ToN(n, i-1);
    // 📍 my approach 3
    // if (i > n)
    // {
    //     return;
    // };
    // print1ToN(n, i+1);
    // cout << i << endl;
    // 📍 my approach 4
    // if (i > n)
    // {
    //     return;
    // };
    // print1ToN(n, i+1);
    // cout << i << endl;
};
int main()
{
    // 📍 my approach 1
    // print1ToN(5, 0);
    // 📍 my approach 2
    print1ToN(5, 5);
    // 📍 my approach 3
    // print1ToN(5, 1);
    // 📍 my approach 4
    // print1ToN(5, 1);
    return 0;
};

// 📍 print numbers from 1 to N
// - 📸 recursion tree : similar to that in image recursion-tree-01
// - TC -> O(n)
// - SC -> O(n) (stack space)
// #include <bits/stdc++.h>
// using namespace std;
// void print1ToN(int n, int i)
// {
//     if (i > n)
//     {
//         cout << "done" << endl;
//         return;
//     };
//     cout << i << endl;
//     print1ToN(n, i+1);
// };
// int main()
// {
//     print1ToN(5, 1);
//     return 0;
// };

// 📍 print name n times
// - 📸 see image recursion-tree-01
// - TC -> O(n)
// - SC -> O(n) (stack space)
// #include <bits/stdc++.h>
// using namespace std;
// void greetNTimes (int n, int i) {
//     if(i>n){
//         cout << "Radhe Radhe" << endl;
//         return;
//     };
//     cout << "Hare Krishna" << endl;
//     greetNTimes(n, i+1);
// }
// int main()
// {
//     greetNTimes(5, 1);
//     return 0;
// };

// - when a function is invoked, it enters the stack

// - its the base condition that prevents stack overflow

// 📍 RECURSION
// - a function calling itself until a specific condition is met