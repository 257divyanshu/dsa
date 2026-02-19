Here is how the compiler turns a `switch` statement into a blazing-fast "jump table."

### 1. The Problem with `if-else` Chains

Imagine a massive `if-else if` chain with 50 conditions. When the program runs, it has to evaluate them one by one, from top to bottom.

* If the match is at the very end, the computer wastes time checking the first 49 conditions.
* The time it takes grows with the number of conditions (**Linear Time, O(N)**).

### 2. The Jump Table Shortcut

When the compiler sees a `switch` statement with sequential `case` numbers, it says, "I don't need to check these one by one. I can do math to jump directly to the right answer."

To do this, it creates a hidden array in memory called a **Jump Table**. This array doesn't hold data; it holds the **memory addresses** of the code for each `case`.

Instead of evaluating conditions, the computer does this:

1. It takes your `switch` value.
2. It uses that value as an **index** to look up the jump table.
3. It instantly "jumps" to the memory address stored at that index.

### 3. A Visual Analogy

Imagine your code looks like this:

```cpp
int choice = 2;
switch (choice) {
    case 0: /* Code A */ break;
    case 1: /* Code B */ break;
    case 2: /* Code C */ break;
}

```

The compiler builds a hidden jump table array that looks like this:

* `JumpTable[0]` = Address of Code A
* `JumpTable[1]` = Address of Code B
* `JumpTable[2]` = Address of Code C

When you pass in `choice = 2`, the computer literally just executes `Go to JumpTable[2]`. It takes the exact same amount of time whether you have 3 cases or 3,000 cases (**Constant Time, O(1)**).

### 4. Why it MUST be an Integral Type

This explains why you can only use integers, chars, or enums.
Because the jump table is fundamentally an **array**, the `switch` condition is being used as an **array index**.

* You can look up `JumpTable[2]`.
* You can look up `JumpTable[65]` (if passing the char `'A'`).
* You **cannot** look up `JumpTable[3.14]` or `JumpTable["Alice"]`. Array indices must be whole numbers!