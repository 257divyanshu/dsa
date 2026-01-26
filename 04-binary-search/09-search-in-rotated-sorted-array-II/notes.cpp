#include <bits/stdc++.h>
using namespace std;

// 📍 INTUTION
// - the question is similar to the previous one SEARCH IN ROTATED SORTED 1
// - the previous question has unique elements, but this question has duplicate elements as well
// - the logic of the previous question can be used here
// - the only case which needs to be handled explicitly is nums[start] == nums[mid] && nums[mid] == nums[end]
// - because when nums[start] == nums[mid] && nums[mid] == nums[end], we cannot find which part is sorted
// - see 📸 image01-edge-case.png

// 📍 bug encountered while solving (LEARNT AFTER WRONG SUBMISSION ON LEETCODE)
// - if we do explicit handling for nums[start] == nums[end], then cases like [1,2,1] will fail

// 📍 optimal approach
// - TC -> O(log2(n)) (average case)
// - TC -> O(n/2) (worst case)
// - SC -> O(1)
bool search(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            return true;
        };
        cout << "s -> " << start << " , e -> " << end << ", m -> " << mid << endl;

        // 📍 wrong logic
        // if (nums[start] == nums[mid] && nums[mid] == nums[end])
        // {
        //     start++;
        //     end--;
        //     cout << "trimming down" << endl;
        //     cout << "s -> " << start << " , e -> " << end << ", m -> " << mid << endl;
        // };
        // if (nums[start] <= nums[mid])

        // 📍 right logic
        if (nums[start] == nums[mid] && nums[mid] == nums[end])
        {
            start++;
            end--;
            cout << "trimming down" << endl;
            cout << "s -> " << start << " , e -> " << end << ", m -> " << mid << endl;
        }
        else if (nums[start] <= nums[mid])

        { // left part is sorted
            cout << "left part is sorted" << endl;
            if (nums[start] <= target &&
                target < nums[mid])
            { // target is in the sorted left part
                end = mid - 1;
            }
            else
            { // target is not in the sorted left part
                start = mid + 1;
            };
        }
        else
        { // right part is sorted
            cout << "right part is sorted" << endl;
            if (nums[mid] < target &&
                target <= nums[end])
            { // target is in the sorted right part
                cout << "nums[end] -> " << nums[end] << endl;
                cout << "target is in the sorted right part" << endl;
                start = mid + 1;
            }
            else
            { // target is not in the sorted right part
                cout << "target is not in the sorted right part" << endl;
                end = mid - 1;
            };
        };
    };
    cout << "s -> " << start << " , e -> " << end << endl;

    return false;
};

// 📍 my first approach
// - TC -> O(n + log2(n))
// - SC -> O(1)
// int minimumElementIndex(vector<int> &nums)
// {
//     int index = 0;
//     for (int i = 0; i < nums.size() - 1; i++)
//     {
//         if (nums[i] > nums[i + 1])
//         {
//             index = i + 1;
//         }
//     };
//     return index;
// }
// bool search(vector<int> &nums, int target)
// {
//     int minIndex = minimumElementIndex(nums);
//     return binary_search(nums.begin() + minIndex, nums.end(), target) || binary_search(nums.begin(), nums.begin() + minIndex, target);
// };

int main()
{
    vector<int> nums = {2, 5, 6, 0, 0, 1, 2};
    int target = 3;
    cout << search(nums, target) << endl;
    return 0;
};