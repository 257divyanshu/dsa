// - bruteforce implemented
// - optimization pending

// -----------------------------------------------

// WAS THINKING ABOUT USING XOR (BUT XOR CAN'T HELP HERE):

// 📍 1 ^ n
// If n is even → 1 ^ n = n + 1
// If n is odd → 1 ^ n = n - 1

// 📍 0 ^ n = n

// 📍 iterating over an unordered_map
// - method 1 (using range based for loop)
// for (auto& [key, value] : mp) {
//     cout << key << " " << value << endl;
// }
// - method 2 (using auto)
// for (auto& pair : mp) {
//     cout << pair.first << " " << pair.second << endl;
// }
// - method 3 (using iterators)
// for (auto it = mp.begin(); it != mp.end(); ++it) {
//     cout << it->first << " " << it->second << endl;
// }

// 📍 keywords' meanings
// auto → make a copy
// auto& → reference the original element
// const auto& → reference without allowing modification

// 📍 1 ^ 2 ^ 3 ^ ... ^ n
// | `n % 4` | Result  |
// | ------- | ------- |
// | `0`     | `n`     |
// | `1`     | `1`     |
// | `2`     | `n + 1` |
// | `3`     | `0`     |

// -----------------------------------------------

// HINT 1 : considering the constraints, it can be inferred that there is some structural property (a special relationship between the values and the size of the array) in the array that guarantees a duplicate

// HINT 2 : Think of the array as a linked list.Think of the array as a linked list.

// HINT 3 : What happens when a linked list contains a cycle? A cycle in a linked list means that instead of eventually reaching nullptr, you eventually come back to a node you've already visited.

// HINT 4 : How can I detect the cycle and find where it starts, using O(1) space?

// CAME UP WITH A CYCLE DETECTION IDEA, but it violates the constraints