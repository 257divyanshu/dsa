**Benefit of `reserve()` in `unordered_map`:**

👉 It **pre-allocates buckets** so the map doesn’t have to keep resizing.

---

### Without `reserve()`

* Map grows gradually
* When capacity is exceeded → **rehashing happens**

  * allocates new buckets
  * re-inserts all elements
* Costly (O(n) each time)

---

### With `reserve(n)`

* Allocates enough buckets upfront
* **Fewer / no rehashes**
* → better constant-time performance

---

### In your case

You insert up to `n` prefix sums
👉 `reserve(vect.size())` avoids multiple rehashes

---

### TL;DR

* Same Big-O (O(n))
* **Faster in practice** due to fewer reallocations and rehashing
