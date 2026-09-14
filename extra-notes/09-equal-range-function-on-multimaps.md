You can't use `[]` or `at()` on multimap — they don't exist for it (precisely because one key can map to multiple values).

Use `equal_range()`:

```cpp
auto range = mmap1.equal_range(1);
for (auto it = range.first; it != range.second; it++) {
    cout << it->second << " "; // prints 12 11
}
```

`equal_range(1)` returns a pair of iterators — `first` points to the first element with key `1`, `second` points just past the last one. You iterate between them.

Alternatively, manual approach:
```cpp
auto it = mmap1.find(1); // iterator to first occurrence of key 1
```
But `equal_range` is cleaner when you want all values for a key.