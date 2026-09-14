`vect1[0]` is faster.

`at()` does **bounds checking** — it throws `std::out_of_range` if the index is invalid. That check has overhead.

`[]` does **no bounds checking** — straight memory access.

In practice the difference is negligible, but `[]` is preferred in performance-critical code. Use `at()` only when you want the safety of bounds checking (e.g. during debugging).