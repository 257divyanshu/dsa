For each index `i`, you do:

1. Odd-length expansion
2. Even-length expansion

---

# Outer loop

```cpp id="l6m9s7"
for (int i = 0; i < n; i++)
```

Runs:

```text id="h1e3dk"
O(n)
```

---

# Inner work (expansion)

For each center:

```cpp id="1gq71f"
while (s[left] == s[right])
```

Pointers expand outward.

Worst-case example:

```text id="i3vwpo"
"aaaaaaa"
```

For one center:

* expansion may take O(n)

Since you do:

* odd expansion
* even expansion

per index:

```text id="0mbu0n"
O(n)
```

---

# Total Time Complexity

```text id="77y1ie"
O(n centers) * O(n expansion)
= O(n²)
```

---

# More Intuitive View

Each center expands across characters.

Example:

```text id="4e1ok8"
i = 0 → small work
i = n/2 → large work
i = n-1 → small work
```

Total expansions across all centers sum to:

```text id="ppolrx"
O(n²)
```

---

# Final

* **Time Complexity:** `O(n²)`
* **Auxiliary Space:** `O(1)`
