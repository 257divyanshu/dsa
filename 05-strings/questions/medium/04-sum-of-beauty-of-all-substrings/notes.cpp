#include <bits/stdc++.h>
using namespace std;

int beautySum(string s)
{
    int totalBeauty = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        vector<int> freqHash(26, 0);
        for (int j = i; j < n; j++)
        {
            cout << "current substring : " << endl;
            cout << s.substr(i, j - i + 1) << endl;
            freqHash[s[j] - 'a']++;
            if ((j - i + 1) > 2)
            { // when substring.len > 2
                int largestFreq = -1;
                int smallestFreq = 501;
                for (int k = 0; k < 26; k++)
                {
                    if (freqHash[k])
                    {
                        cout << (char)(k + 'a') << " -> " << freqHash[k] << endl;
                        if (freqHash[k] > largestFreq)
                        {
                            largestFreq = freqHash[k];
                        };
                        if (freqHash[k] < smallestFreq)
                        {
                            smallestFreq = freqHash[k];
                        };
                    }
                }
                totalBeauty += (largestFreq - smallestFreq);
                cout << "adding " << largestFreq << " - " << smallestFreq << " = " << (largestFreq - smallestFreq) << endl;
                cout << endl;
            }
        }
    }
    return totalBeauty;
}

int main()
{
    string s = "aabcbaa";
    cout << "result : " << beautySum(s) << endl;
    return 0;
};