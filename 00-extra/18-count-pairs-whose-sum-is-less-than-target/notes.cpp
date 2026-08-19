// 📍 logs
// - came up with the bruteforce method, which had O(n^2) time and O(1) space complexity
// - dropped the idea of using hashing, because it wouldn't work, because we had to count the pairs that had a sum strictly smaller than the target, hashing would have worked if we had to count the pairs that had a sum equal to the target
// - the idea of sorting came to my mind but I didn't give enough thought to it
// - the optimal approach uses sorting
// - after getting the hint that optimal approach uses sorting, and the hint that we need to use two pointer approach, I got stuck on the point where sum of nums[i] and nums[j] was smaller than the target, I couldn't decide which pointer to move
// - after getting to know which pointer to move, I couldn't think that we would have to increment count multiple times before moving the left pointer to the right
// - after getting to know that we had to increment count multiple times before moving the left pointer to the right, I incremented the count with the right amount

// 📍 learnings
// - Sorting + Two Pointers can efficiently solve pair-counting problems.
// - In-place sorting can avoid needing an additional data structure.