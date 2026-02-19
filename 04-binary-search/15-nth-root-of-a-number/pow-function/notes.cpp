// 📍 pow() function
// 📍 SYNTAX:
// #include <cmath>
// double result = pow(base, exponent);
// 📍 Key Characteristics
// - Return Type: It always returns a double (floating-point number), even if you pass integers into it.
// - Parameter Types: It takes double, float, or long double arguments. If you pass integers, they are implicitly promoted to double.
// 📍 DEMONSTRATION
// #include <iostream>
// #include <cmath> 
// int main() {
//     // 2.0 raised to the power of 3.0
//     // Calculation: 2 * 2 * 2 = 8
//     std::cout << pow(2, 3) << std::endl;  // Output: 8
//     // It handles square roots too (fractional power)
//     std::cout << pow(9, 0.5) << std::endl; // Output: 3
//     return 0;
// }
// 📍 THE INNER TRAP
// - Because pow() works with floating-point math, it is not 100% precise for integers.
// - Mathematically, 5^2 = 25. Computationally, pow(5, 2) might return 24.999999999 due to how computers store decimals.
// - The Danger: If we assign this directly to an int, C++ truncates the decimal part, leaving us with the wrong answer.
// - The Fix: Always use round() if you need an integer result.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout << pow(5,2) << endl; // ✅ logs 25
//     return 0;
// };
// 📍 PERFORMANCE NOTE
// - pow() is computationally expensive.
// - If you just need to square a number, do not use pow.
// - Instead, just do x * x. It is significantly faster.