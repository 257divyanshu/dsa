#include <bits/stdc++.h>
using namespace std;
string frequencySort(string s)
{
    int n = s.length();
    multimap<int,char> hashmap;
    sort(s.begin(), s.end()); // TC O(n * log(n))
    int i = 1;
    int counter = 1;
    while(i < n){ // TC O(n)
        if(s[i] != s[i-1]){
            hashmap.emplace(counter,s[i-1]); // total TC O(n * log(m))
            counter = 1;
        }
        else{
            counter++;
        }
        i++;
    }
    hashmap.emplace(counter, s[n-1]); // TC O(log(m))
    string result;
    result.reserve(s.length());
    for (auto it = hashmap.rbegin(); it != hashmap.rend(); ++it) { // O(m)
        for(int i = 0; i<(it->first); i++){ // total TC O(n)
            result.push_back(it->second);
        }
    }
    return result;
}
int main()
{

    return 0;
};