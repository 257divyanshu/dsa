- `auto elem` in a range-based for loop → `elem` is a **reference** to the pair directly → use `.first`, `.second`
- `m.begin()` → returns an **iterator** (essentially a pointer to the pair) → use `->first`, `->second`

Same rule as pointers vs objects in general:
```cpp
pair<int,int> p = {1,10};
p.first;   // direct object → dot

pair<int,int>* ptr = &p;
ptr->first; // pointer → arrow
```

`->` is just shorthand for `(*ptr).first`. Same thing with iterators — they behave like pointers, so you use `->`.