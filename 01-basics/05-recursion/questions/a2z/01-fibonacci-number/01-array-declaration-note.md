```cpp
int arr[n+1];
```

The elements are **NOT initialized by default**.

So values are **indeterminate (garbage values)** if this is a local array inside a function:

```cpp
void func() {
    int n = 5;
    int arr[n+1];   // garbage values
}
```

Example:

```cpp
cout << arr[0];   // undefined behavior
```

---

If you want default `0`s:

```cpp
int arr[n+1] = {};
```

or

```cpp
vector<int> arr(n+1, 0);
```

---

Exception: if declared at global/static scope:

```cpp
int arr[100];
```

then all elements are automatically initialized to `0`.
