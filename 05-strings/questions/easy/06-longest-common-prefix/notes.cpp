#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    int shortestStringIndex = 0;
    for(int i = 0; i<strs.size(); i++){ // TC O(n)
        if(strs[i].length() < strs[shortestStringIndex].length()){
            shortestStringIndex = i;
        }        
    }
    string lcp = strs[shortestStringIndex]; // SC O(200)
    for(int i = 0; i<strs.size(); i++){ // TC O(n)
        int j = 0;
        int k = 0;
        while(k < lcp.length()){ // TC O(200)
            if(strs[i][j] == lcp[k]){
                k++;
            }
            else{
                lcp = lcp.substr(0,k); // this operation happens once inside the while loop, that means this operation happens once for a str in strs
                break;
            }
            j++;
        }
    }
    return lcp;
}
int main()
{
    // string lcp;
    // lcp.reserve(10);
    // cout << lcp.length() << endl;
    return 0;
};