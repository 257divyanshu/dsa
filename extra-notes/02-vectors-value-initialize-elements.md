```cpp
vector<int> vect1(5);
// vect1 = {0, 0, 0, 0, 0}
```

Unlike raw arrays, vectors **value-initialize** elements when given a size. For `int`, that means zero-initialization.

- `vect1.size()` → `5`
- `vect1.capacity()` → `5` (typically)