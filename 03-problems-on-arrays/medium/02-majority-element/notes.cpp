#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int candidate = nums[0]; // set the first element has the default candidate
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (count == 0 && nums[i] != candidate)
        {
            candidate = nums[i];
        };
        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return candidate;
}
int main()
{
    // 📍 a nice testcase
    vector<int> vect = {2,2,1,1,1,2,2};
    return 0;
};