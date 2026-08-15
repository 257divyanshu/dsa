// - (char)result → C style cast
// - static_cast<char>(result) → C++ style cast
// - static_cast<char> is generally preferred in C++ because it makes the type conversion explicit and is easier to spot/read.
// - static_cast<char>(result) is just the more idiomatic modern C++ style.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "0 -> " << (int)('0') << endl;
    cout << "1 -> " << (int)('1') << endl;
    cout << "9 -> " << (int)('9') << endl;
    cout << "a -> " << (int)('a') << endl;
    cout << "b -> " << (int)('b') << endl;
    cout << "y -> " << (int)('y') << endl;
    cout << "z -> " << (int)('z') << endl;
    cout << "A -> " << (int)('A') << endl;
    cout << "B -> " << (int)('B') << endl;
    cout << "Y -> " << (int)('Y') << endl;
    cout << "Z -> " << (int)('Z') << endl;
    return 0;
};