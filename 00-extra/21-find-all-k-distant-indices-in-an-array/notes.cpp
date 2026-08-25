// QUESTION NO 2200

// came up with one approach
// - TC -> O(n^2)
//   - Outer loop: O(n)
//   - If many elements equal key, the inner loop can iterate up to O(n) for each one.
// - SC -> O(n) (including the output array)