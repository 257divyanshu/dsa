# Core Problem

In center expansion:

* many expansions are repeated

Manacher’s algorithm avoids repeating them.

---

# Step 1 — Transform the string

Original:

```text id="8wkqj2"
abba
```

Transformed:

```text id="jzffyj"
#a#b#b#a#
```

Why?

* Converts every palindrome into odd length
* So we only need ONE expansion logic

Example:

```text id="5l6k2j"
abba   -> #a#b#b#a#
aba    -> #a#b#a#
```

Now every palindrome has a single center.

---

# Step 2 — Meaning of `p[i]`

```cpp id="khh3pq"
p[i]
```

stores:

```text id="19pw9r"
radius of palindrome centered at i
```

Example:

```text id="n0uxl8"
#a#b#a#
```

At center `'b'`:

```text id="qpx1gv"
radius = 3
```

because:

```text id="bm84xw"
#a#b#a#
 ^^^^^
```

---

# Step 3 — Maintain current best palindrome

We track:

```cpp id="81r9qq"
center
rightBoundary
```

Meaning:

* current palindrome center
* farthest right palindrome discovered so far

Example:

```text id="gf5bnc"
----[palindrome]----
          ^
        center

                ^
          rightBoundary
```

---

# Step 4 — Mirror trick (MAIN OPTIMIZATION)

Suppose:

```text id="m4df8y"
i is inside current palindrome
```

Then its mirror:

```cpp id="j0k38q"
mirror = 2*center - i
```

already has information.

---

Example:

```text id="n4c6hn"
        center
           |
#a#b#a#b#a#
```

If:

```text id="w9zzls"
p[mirror] = 2
```

then much of that palindrome is automatically valid for `i` too.

So instead of re-expanding from scratch:

```cpp id="wtjlwm"
p[i] = min(rightBoundary - i, p[mirror]);
```

This gives a guaranteed starting radius instantly.

---

# Step 5 — Expand only beyond known boundary

After using mirror info:

```cpp id="b56rfw"
while (...)
```

tries expanding further.

Important:

```text id="p0oqw4"
Characters inside known palindrome are never rechecked unnecessarily.
```

That is why total time becomes:

```text id="b6ok73"
O(n)
```

instead of O(n²).

---

# Why O(n)?

Each character expansion contributes to increasing:

```cpp id="nvjccn"
rightBoundary
```

And `rightBoundary` only moves forward across string once.

So total expansions across entire algorithm:

```text id="90sm1t"
O(n)
```

---

# Final extraction

Because transformed string contains `#`,
mapping back:

```cpp id="rd1fjh"
start = (centerIndex - maxLength) / 2;
```

gives original string index.

---

# Intuition Summary

Normal center expansion:

```text id="mgx4lc"
re-expands same regions repeatedly
```

Manacher:

```text id="n36r0q"
reuses symmetry information using mirrors
```

That removes redundant work and achieves:

```text id="w4rbdj"
O(n)
```
