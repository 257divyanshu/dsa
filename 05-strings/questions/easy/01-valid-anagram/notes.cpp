#include <bits/stdc++.h>
using namespace std;

// 📍 my first approach ✔️
bool isAnagram(string s, string t)
{
    unordered_map<char, int> mapS;
    unordered_map<char, int> mapT;
    for (char character : s)
    {
        mapS[character]++;
    };
    for (char character : t)
    {
        mapT[character]++;
    };
    if (s.length() > t.length())
    {
        for (const auto &pair : mapS)
        {
            if (pair.second != mapT[pair.first])
            {
                return false;
            }
        }
    }
    else
    {
        for (const auto &pair : mapT)
        {
            if (pair.second != mapS[pair.first])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    return 0;
};