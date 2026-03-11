#include <bits/stdc++.h>
using namespace std;

// 📍 TC of first and second approach
// - O(log(max(...piles)) * piles.length) + piles.length

// 📍 second approach (to handle that RUNTIME ERROR)
int minEatingSpeed(vector<int> &piles, int h)
{
    int largestPileSize = 0;
    for (int pileSize : piles)
    {
        if (pileSize > largestPileSize)
        {
            largestPileSize = pileSize;
        }
    }
    int start = 1;
    int end = largestPileSize;
    int answer = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int timeTaken = 0;
        bool tooSlowFlag = false;
        for (int pileSize : piles)
        {
            timeTaken += pileSize / mid;
            // handling RTE
            if (timeTaken > h)
            {
                tooSlowFlag = true;
                break;
            };
            if (pileSize % mid)
            {
                timeTaken++;
            };
        }
        if (tooSlowFlag || timeTaken > h)
        { // koko is eating too slowly, tell her to increase her speed
            start = mid + 1;
        }
        else
        { // great! lets see if koko eating even more slowly works out or not
            answer = mid;
            end = mid - 1;
        }
    }
    return answer;
}

// 📍 first approach (RUNTIME ERROR)
// - RTE test case : piles = [805306368,805306368,805306368]; h = 1000000000
// int minEatingSpeed(vector<int> &piles, int h)
// {
//     int largestPileSize = 0;
//     for (int pileSize : piles)
//     {
//         if (pileSize > largestPileSize)
//         {
//             largestPileSize = pileSize;
//         }
//     }
//     int start = 1;
//     int end = largestPileSize;
//     int answer = 0;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         int timeTaken = 0;
//         for (int pileSize : piles)
//         {
//             timeTaken += pileSize / mid;
//             if (pileSize % mid)
//             {
//                 timeTaken++;
//             };
//         }
//         if (timeTaken <= h)
//         { // great! lets see if koko eating even more slowly works out or not
//             answer = mid;
//             end = mid - 1;
//         }
//         else
//         { // koko is eating too slowly, tell her to increase her speed
//             start = mid + 1;
//         }
//     }
//     return answer;
// }
// int main()
// {

//     return 0;
// };