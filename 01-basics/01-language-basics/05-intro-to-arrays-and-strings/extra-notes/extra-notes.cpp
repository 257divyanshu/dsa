// 📍 using strings in swtich case statements
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     std::string name = "Alice";
//     // ERROR: Expression must have integral or enum type
//     switch (name)
//     {
//     case "Alice":
//         std::cout << "Hi Alice";
//         break;
//     }
//     return 0;
// };

// 📍 using floating points numbers in swtich case statements
// - We cannot switch on fractions. The computer cannot build a jump table for infinite decimal possibilities.
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     float pi = 3.14f;
//     // ERROR: Expression must have integral or enum type
//     switch (pi)
//     {
//     case 3.14f:
//         std::cout << "Pi";
//         break;
//     }
//     return 0;
// };

// 📍 using enums in switch case statements
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     enum Color
//     {
//         RED,
//         GREEN,
//         BLUE
//     };
//     // Under the hood: RED=0, GREEN=1, BLUE=2

//     Color myColor = GREEN;

//     switch (myColor)
//     {
//     case RED:
//         std::cout << "Stop";
//         break;
//     case GREEN:
//         std::cout << "Go";
//         break; // This will execute
//     case BLUE:
//         std::cout << "Water";
//         break;
//     }
//     return 0;
// };

// - Because switch statements are designed for raw speed, the compiler uses these whole numbers to do instant mathematical jumps directly to the matching case. It cannot do this with fractions (float/double) or complex data structures (std::string).