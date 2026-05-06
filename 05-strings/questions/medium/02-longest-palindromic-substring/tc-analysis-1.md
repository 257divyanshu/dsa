Your solution:

* Iterate over all substrings
* For each substring → check palindrome from scratch

---

Number of substrings:

```text
O(n²)
```

Reason:

* start can be chosen in O(n)
* end can be chosen in O(n)

---

### WITHOUT memoization

For each substring `(i, j)`:

```cpp
isPalindrome(s, i, j)
```

Worst-case palindrome check:

```text
O(length of substring) = O(n)
```

So:

```text
O(n² substrings) * O(n check)
= O(n³)
```

---

# WITH memoization

Now consider your friend’s solution.

Key observation:

```text
Each (l, r) pair is solved only once
```

Because:

```cpp
if(t[l][r] != -1)
    return t[l][r];
```

So after first computation:

* future calls become O(1) lookups

---

## How many unique states exist?

A state is:

```text
(l, r)
```

Possible pairs:

```text
O(n²)
```

Example:

```text
(0,0), (0,1), (0,2) ...
(1,1), (1,2) ...
...
```

Total ≈ n²/2

So:

```text
Total unique recursive computations = O(n²)
```

---

## Cost per state

Inside one fresh state:

```cpp
if(s[l] == s[r])
    solve(l+1, r-1)
```

Only:

* comparisons
* table lookup
* one recursive jump

All O(1), excluding recursive subproblem.

Since each subproblem computed once:

```text
Total = O(number of states)
      = O(n²)
```

---

# Intuition

Without memoization:

```text
Same substrings rechecked again and again
```

With memoization:

```text
Every substring palindrome result cached once
```

That removes repeated work.
