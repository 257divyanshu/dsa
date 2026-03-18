#include <bits/stdc++.h>
using namespace std;

// 📍 optimal approach (sir's approach)
// - the only thing that I missed is : the pointer 'start' will point to the required mindEatingSpeed, we don't need to track the minEatingSpeed using an extra variable
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
    // int answer = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        cout << "s = " << start << "; e = " << end << "; m = " << mid << endl;
        long long timeTaken = 0;
        bool tooSlowFlag = false;
        for (int pileSize : piles)
        {
            // 📍 using custom logic instead of ceil()
            // timeTaken += pileSize / mid;
            // if (pileSize % mid)
            // {
            //     timeTaken++;
            // };
            // 📍 using ceil()
            timeTaken += ceil((double)pileSize / mid);
            // 📝 that (double) is necessary, else (pileSize / mid) will provide us the floored value by default, on which applying ceil won't help
        }
        cout << "timeTaken = " << timeTaken << endl; 
        if (timeTaken > h)
        { // koko is eating too slowly, tell her to increase her speed
            start = mid + 1;
        }
        else
        { // great! lets see if koko eating even more slowly works out or not
            // answer = mid;
            end = mid - 1;
        }
    }
    // return answer;
    return start; // 💡 myHint : we are supposed to move left on finding a candidate answer
}

// 📍 SOME CONCLUSIONS
// - when h = piles.length(), k = max(...piles) (koko should be fast enough to be able to eat the largestPile in an hour)
// - when h = sum(...piles), k = 1 (koko can't be slower than this)

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
        cout << "s = " << start << "; e = " << end << "; m = " << mid << endl;
        // 📍 handling runtime error using a flag
        // int timeTaken = 0;
        // bool tooSlowFlag = false;
        // for (int pileSize : piles)
        // {
        //     timeTaken += pileSize / mid;
        //     // handling RTE
        //     if (timeTaken > h)
        //     {
        //         tooSlowFlag = true;
        //         break;
        //     };
        //     if (pileSize % mid)
        //     {
        //         timeTaken++;
        //     };
        // }
        // if (tooSlowFlag || timeTaken > h)
        // { // koko is eating too slowly, tell her to increase her speed
        //     start = mid + 1;
        // }
        // else
        // { // great! lets see if koko eating even more slowly works out or not
        //     answer = mid;
        //     end = mid - 1;
        // }
        // 📍 handling runtime error using long long
        long long timeTaken = 0;
        bool tooSlowFlag = false;
        for (int pileSize : piles)
        {
            timeTaken += pileSize / mid;
            if (pileSize % mid)
            {
                timeTaken++;
            };
        }
        if (timeTaken > h)
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

int main()
{
    // 📍 EDGE CASE (that caused runtime error)
    // vector<int> piles = {805306368,805306368,805306368};
    // int h = 1000000000;
    // cout << "minEatingSpeed = " << minEatingSpeed(piles, h) << endl;
    // - it caused runtime error when the mid was 1
    // - when mid was 1, 805306368 got added to totalTime (which was initially 0) 3 times, after adding the second pileSize (805306368) totalTime was 1610612736, adding the third pileSize (805306368) caused the overflow  

    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << "minEatingSpeed = " << minEatingSpeed(piles, h) << endl;
    return 0;
};