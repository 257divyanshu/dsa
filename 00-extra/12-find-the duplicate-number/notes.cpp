// - bruteforce implemented
// - optimization pending

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
