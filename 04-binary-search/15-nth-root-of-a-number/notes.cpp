#include <bits/stdc++.h>
using namespace std;

// 📍 QUESTION
// - find nth root of a number
// - n = 3; m = 27; answer = 3
// - n = 4; m = 69; answer = -1 (2^4 = 16 and 3^4 = 81)
// 📍 CONSTRAINTS
// 1 <= N <= 30
// 1 <= M <= 10^9

// 📝 NOTE
// - this question comes under the BINARY SEARCH ON ANSWERS concept
// - the trick in BINARY SEARCH ON ANSWERS is : assign the 'lowest possible answer' to start and 'highest possible answer' to end

// 📍 optimal approach
// - TC -> O(log2(m) * n) (if not using power exponentiation)
// - TC -> O(log2(m) * log2(n)) (if using power exponentiation)
// 📍 way 2 (prevents overflow)
int func (int mid, int n, int m){
    long long product = 1;
    for(int i = 1; i<=n; i++){
        product *= m;
        if(product > m){
            return 1; // by returnnig 1 here, we prevent redundant calculation (which would otherwise be done) (there's no point of calculating the value of i*n, if (while doing that calculation) we encounter a number that is greater than m)
        };
    };
    if(product == m){
        return 0;
    };
    return -1;
}
int nthRoot(int n, int m){
    int start = 0;
    int end = m;
    while(start <= end){
        int mid = start + (end - start) / 2;
        int value = func(mid, n, m);
        if(value == 0){
            return value;
        }
        else if (value == -1){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        };
    };
    return -1;
};
// 📍 way 1 (causes overflow error)
// 📍 reason for overflow error
// - calculating customPowers(mid, n) might return an answer that can cause overflow error
// int customPower(int a, int b){
//     int result = 1;
//     for(int i = 1; i <= b; i++){
//         result *= a;
//     };
//     return result;
// };
// int nthRoot(int n, int m){
//     int start = 0;
//     int end = m;
//     while(start <= end){
//         int mid = start + (end - start) / 2;
//         int value = customPower(mid, n);
//         if(value == m){
//             return value;
//         }
//         else if (value < m){
//             start = mid + 1;
//         }
//         else{
//             end = mid - 1;
//         };
//     };
//     return -1;
// };

// 📍 sir's linear search approach
// TC -> O(m * n) (if not using power exponentiation)
// TC -> O(m * log2(n)) (if using power exponentiation)
// int customPower(int a, int b){
//     int result = 1;
//     for(int i = 1; i <= b; i++){
//         result *= a;
//     };
//     return result;
// };
// int nthRoot(int n, int m){
//     for(int i = 0; i <= m; i++){
//         int result = customPower(i,n);
//         if(result == m){
//             return i;
//         }
//         else if (result > m){
//             break;
//         };
//     };
//     return -1;
// };

// 📍 my approach 1
// int nthRoot(int n, int m){
//     return (int)(pow(m,1/n));
// };

int main()
{
    
    return 0;
};