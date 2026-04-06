Whenever you write:

```cpp
i < nums.size() - 1
```

and `nums.size() == 0`:

* `nums.size()` → `0` (unsigned)
* `0 - 1` → **wraps to a very large unsigned value**
* condition becomes:

  ```cpp
  i < huge_number   // true for i = 0
  ```

👉 So the loop **will run**, even though the array is empty.

---

### ✅ One-line conclusion

Any time you do `nums.size() - 1` with `size() == 0`, it **underflows and breaks your loop condition**.
