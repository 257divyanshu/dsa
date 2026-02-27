When you use `std::sort()` in C++, the compiler does not just use one simple sorting algorithm. Instead, almost all modern C++ implementations (like GCC, Clang, and MSVC) use a highly optimized hybrid algorithm called **Introsort** (short for Introspective Sort).

The C++ Standard dictates that `std::sort()` must guarantee a worst-case time complexity of $O(N \log N)$. Pure Quicksort cannot guarantee this (its worst-case is $O(N^2)$), so Introsort was created to combine the best parts of three different algorithms to meet this strict requirement.

Here is how Introsort acts as a "3-in-1" algorithm behind the scenes:

### 1. The Main Engine: Quicksort

When you call `std::sort()`, it initially starts sorting your data using **Quicksort**.

* **Why?** Quicksort has excellent cache locality and is generally the fastest algorithm for average cases.
* **The Catch:** If the data is ordered in a specific, unlucky way, Quicksort's recursion can go way too deep, slowing down to $O(N^2)$.

### 2. The Safety Net: Heapsort

To prevent that worst-case scenario, Introsort is "introspective"—it constantly monitors its own recursion depth while running Quicksort.

* If the recursion depth exceeds a certain limit (usually $2 \times \log_2(N)$), Introsort immediately stops using Quicksort.
* It switches to **Heapsort** for the remaining unsorted parts.
* **Why?** Heapsort is a bit slower than Quicksort on average, but it *guarantees* an $O(N \log N)$ completion time, completely saving the program from the $O(N^2)$ worst-case trap.

### 3. The Finisher: Insertion Sort

As Quicksort divides the massive array into smaller and smaller sub-arrays, the overhead of making recursive function calls starts to outweigh the benefits of the algorithm.

* Once a sub-array becomes very small (usually fewer than 16 elements), Introsort abandons both Quicksort and Heapsort.
* It switches to **Insertion Sort** to finish the job.
* **Why?** Insertion sort is incredibly fast and efficient for tiny arrays, with practically zero overhead.

### Summary

`std::sort()` is incredibly fast because it adapts to your data on the fly:

1. Start fast with **Quicksort**.
2. Switch to **Heapsort** if things get mathematically ugly.
3. Finish off tiny chunks with **Insertion Sort**.