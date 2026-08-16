// - this question can be solved using two approaches

// 📍 why approach2 is better than approach1
// - Uses one loop instead of two.
// - Doesn't need to first locate val.
// - Has a simpler invariant: i always points to the next position for a non-val element.
// - Handles all cases uniformly, including when val doesn't exist.