// QUESTION NO 2441

// - to get the last element of a set
// - use *s.rbegin() or *prev(s.end())

// 📍 brute-force approach
// - used nested loops 
// - for every num in nums, find out the additive inverse of num, maintain a record of the maximum num whose additive inverse exists
// - TC -> O(n^2)
// - SC -> O(1)

// 📍 optimal approach
// - uses an additional data structure
// - an unordered_set
// - in a single pass
// - push elements to the unordered_set
// - and
// - for every num in nums, check whether its additive inverse exists in the unordered_set, maintain a record of the maximum num whose additive inverse exists

// 📍 learning
// - before implementing the optimal approach and after implementing the brute-force approach I came up with an approach which was similar to the optimal approach
// - that approach used an unordered_map instead of unordered_set
// - because, we have nothing do with the indices, a unordered_set is preferred over unordered_map
// - if we required indices, we would have used unordered_map instead of unordered_set
// - we just wanted to check the existence, so we used unordered_set