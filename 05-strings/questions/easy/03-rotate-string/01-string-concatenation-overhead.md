### Case: capacity NOT enough → reallocation happens

```cpp
string s = "abcd"; // size = 4, capacity ≈ 4
s += s;
```

**What happens internally:**

1. Current:

   * size = 4
   * capacity = 4
   * data = `"abcd"`

2. Need to append 4 more chars → total needed = 8
   ❌ capacity (4) < required (8)

3. Reallocation:

   * Allocate new memory (say capacity = 8 or more)
   * Copy old `"abcd"` → **O(n)**

4. Append new `"abcd"` → **O(n)**

---

### Total work:

* Copy old string → **O(n)**
* Append string → **O(n)**

👉 **Total = O(2n) ≈ O(n)**
(This is the “overhead”)

---

### Case: capacity already enough

```cpp
string s;
s.reserve(10);
s = "abcd"; // size = 4, capacity = 10
s += s;
```

Now:

* No reallocation
* Only append happens

👉 Work = **O(n)** (no extra copy)

---

### Key takeaway

* Reallocation adds **extra copy of entire string**
* That’s the **overhead**
* Still **O(n)** overall, just a bigger constant factor
