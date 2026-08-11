// it was a really really nice question

// 📍 the logic summarized in few lines:
// k == 1 → Find the largest number with frequency 1.
// 1 < k < n → Only nums[0] and nums[n-1] can be almost missing; return the larger one that appears exactly once.
// k == n → Every number appears in the only subarray, so return the maximum element.