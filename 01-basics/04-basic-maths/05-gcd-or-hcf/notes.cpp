#include <bits/stdc++.h>
using namespace std;

// 📝 Approach 3 (Euclidean algorithm): Repeatedly replace the larger number with larger % smaller until one becomes 0 — the other is the GCD.

// 📍 approach 3 (euclidean algorithm)
// 📍 EUCLIDEAN ALGORITHM : 
// - gcd(x, y) => gcd(x-y, y) (if x > y)
// - if we use that, we'll have to do many iterations 
// - gcd(x, y) => gcd(x%y, y) (if x > y) 
// - if we use this, we'll have to do comparatively less iterations
// - tc -> O(logφ(min(a,b)))
int getGCD(int x, int y)
{
    while(x>0 && y>0){
        if(x > y){
            x = x % y;
        }
        else{
            y = y % x;
        };
    };
    if(x == 0){
        return y;
    };
    if(y == 0){
        return x;
    };
}

// 📝 Approach 2 (brute force optimized): Loop i from min(x,y) down to 1, return immediately when i divides both — skipping all smaller candidates entirely.

// 📍 approach 2 (brute force optimized)
// - tc -> O(min(x,y))
// - but still, its slightly better than approach 1
// int getGCD(int x, int y)
// {
//     if (x == 0 || y == 0)
//     {
//         return 0;
//     };
//     if(x == y){
//         return x;
//     };
//     if(x%y==0){
//         return y;
//     };
//     if(y%x==0){
//         return x;
//     };
//     int result = 1;
//     for (int i = min(x,y); i >= 1; i--)
//     {
//         if ((x % i == 0) && (y % i == 0))
//         {
//             result = i;
//             return result;
//         };
//     };
//     return result;
// }

// 📝 Approach 1 (brute force): Loop i from 2 to min(x,y), track the largest i that divides both.

// 📍 approach 1 (bruteforce)
// - tc -> O(min(x,y))
// int getGCD(int x, int y)
// {
//     if (x == 0 || y == 0)
//     {
//         return 0;
//     };
//     if(x == y){
//         return x;
//     };
//     if(x%y==0){
//         return y;
//     };
//     if(y%x==0){
//         return x;
//     };
//     int result = 1;
//     // 📍 version 1
//     // for (int i = 2; i <= x; i++)
//     // 📍 version 2
//     for (int i = 2; i <= min(x,y); i++)
//     {
//         if ((x % i == 0) && (y % i == 0))
//         {
//             result = i;
//         };
//     };
//     return result;
// }

int main()
{
    // int x = 0, y = 0;
    // int x = 0, y = 1;
    // int x = 1, y = 0;
    // int x = 1, y = 1;
    // int x = 1, y = 2;
    // int x = 2, y = 2;
    // int x = 2, y = 3;
    // int x = 3, y = 9;
    int x = 6, y = 9;
    cout << x << " and " << y << " -> " << getGCD(x, y) << endl;
    return 0;
};