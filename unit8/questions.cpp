#include <bits/stdc++.h>
using namespace std;



// DIVIDE TWO INTEGERS
// https://leetcode.com/problems/divide-two-integers/description/
// BRUTEFORCE METHHOD
// keep adding divisor to itself untill we exceed divident
// increment count in each addition
// the count will the answer
// tc is O(dividend)
// will cause TLE
// OPTIMIZED SOLUTION
// long long divide(long long dividend, long long divisor)
// {
//     long long n = abs(dividend), d = abs(divisor);
//     bool neg = false;
//     if (dividend < 0 && divisor >= 0)
//         neg = true;
//     else if (dividend >= 0 && divisor < 0)
//         neg = true;
//     long long ans = 0;
//     while (n >= d)
//     {
//         long long count = 0;
//         while (n > (d << (count + 1)))
//         {
//             count++;
//         }
//         ans += 1 << count;
//         n -= (d * (1 << count));
//     }
//     if (neg)
//         ans *= -1;
//     if (ans > INT_MAX)
//     {
//         return INT_MAX;
//     }
//     else if (ans < INT_MIN)
//     {
//         return INT_MIN;
//     }
//     else
//     {
//         return ans;
//     };
// }

// FIND XOR OF NUMBERS FROM L TO R
// BRUTEFORCE
// iterate and keep doing xor
// tc is O(n)
// sc is O(1)
// OPTIMIZED
// int xorTill(int a)
// {
//     if (a % 4 == 0)
//     {
//         return a;
//     }
//     else if (a % 4 == 1)
//     {
//         return 1;
//     }
//     else if (a % 4 == 2)
//     {
//         return a + 1;
//     }
//     else
//     {
//         return 0;
//     }
// };
// int findXOR(int a, int b)
// {
//     return xorTill(a - 1) ^ xorTill(b);
// };
// TC is O(1)
// SC is O(1)

// FIND THE NUMBER THAT APPEARED ODD NUMBER OF TIMES
// https://www.naukri.com/code360/problems/one-odd-occurring_4606074?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// one method
// is to make a hash map for the array
// then traverse the hash map to find which element occured once
// TC of this approach is O(n*logn/2 + n/2)
// n for iterating the array
// logn/2 forr hashing into the hash_map
// n/2 for tranversing the map once again to find the element with occurence as 1
// n/2 because it's the size of the map
// second method (OPTIMIZED)
// traverse the array and do xor of them... return the r esult
// tc is O(n)
// sc is O(1)

// FLIP BITS
// https://www.naukri.com/code360/problems/flip-bits_8160405?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// int flipBits(int a, int b){
//     // Write your code here.
//     int count = 0;
//     int xora = a^b;
//     while(xora)
//     {
//         xora&=(xora-1);
//         count++;
//     };
//     return count;
// };
// TC is O(log2(a^b))
// SC is O(1)

// SET THE RIGHTMOST UNSET BIT
// https://www.naukri.com/code360/problems/set-the-rightmost-unset-bit_8160456?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
// int setBits(int n)
// {
//     // Write your code here.
//     int ans = n | (n + 1);
//     if (ans > (2 * n))
//     {
//         return n;
//     }
//     else
//     {
//         return n | (n + 1);
//     };
// };

// COUNT NUMBER OF SET BITS
// https://www.naukri.com/code360/problems/count-total-set-bits_784?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// int countSetBits(int m) {
//   // Write your code here
//   int count = 0;
//   for (int n = 1; n <= m; n++) {
//       int i = n;
//       while(i!=0)
//       {
//           count++;
//           i = i&(i-1);
//       };
//   };
//   return count;
// }
// int main()
// {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     countSetBits(n);
//     return 0;
// }

// CHECKF IF POWER OR 2 OR NOT
// https://www.naukri.com/code360/problems/power-of-two_893061?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// https://leetcode.com/problems/power-of-two/
// bool isPowerOfTwo(int n)
// {
//     if (n <= 0)
//         return false;
//     if ((n & (n - 1)) == 0)
//     {
//         return true;
//     };
//     return false;
// }

// UNSETTING THE RIGHT MOST SET BIT
// int unsetRightMostSetBit(int n)
// {
//     return n&(n-1);
// };
// int main()
// {
//     for(int i = 1; i<=10; i++)
//     {
//         cout<<i<<"  "<<unsetRightMostSetBit(i)<<endl;
//     };
//     return 0;
// };

// TOGGLING THE ITH BIT
// void unsetIthBit(int &n, int i)
// {
//     n = n^(1<<(i-1));
// };
// int main()
// {
//     int n;
//     int i;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"Enter the value of i: ";
//     cin>>i;
//     unsetIthBit(n,i);
//     cout<<n<<endl;
//     vector<int> vect = {1,2,3,3};
// };

// BIT MANIPULATION (COMBINING FIND THE ITH BIT, SET THE ITH BIT, UNSET THE ITH BIT)

// CLEARING THE ITH BIT
// void unsetIthBit(int &n, int i)
// {
//     n = n&~(1<<(i-1));
// };
// int main()
// {
//     int n;
//     int i;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     cout<<"Enter the value of i: ";
//     cin>>i;
//     unsetIthBit(n,i);
//     cout<<n<<endl;
//     vector<int> vect = {1,2,3,3};
// };

// SETTING THE ITH BIT
// void setIthBit(int &n, int i)
// {
//     cout<<(1<<(i-1))<<endl;
//     n = n|(1<<(i-1));
// };
// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int i;
//     cout<<"Enter the value of i: ";
//     cin>>i;
//     setIthBit(n,i);
//     cout<<n<<endl;
//     return 0;
// }

// CHECK IF EVEN OR NOT
// https://www.naukri.com/code360/problems/odd-even_7993579?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
// string oddEven(int N){
//     // Write your code here.
//     if((N&1)==0)
//     {
//         return "even";
//     }
//     else
//     {
//         return "odd";
//     };
// };

// CHECK IF THE ITH BIT IS SET OR NOT
// FIRST METHOD
// right shift the number by k-1 and check it's set or not
// to check if it's set or not do AND operation with 1
// if it returns zero then the bit was unset
// if it doesn't return zero then the bit was set
// bool isKthBitSet(int n, int k)
// {
//     return ((n>>(k-1))&1)!=0;
// }
// SECOND METHOD
// left shift 1 by k-1 and checks if it's set or not
// to check if it's set or not do AND with n
// if it returns zero then the bit was unset
// if it doesn't return zero then the bit was set
// bool isKthBitSet(int n, int k)
// {
//     return (n&(1<<(k-1)))!=0;
// }

// SWAP TWO NUMBERS
// https://www.naukri.com/code360/problems/swap-two-numbers_1380853?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
// void swapNumber(int &a, int &b)
// {
//     a = a ^ b;
//     b = a ^ b;
//     a = a ^ b;
// }

// NOT OPERATOR
// ~ symbol
// flip the bits
// int main(){
//     int n = 5;
//     cout<<~n<<endl;
//     return 0;
// };

// PRINTING NEGATIVE INTEGERS
// we can find out whether an integer is negative or not by seeing it's MSB
// if the MSB is unset then it's a positive integer
// if the MSB is set the it's a negative integer
// positive integers are printed without any head scratching
// for printing the negative numbers we print the integer corresponding to the 2s compliment of the binary representation of the negative integer with a negative sign 
// to print 11111111111111111111111111111001
// we will find it's 2s compliment which comes out to be (00000000000000000000000000000110) + (1) = (00000000000000000000000000000111) which is 7
// so -7 will be printed

// STORING NEGATIVE INTEGERS
// it will be assumed +ve
// it's twos compliment will be stored

// STORING POSITIVE INTEGERS
// msb will be set 0
// and the integer's 31 binary representation will be stored

// LEFT SHIFT OPERATOR
// x << k => x*(2^k)
// left shifting INT_MAX will result in overflow

// RIGHT SHIFT OPERATOR
// 13 >> 1
// 13 is 1101
// right shift by 1
// 0110
// so 13 >> 1 => 6
// x >> k => x/(2^k)

// XOR OPERATOR
// no of 1s odd => 1
// no of 1s even => 0
// 1 1 0 1
// ^ 1 1 1
// 1 0 1 0

// OR OPERATOR
// one true => true
// all false => false

// AND OPERATOR
// all true => true
// one false => false

// TWOS COMPLIMENT
// do ones compliment and add 1 to it

// ONES COMPLIMENT
// flip the bits

// BINARY TO DECIMAL
// 1101 => 1*1 + 0*2 + 1*4 + 1*8 => 13
// so 1101 is 13
// 111 => 1*1 + 0*2 + 1*4 => 7
// so 111 is 7
// int binaryToDecimal(string s)
// {
//     int n = s.length();
//     int result = 0;
//     int mult = 1;
//     for(int i = n-1; i>=0; i--)
//     {
//         result += (s[i]-48)*mult;
//         mult*=2;
//         // cout<<"result is "<<result<<endl;
//     };
//     return result;
// };
// int main()
// {
//     string str;
//     cout<<"Enter the binary string : ";
//     cin>>str;
//     cout<<binaryToDecimal(str)<<endl;
//     return 0;
// };
// TC is O(log2n)
// SC is O(1)
// because we have made a single variable of int datatype to do the work

// DECIMAL TO BINARY
// 2 13  1
// 2  6  0
// 2  3  0
//    1
// so 13 in binary is 1001
// 2 7 1
// 2 3 1
//   1
// so 7 in binary is 111
// string decimalToBinary2(int n)
// {
//     string str = "";
//     while(n!=0)
//     {
//         if(n%2==1)
//         {
//             str += "1";
//         }
//         else
//         {
//             str += "0";
//         };
//         n>>=1;
//     };
//     reverse(str.begin(),str.end());
//     return str;
// };
// string decimalToBinary1(int n)
// {
//     string str = "";
//     while(n!=0)
//     {
//         if(n&1)
//         {
//             str += "1";
//         }
//         else
//         {
//             str += "0";
//         };
//         n>>=1;
//     };
//     reverse(str.begin(),str.end());
//     return str;
// };
// // the decimalToBinary1 is better than the other one because it is using AND operator which is a bitwise operator
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<"Binar equivalent is : ";
//     cout<<decimalToBinary1(n)<<endl;
//     cout<<decimalToBinary2(n)<<endl;
//     return 0;
// };
// // TC is O(log2n)
// // SC is O(log2n)
// // because we are using an array of length O(log2n) for doing the task