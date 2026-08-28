// QUESTION NO 2351

// 📍 first approach I came up with:
// - used an additional data structure set
// - to check for the first character that appears twice
// - TC -> O(n * log(n)) 
// - SC -> O(n)

// 📍 second approach I came up with:
// - optimized TC by using unordered_set instead of set
// - we aren't concerned with the order of elements in the set, so there's no issue in going with unordered_set
// - TC -> O(n) 
// - SC -> O(n)

// 📍 optimal approach
// - used the constraint that the string contains only lowercase letters
// - used a fixed-length array for keeping track of frequency of the characters

// 📍 lessons from this question:
// - before moving on to optimizing using hints, go through the constraints once again
// - constraints might direct us to a more better/optimal approach

// - the refined version optimal approach uses return '\0' at the end, it is just a fallback

// 🔬 notes
// - '\0' is the null character in C++.
// - Its ASCII value is 0.
// - It is commonly used to represent "no character" or the end of a C-style string.