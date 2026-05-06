**Lambda function** in C++.

Your code:

```cpp id="ms7mdx"
auto expand = [&](int left, int right)
{
    ...
};
```

---

Equivalent normal function idea:

```cpp id="qqbmwi"
void expand(int left, int right)
{
    ...
}
```

But normal functions cannot directly access local variables of `longestPalindrome()`.

Lambda can.

---

# Breakdown

## 1.

```cpp id="b45xx6"
auto expand
```

`expand` is a variable storing a function object.

`auto` lets compiler infer the lambda type.

---

## 2.

```cpp id="fmu0ic"
[&]
```

Capture clause.

Means:

```text id="5o7rw9"
capture all local variables by reference
```

So lambda can directly use:

```cpp id="h0j5al"
s
n
longestPalindromeStart
longestPalindromeLength
```

without passing them as parameters.

---

## 3.

```cpp id="clmv2v"
(int left, int right)
```

Parameters of lambda.

---

## 4.

```cpp id="gnzbck"
{
   ...
}
```

Body of lambda.

---

# Why semicolon at end?

Because this entire thing is an assignment:

```cpp id="m5mjlwm"
auto expand = <lambda>;
```

So semicolon needed.

---

# Invocation

```cpp id="31i4p6"
expand(i, i);
```

Looks exactly like normal function call.
