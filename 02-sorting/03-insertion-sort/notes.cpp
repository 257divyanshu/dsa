#include <bits/stdc++.h>
using namespace std;

// 📍 trick
// - outer loop : 0 to n
// - inner loops condition:
//   - initialization: j = i
//   - condition: ( ( j > 0 ) && ( vect[j-1] > vect[j] ) ) 

// 📍 complexity
// - TC -> O(n^2)
// - O(n) for best case (when the array is already sorted)

// 📍 the shifting version
// - ditches the need of swap(), which actually performs three separate variable assignments behind the scenes (moving item A to a temporary variable, moving item B to A, moving temp to B)
// - this shifting version makes the algorithm significantly faster by just "shifting" the numbers over
// int insertionSort(vector<int> &vect)
// {
//     // Initial print (matching your instructor's format)
//     for (int num : vect)
//     {
//         cout << num << " ";
//     }
//     cout << "\n\n";

//     // Start at 1, as discussed!
//     for (int i = 1; i < vect.size(); i++)
//     {
//         int key = vect[i]; // 📍Step 1: "Pick up" the current card
//         int j = i - 1; // Look at the card immediately to the left

//         // 📍 Step 2: While the card to the left is bigger, SHIFT it right
//         while (j >= 0 && vect[j] > key)
//         {
//             vect[j + 1] = vect[j]; // Overwrite the spot to the right (shifting)
//             j--;
            
//             // Inner print loop (so you can see the shifts happening)
//             for (int num : vect) { cout << num << " "; }
//             cout << endl;
//         }
        
//         // 📍 Step 3: "Drop" the card into the empty gap we created
//         vect[j + 1] = key;

//         // End of iteration print
//         cout << "\nafter iteration " << i << " :\n";
//         for (int num : vect)
//         {
//             cout << num << " ";
//         }
//         cout << "\n\n";
//     }
//     return 0; 
// }

int insertionSort(vector<int> &vect)
{
    for (int num : vect)
    {
        cout << num << " ";
    };
    cout << endl;
    cout << endl;
    for (int i = 0; i < vect.size(); i++) // 📝 initiating i with 1 will also work fine
    {
        int j = i;
        // 📍 second approach (better)
        while (j > 0 && (vect[j - 1] > vect[j]))
        {
            swap(vect[j - 1], vect[j]);
            j--;
            for (int num : vect)
            {
                cout << num << " ";
            };
            cout << endl;
        };
        // 📍 first approach
        // for (int j = i; j > 0; j--)
        // {
        //     if (vect[j - 1] > vect[j])
        //     {
        //         swap(vect[j - 1], vect[j]);
        //         for (int num : vect)
        //         {
        //             cout << num << " ";
        //         };
        //         cout << endl;
        //     }
        //     else
        //     {
        //         break;
        //     };
        //     // for (int num : vect)
        //     // {
        //     //     cout << num << " ";
        //     // };
        //     // cout << endl;
        // };
        cout << endl;
        cout << "after iteration " << i << " :" << endl;
        for (int num : vect)
        {
            cout << num << " ";
        };
        cout << endl;
        cout << endl;
    };
};

int main()
{
    vector<int> vect = {14, 9, 15, 12, 6, 8, 13};
    insertionSort(vect);
    return 0;
};

// 📍 walkthrough
// - given unsorted array : 14, 9, 15, 12, 6, 8, 13
// - (14), 9, 15, 12, 6, 8, 13 // algorithms starts
// - 14, (9), 15, 12, 6, 8, 13
// - 9, 14, (15), 12, 6, 8, 13
// - 9, 14, 15, (12), 6, 8, 13
// - 9, 12, 14, 15, (6), 8, 13
// - 6, 9, 12, 14, 15, (8), 13
// - 6, 8, 9, 12, 14, 15, (13)
// - 6, 8, 9, 12, 13, 14, 15

// 📍 insertion sort : take an element and place it in its correct position