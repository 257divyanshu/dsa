Let:

* `n` = length of `s`
* `m` = length of `part`

---

### Loop:

Runs **n times**

---

### Inside each iteration:

#### 1. Append:

* `result += s[i]` → **O(1)** amortized (due to `reserve`)

#### 2. Check last `m` chars:

* Your reverse loop → **O(m)**

#### 3. Erase (if match found):

* `erase(...)` → **O(k)** where `k = result.length() ≤ n`

---

### Key observation:

* Erase happens at most **n / m times**
* Each erase costs up to **O(n)**

---

### Total:

#### Checking cost:

* Happens every iteration → **O(n * m)**

#### Erase cost:

* `(n / m)` times × `O(n)` → **O(n² / m)**

---

### Final complexity:

[
O(n \cdot m + \frac{n^2}{m})
]

---

### Worst case:

* When `m` is small (e.g., 1) → **O(n²)**

---

### Summary:

* **Tight bound: O(n²)**