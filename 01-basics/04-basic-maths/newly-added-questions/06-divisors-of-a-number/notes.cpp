#include <bits/stdc++.h>
using namespace std;

// 🏆 third approach

// - Second and third have the same TC — O(sqrt(n) * log(n)). Third is better in practice, because it avoids the overhead of a set (no tree allocations, better cache behavior).

// 📝 third approach: Loop to √n, collect both i and n/i into a vector, sort at the end — avoids set overhead.

// 📍 third approach
// - TC -> O(sqrt(n) + sqrt(n)*log(sqrt(n)))
// -    -> O(sqrt(n) + sqrt(n)*(log(n)/2))
// -    -> O(sqrt(n) + sqrt(n)*log(n))
// -    -> O(sqrt(n)*log(n))
// - SC -> O(sqrt(n))
vector<int> divisors(int n)
{
    vector<int> result;
    for (int i = 1; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            if(i == n/i){
                result.push_back(i);
            }
            else{
                result.push_back(i);
                result.push_back(n/i);
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}

// 📝 second approach: Loop to √n, collect both i and n/i into a set (handles duplicates automatically, stays sorted).

// 📍 second approach
// - TC -> O(sqrt(n)*log(sqrt(n)) + sqrt(n))
// -    -> O(sqrt(n)*(log(n)/2) + sqrt(n))
// -    -> O(sqrt(n)*log(n) + sqrt(n))
// -    -> O(sqrt(n)*log(n))
// - SC -> O(sqrt(n)) (O(2 * sqrt(n))) precisely)
vector<int> divisors(int n)
{
    vector<int> resultVector;
    set<int> resultSet;
    for (int i = 1; i*i <= n; i++)
    {
        if(n%i == 0){
            if(i == n/i){
                resultSet.insert(i);
            }
            else{
                resultSet.insert(i);
                resultSet.insert(n/i);
            }
        }
    }
    for(auto elem: resultSet){
        resultVector.push_back(elem);
    }
    return resultVector;
}

// 📝 first approach: Loop from 1 to n, collect every i that divides n.

// 📍 first approach
// - TC -> O(n)
// - SC -> O(sqrt(n)) 
vector<int> divisors(int n)
{
    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            result.push_back(i);
        }
    }
    return result;
}

// - assuming that no of divisors for an integer n = sqrt(n)
int main()
{

    return 0;
};