#include <bits/stdc++.h>
using namespace std;

// For the current problem, though, the actual magnitudes of 1 and -1 don't matter; only their signs matter.

// 📍 this question teaches:
// Pattern recognition: Identify 0s between two non-zero values of opposite signs.

// 📍 approach 1 refined
int captureForts(vector<int> &forts)
{
    int maxCaptured = 0;
    int captured = 0;
    int sum = 0;

    for (int fort : forts)
    {
        sum += fort;

        if (fort == 0 && sum != 0)
        {
            captured++;
        }
        else if (fort != 0)
        {
            if (sum == 0)
            {
                maxCaptured = max(maxCaptured, captured);
            }

            sum = fort;
            captured = 0;
        }
    }

    return maxCaptured;
}

// 📍 approach 1
// - TC -> O(n)
// - SC -> O(1)
// int captureForts(vector<int> &forts)
// {
//     int capturedForts = 0;
//     int maxCapturedForts = 0;
//     int sum = 0;
//     for (int fort : forts)
//     {
//         sum += fort;
//         if (fort == 0 && sum != 0)
//         {
//             capturedForts++;
//             continue;
//         }
//         if (fort != 0 && sum == 0)
//         {
//             sum += fort;
//             maxCapturedForts = max(maxCapturedForts, capturedForts);
//             capturedForts = 0;
//             continue;
//         }
//         if (fort != 0 && sum != 0)
//         {
//             sum = fort;
//             capturedForts = 0;
//             continue;
//         }
//     }
//     return maxCapturedForts;
// }

// 📍 logic behind the approach
// Find the maximum number of consecutive 0s between two non-zero forts of opposite signs.

int main()
{

    return 0;
};