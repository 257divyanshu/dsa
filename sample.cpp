#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool isPalindrome(string s)
{
  int n = s.length();
  cout<<"n is "<<n<<endl;
  vector<char> str(0);
  for (int i = 0; i < n; i++)
  {
    cout<<"i is "<<i<<endl;
    cout<<"s[i] is "<<s[i]<<endl;
    if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
    {
      cout<<"inside first"<<endl;
      str.push_back(s[i]);
    };
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
      cout<<"inside second"<<endl;
      str.push_back(s[i] + 32);
    };
  };
  int m = str.size();
  vector<char> newStr(str);
  reverse(newStr.begin(), newStr.end());
  for(int i = 0; i<m; i++)
  {
    cout<<str[i]<<" ";
  };
  cout<<endl;
  for(int i = 0; i<m; i++)
  {
    cout<<newStr[i]<<" ";
  };
  cout<<endl;
  return str == newStr;
};
int main()
{
  string str = "A man, a plan, a canal: Panama";
  cout<<isPalindrome(str)<<endl;
  return 0;
};