```cpp
int romanToInt(const string& s)
```

Benefits:

* No copy of the string → efficient
* Cannot modify the original string → safer
* Can accept:

  * normal strings
  * temporary strings
  * const strings

Best choice here.

```cpp
int romanToInt(string& s)
```

Properties:

* No copy → efficient
* Can modify original string
* Cannot accept:

  * temporary strings
  * const strings

Less flexible.

```cpp
int romanToInt(string s)
```

Properties:

* Makes a full copy of the string
* Extra memory + copy overhead
* Modifications affect only local copy

Usually worse for read-only functions.

So for read-only large objects:

```cpp
const T&
```

is generally preferred.
