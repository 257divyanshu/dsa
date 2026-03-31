#include <bits/stdc++.h>
using namespace std;

bool allocatable(vector<int> &arr, int k, int mid)
{
    int currentAllocation = 0;
    int paintersAllocated = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (currentAllocation + arr[i] <= mid)
        {
            currentAllocation += arr[i];
        }
        else
        {
            currentAllocation = arr[i];
            paintersAllocated += 1;
        };
    };
    return paintersAllocated <= k;
}
int minTime(vector<int> &arr, int k)
{
    int start = 0;
    int end = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > start)
        {
            start = arr[i];
        };
        end += arr[i];
    };
    if (k > arr.size())
    {
        return start;
    };
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (allocatable(arr, k, mid))
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        };
    };
    return start;
}

int main()
{

    return 0;
};