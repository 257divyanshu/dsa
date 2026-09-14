```cpp
map<string, int> m;

m["key"] = 1;        // subscript operator
m.emplace("key", 1); // emplace
```

**Subscript operator `[]`:**
- If key doesn't exist, it **creates it with a default value** (0 for int) and then assigns
- Can accidentally insert unwanted keys just by accessing them

**`emplace()`:**
- Only inserts if key **doesn't already exist**
- No accidental insertions
- Slightly more efficient — no default construction + assignment, constructs directly

**The dangerous part about `[]`:**
```cpp
map<string, int> m;
cout << m["nonexistent"]; // prints 0, but also INSERTS the key into the map
m.size(); // 1, even though you never explicitly inserted anything
```

This is a common bug. If you just want to **read** a value safely, use `at()` instead — it throws if the key doesn't exist rather than silently inserting it.

**Bottom line:**
- Use `emplace()` for inserting
- Use `at()` for reading
- Avoid `[]` unless you explicitly want the default-insert behavior