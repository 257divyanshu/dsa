#include <bits/stdc++.h>
using namespace std;

// 📍 complexity analysis
// - TC -> O(log2(n))
// - SC -> O(1)

// 📍 similar to the previous problem (FIND THE FIRST AND LAST OCCURRENCE OF A GIVEN NUMBER IN A SORTED ARRAY)
// - just find the last occurrence and the first occurrence, and then return, lastOccurrence - firstOccurrence + 1

int leftMostOccurence(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int leftMostIndex = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else if (nums[mid] == target)
        {
            leftMostIndex = mid;
            end = mid - 1;
        }
        else
        {
            end = mid - 1;
        };
    };
    return leftMostIndex;
};

int rightMostOccurence(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int rightMostIndex = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else if (nums[mid] == target)
        {
            rightMostIndex = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        };
    };
    return rightMostIndex;
};

int countOccurrences(vector<int> vect, int target){
    int leftMostIndex = leftMostOccurence(vect, target);
    if(leftMostIndex == -1){
        return 0;
    };
    int rightMostIndex = rightMostOccurence(vect, target);
    return (rightMostIndex - leftMostIndex + 1);
};

int main()
{
    
    return 0;
};