// QUESTION NO 2200

// came up with one approach
// - TC -> O(n^2)
//   - Outer loop: O(n)
//   - If many elements equal key, the inner loop can iterate up to O(n) for each one.
// - SC -> O(n) (including the output array)

// 📍 time complexity of 
// - push_back() -> O(1) (ammortized)
// - pop_back() -> O(1)
// - pop_front() -> O(n)

// - couldn't come up with a better approach, even after hints

// 📍 studied the better approach
// - it involves "preprocessing + binary search"
// - couldn't think that the solution might involve "binary search"
// - TC -> O(n * log(n)) 
// - SC -> O(n)

// 📍 better approach logic:
// - First, I preprocess the array by storing all indices where nums[i] == key; these indices are sorted. Then, for each index i, I use lower_bound and upper_bound to check whether there is any key index within the range [i-k, i+k]. This takes O(n log n) time and O(n) space.

// 📍 optimal approach logic:
// - For each index i, I maintain a pointer j to the first occurrence of key that is not before i-k. Since both i and j only move forward, j never needs to move backward. If this j is also within i+k, then i is a k-distant index. This gives us O(n) time and O(1) auxiliary space.