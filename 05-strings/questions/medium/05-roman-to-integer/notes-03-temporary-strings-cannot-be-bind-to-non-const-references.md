It means this is illegal:

```cpp id="j6j0n9"
void func(string& s) {}

func("hello");
```

because:

```cpp id="lq1jnv"
"hello"
```

creates a temporary `string` object.

And C++ does not allow a non-const reference (`string&`) to refer to a temporary object.

But this is allowed:

```cpp id="l8d74q"
void func(const string& s) {}

func("hello");
```

because const references are allowed to bind to temporaries.

Reason:
C++ prevents accidental modification of temporary objects through non-const references.
