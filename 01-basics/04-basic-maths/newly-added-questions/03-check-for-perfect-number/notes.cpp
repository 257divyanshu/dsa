#include <bits/stdc++.h>
using namespace std;

// 📝 optimal approach: Sum divisors in pairs up to √n — include i always, include num/i only when i != 1 and i != num/i.

// 📍 optimal approach
bool checkPerfectNumber(int num)
{
    if (num == 1)
        return false;
    int sum_of_positive_divisors = 0;
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            sum_of_positive_divisors += i;
            if (i != 1 && (i != num / i))
            {
                sum_of_positive_divisors += (num / i);
            }
        }
    }
    return num == sum_of_positive_divisors;
}

// 📝 brute force approach: Sum all numbers from 1 to n-1 that divide n, check if sum equals n

// 📍 brute force approach
// - TC -> O(num)
// - SC -> O(1)
bool checkPerfectNumber(int num)
{
    int sum_of_positive_divisors = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum_of_positive_divisors += i;
        }
    }
    return num == sum_of_positive_divisors;
}

int main()
{

    return 0;
};