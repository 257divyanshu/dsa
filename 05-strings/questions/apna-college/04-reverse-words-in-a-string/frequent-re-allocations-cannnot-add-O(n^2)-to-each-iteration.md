👉 Without `reserve()`:

* Reallocations **can happen**, but not on every insert
* Vector grows geometrically (≈ 2×), so total copying is limited

👉 So:

* **Amortized overall** → **O(n)**
* **Theoretical worst-case** (if growth was poor) → **O(n²)**

❗ Important correction:

> It does **NOT** become O(n²) *per iteration*

👉 The O(n²) (worst-case) is **over the whole algorithm**, not each iteration.

> With `reserve()` → avoids reallocations → clean **O(n)**


### Suppose no `reserve()`

Vector grows like this (typical doubling):

```
capacity: 1 → 2 → 4 → 8 → 16 → ...
```

### You insert characters one by one

Let’s say you insert 8 chars:

#### Step-by-step cost

* Insert 1st → no reallocation → cost 1
* Insert 2nd → reallocate (copy 1) → cost 2
* Insert 3rd → reallocate (copy 2) → cost 3
* Insert 4th → no reallocation → cost 1
* Insert 5th → reallocate (copy 4) → cost 5
* Insert 6th → no → 1
* Insert 7th → no → 1
* Insert 8th → no → 1

### Total cost

```
1 + 2 + 3 + 1 + 5 + 1 + 1 + 1 = 15 ≈ 2n
```

👉 Not n² — still **O(n)**

---

### Why NOT O(n²)?

Reallocations happen at sizes:

```
1, 2, 4, 8, 16...
```

Cost of copies:

```
1 + 2 + 4 + 8 + ... + n
```

This is a geometric series:

```
= 2n  → O(n)
```

---

### Where does O(n²) come from?

Only if:

* capacity grows by **+1 each time** (bad implementation)

Then:

```
1 + 2 + 3 + ... + n = O(n²)
```

But `vector` does **not** work like that.

---

### Final takeaway

* Without `reserve()` → **amortized O(n)**
* With `reserve()` → still **O(n)** but avoids reallocations
* O(n²) is **theoretical**, not what happens in practice with vector

---

> reallocations ≠ happening every iteration
> growth is exponential, not linear
