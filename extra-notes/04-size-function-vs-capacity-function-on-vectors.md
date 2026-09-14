- **`.size()`** — number of elements currently in the vector.
- **`.capacity()`** — how much memory is allocated (how many elements it *can* hold before reallocating).

```cpp
vector<int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);

v.size();     // 3
v.capacity(); // typically 4 (vector over-allocates to avoid frequent reallocs)
```

Key point: capacity is always `>=` size. When size hits capacity and you add another element, the vector **reallocates** — typically doubles its capacity. This is why `push_back` is amortized O(1), not guaranteed O(1).