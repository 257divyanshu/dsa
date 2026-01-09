// 📍 vectors
// - vectors are dynamic
// - arrays are not dynamic
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 📍 declaring a vector
    // vector<int> vect1; // creates an empty vector
    // 📍 push_back()
    // vector<int> vect1;
    // vect1.push_back(1);
    // vect1.push_back(2);
    // vect1.push_back(3);
    // 📍 emplace_back() (is faster than push_back())
    // vector<int> vect1;
    // vect1.emplace_back(1);
    // vect1.emplace_back(2);
    // vect1.emplace_back(3);
    // 📍 creating a vector of pair datatype
    // vector<pair<int,int>> vect1;
    // vect1.push_back({1,2});
    // vect1.emplace_back(3,4); // valid
    // vect1.emplace_back({3,4}); // invalid
    // 📍 creating a vector with some elements set to a particular value
    // vector<int> vect1(5,10); // 5 elements with value 10
    // 📍 creating a vector with some elements without specifying their value
    // vector<int> vect1(5); // 5 elements with value 0 or any garbage value (the value depends on the compiler)
    // 📍 copying a vector into another
    // vector<int> v1 = {1,2,3};
    // vector<int> v2 = v1;
    // 📍 accessing vector's elements
    // vector<int> v1 = {1,2,3};
    // cout<<v1[0]<<endl;
    // cout<<v1.at(0)<<endl;
    // 📍 iterators
    // vector<int> v1 = {1,2,3,4,5,6,7};
    // vector<int>::iterator it1 = v1.begin();
    // - the iterator 'it1' points to the first element
    // vector<int>::iterator it2 = v1.end();
    // - the iterator 'it2' points to the memory space after the last element
    // vector<int>::iterator it3 = v1.rbegin(); // ❔ why this is causing issues?
    // vector<int>::iterator it4 = v1.rend(); // ❔ why this is causing issues?
    // cout<<*(it1++)<<endl; // 1
    // cout<<*(it1++)<<endl; // 2
    // cout<<*(it1++)<<endl; // 3
    // cout<<*(--it2)<<endl; // 7
    // cout<<*(--it2)<<endl; // 6
    // cout<<*(--it2)<<endl; // 5
    // 📍 back()
    vector<int> vect1 = {1,2,3,4,5};
    cout<<vect1.back()<<endl; // 5 
    // ⏸️ 21:30
    return 0;
};