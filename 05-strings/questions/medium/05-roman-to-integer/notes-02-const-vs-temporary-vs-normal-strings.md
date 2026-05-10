### Normal string

A regular modifiable string variable.

```cpp
string s = "hello";
romanToInt(s);
```

* Has a name
* Stored in memory
* Can be modified

### Temporary string

A string object created temporarily.

```cpp
romanToInt("MCMXCIV");
```

or

```cpp
romanToInt(string("MCMXCIV"));
```

* No variable name
* Exists only during the expression
* Cannot bind to non-const reference (`string&`)

### Const string

A read-only string.

```cpp
const string s = "hello";
romanToInt(s);
```

* Cannot be modified
* Compiler enforces read-only access

So:

| Parameter Type    | Normal | Temporary | Const |
| ----------------- | ------ | --------- | ----- |
| `string s`        | ✅      | ✅         | ✅     |
| `string& s`       | ✅      | ❌         | ❌     |
| `const string& s` | ✅      | ✅         | ✅     |
