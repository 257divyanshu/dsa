#include <iostream>
using namespace std;

// PATTERN 21
// ****
// *  *
// *  *
// ****
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int m = n/2;
    for(int i = 1; i<=m; i++)
    {
        for(int j = 1; j<=(m-i+1); j++)
        {
            cout<<"*";
        };
        for(int j = 1; j<=2*(i-1); j++)
        {
            cout<<" ";
        }
        for(int j = 1; j<=(m-i+1); j++)
        {
            cout<<"*";
        };
        cout<<endl;
    };
    for(int i = m; i>=1; i--)
    {
        for(int j = 1; j<=(m-i+1); j++)
        {
            cout<<"*";
        };
        for(int j = 1; j<=2*(i-1); j++)
        {
            cout<<" ";
        }
        for(int j = 1; j<=(m-i+1); j++)
        {
            cout<<"*";
        };
        cout<<endl;
    };
    return 0;
};

// PATTERN 20
// *         *
// * *     * *
// * * * * * *
// * *     * *
// *         *
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n-1; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         for(int j = 1; j<=2*(n-i); j++)
//         {
//             cout<<"  ";
//         };
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     for(int i = n; i>=1; i--)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         for(int j = 1; j<=2*(n-i); j++)
//         {
//             cout<<"  ";
//         };
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 19
// * * * * * * 
// * *     * * 
// *         * 
// *         * 
// * *     * * 
// * * * * * * 
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = n; j>=i; j--)
//         {
//             cout<<"* ";
//         };
//         for(int j = 1; j<=2*(i-1); j++)
//         {
//             cout<<"  ";
//         };
//         for(int j = n; j>=i; j--)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     for(int i = n; i>=1; i--)
//     {
//         for(int j = n; j>=i; j--)
//         {
//             cout<<"* ";
//         };
//         for(int j = 1; j<=2*(i-1); j++)
//         {
//             cout<<"  ";
//         };
//         for(int j = n; j>=i; j--)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 18
// C
// C B 
// C B A
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = n; j>=n-i+1; j--)
//         {
//             cout<<char(64+j)<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 17
//     A
//   A B A
// A B C B A
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<" ";
//         };
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<char(64+j)<<" ";
//         };
//         for(int j = i-1; j>=1; j--)
//         {
//             cout<<char(64+j)<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 16
// A
// B B
// C C C
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<char(64+i)<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 15
// A B C
// A B
// A
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = n; i>=1; i--)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<char(64+j)<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 14
// A
// A B
// A B C
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<char(64+j)<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 13
// 1
// 2 3
// 4 5 6
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int count = 1;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<count<<" ";
//             count++;
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 12
// 1         1
// 1 2     2 1
// 1 2 3 3 2 1
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<j<<" ";
//         };
//         for(int j = 1; j<=2*(n-i); j++)
//         {
//             cout<<"  ";
//         };
//         for(int j = i; j>=1; j--)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 11
// 1
// 0 1
// 1 0 1
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     int count = 1;
//     for(int i = 1; i<=n; i++)
//     {
//         if(i&1)
//         {
//             for(int j = 1; j<=i; j++)
//             {
//                 if(j&1)
//                 {
//                     cout<<"1 ";
//                 }
//                 else
//                 {
//                     cout<<"0 ";
//                 };
//             };
//             cout<<endl;
//         }
//         else
//         {
//             for(int j = 1; j<=i; j++)
//             {
//                 if(j&1)
//                 {
//                     cout<<"0 ";
//                 }
//                 else
//                 {
//                     cout<<"1 ";
//                 };
//             };
//             cout<<endl;
//         };
//     };
// };

// PATTERN 10
// *
// **
// ***
// **
// *
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n-1; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<"*";
//         };
//         cout<<endl;
//     };
//     for(int i = 1; i<=n; i++)
//     {
//         cout<<"*";
//     };
//     cout<<endl;
//     for(int i = 1; i<=n-1; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<"*";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 9
//   *
//  ***
// *****
// *****
//  ***
//   *
// int main()
// {
//     int n;
//     cout << "Enter the value of n : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         };
//         for (int k = 1; k <= (2 * i) - 1; k++)
//         {
//             cout << "*";
//         };
//         cout << endl;
//     };
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << " ";
//         };
//         for (int k = 1; k <= (2 * (n - i)) + 1; k++)
//         {
//             cout << "*";
//         };
//         cout << endl;
//     };
//     return 0;
// };

// PATTERN 8
// *****
//  ***
//   *
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i-1; j++)
//         {
//             cout<<" ";
//         };
//         for(int k = 1; k<=(2*(n-i))+1; k++)
//         {
//             cout<<"*";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 7
//   *
//  ***
// *****
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i; j++)
//         {
//             cout<<" ";
//         };
//         for(int k = 1; k<=(2*i)-1; k++)
//         {
//             cout<<"*";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 6
// 1 2 3
// 1 2
// 1
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i+1; j++)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 5
// * * *
// * *
// *
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=n-i+1; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 4
// 1
// 2 2
// 3 3 3
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<i<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 3
// 1
// 1 2
// 1 2 3
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 1; i<=n; i++)
//     {
//         for(int j = 1; j<=i; j++)
//         {
//             cout<<j<<" ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 2
// *
// * *
// * * *
// int main()
// {
//     int n;
//     cout<<"Enter the value of n : ";
//     cin>>n;
//     for(int i = 0; i<n; i++)
//     {
//         for(int j = 0; j<=i; j++)
//         {
//             cout<<"* ";
//         };
//         cout<<endl;
//     };
//     return 0;
// };

// PATTERN 1
// * * *
// * * *
// * * *
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*";
//         };
//         cout << endl;
//     };
// };