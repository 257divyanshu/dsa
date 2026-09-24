// 🔗 https://leetcode.com/problems/count-primes/description/

#include <bits/stdc++.h>
using namespace std;

// 📝 optimal approach (sieve of eratosthenes)
// Time complexity: O(n(log(log(n)))
// Space complexity: O(n)
int countPrimes(int n)
{
    if (n < 2)
        return 0;
    vector<char> is_prime(n, 1);
    is_prime[0] = 0;
    is_prime[1] = 0;
    int prime_count = n - 2;
    for (int i = 2; i * i < n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                if (is_prime[j])
                {
                    is_prime[j] = 0;
                    prime_count--;
                }
            }
        }
    }
    return prime_count;
}

// 📍 optimal approach

// 📝 better approach: For each number from 2 to n-1, check if it's prime by trial dividing only up to √i

// 📍 better approach
int countPrimes(int n)
{
    int prime_count = 0;
    for (int i = 2; i < n; i++)
    {
        bool is_prime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            prime_count++;
        }
    }
    return prime_count;
}

// 📝 brute force approach: For each number from 2 to n-1, check if it's prime by trial dividing up to i-1

// 📍 brute force approach
// tc -> O(n^2)
// sc -> O(1)
int countPrimes(int n)
{
    int prime_count = 0;
    for (int i = 2; i < n; i++)
    {
        bool is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            prime_count++;
        }
    }
    return prime_count;
}

int main()
{

    return 0;
};