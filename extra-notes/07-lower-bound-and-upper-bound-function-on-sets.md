Both do **binary search** on the set and return an iterator.

- **`lower_bound(x)`** — iterator to the **first element ≥ x**
- **`upper_bound(x)`** — iterator to the **first element > x**

```cpp
set<int> s = {1, 3, 5, 7, 9};

auto lb = s.lower_bound(5); // points to 5
auto ub = s.upper_bound(5); // points to 7
```

If no such element exists, both return `s.end()`.

**Key difference:**
```
set:  1  3  5  7  9
           ↑  ↑
           lb ub   (for x=5)
```
`lower_bound` is inclusive, `upper_bound` is exclusive.

**Important:** Use the set's **member function** (`s.lower_bound(x)`) rather than the generic `std::lower_bound(s.begin(), s.end(), x)` from `<algorithm>`. The member version is **O(log n)**, the generic one is **O(n)** on sets because set iterators aren't random access.