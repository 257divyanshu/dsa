// 📍 pass by reference
// - When a variable is passed by reference, the function receives the actual variable (not a copy). Any changes made inside the function will reflect on the original.
// - The function receives the original memory address
// - Useful when you want to update multiple variables or return multiple values
// 📍 demonstration
// #include <iostream>
// using namespace std;
// void modify(int &a) {
//     a = a + 10;
// }
// int main() {
//     int x = 5;
//     modify(x);
//     cout << x << endl; // Output: 15
//     return 0;
// }

// 📍 pass by value
// - When a variable is passed by value, a copy of the variable is made. The function works on that copy, and the original variable remains unchanged.
// - The function receives a separate copy
// - Is safe, but potentially less efficient for large objects.
// 📍 demonstration
// #include <iostream>
// using namespace std;
// void modify(int a) {
//     a = a + 10;
// }
// int main() {
//     int x = 5;
//     modify(x);
//     cout << x << endl; // Output: 5
//     return 0;
// }