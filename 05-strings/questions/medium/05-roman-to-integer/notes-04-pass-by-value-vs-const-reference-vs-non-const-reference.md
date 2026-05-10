```cpp id="6tnj1t"
string s
```

is neither.

It is:

* a normal value parameter
* passed by value
* a copy is created

So:

| Syntax            | Meaning             |
| ----------------- | ------------------- |
| `string s`        | pass by value       |
| `string& s`       | non-const reference |
| `const string& s` | const reference     |
