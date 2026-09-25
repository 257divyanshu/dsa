// 🔗 https://leetcode.com/problems/count-primes/description/

#include <bits/stdc++.h>
using namespace std;

// 🔗 read this solution's explanation: https://leetcode.com/problems/count-primes/solutions/8535128/sieve-of-eratosthenes-tle-fixed-proper-e-7b9p
// - to understand 'Why Vector bool Approach Fails?'

// 📝 optimal approach (sieve of eratosthenes)
// Time complexity: O(n(log(log(n)))
// - This is almost linear. The inner loop does not run n times for every number; it runs n/2 times for 2, n/3 times for 3, n/5 times for 5, and so on. The harmonic series of primes grows extremely slowly, making it incredibly fast.
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
// tc -> O(n^sqrt(n))
// sc -> O(1)
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