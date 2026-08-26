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