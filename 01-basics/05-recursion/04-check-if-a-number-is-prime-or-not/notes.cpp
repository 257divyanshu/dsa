#include <bits/stdc++.h>
using namespace std;

// 📍 recursive solution
// 📝 Recurse from i = 2, return false if n % i == 0, return true when i*i > n
// - TC -> O(sqrt(n))
// - SC -> O(sqrt(n))
bool isPrime(int n, int i){
    if(n<2){
        return false;
    }
    if(i * i > n){
        return true;
    }
    if(n%i == 0){
        return false;
    }
    return isPrime(n, i+1);
}

int main()
{
    for(int i = 1; i<=100; i++){
        if(isPrime(i,2)){
            cout << i << ", ";
        }
    }
    return 0;
};