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
    // vector<int> v2(v1);
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
    // vector<int> vect1 = {1,2,3,4,5};
    // cout<<vect1.back()<<endl; // 5
    // 📍 iterating over the vector using iterators
    // vector<int> vect1 = {1, 2, 3, 4, 5};
    // for (vector<int>::iterator it = vect1.begin(); it != vect1.end(); it++)
    // {
    //     cout << *(it) << endl;
    // }
    // 📍 iterating over the vector using the 'auto' keyword
    // vector<int> vect1 = {1, 2, 3, 4, 5};
    // for (auto it = vect1.begin(); it != vect1.end(); it++)
    // {
    //     cout << *(it) << endl;
    // }
    // 📍 iterating over the vector
    // vector<int> vect1 = {1, 2, 3, 4, 5};
    // for(int num : vect1){
    //     cout<<num<<endl;
    // }
    // for(auto num : vect1){
    //     cout<<num<<endl;
    // }
    // 📍 erase() function
    // vector<int> vect1 = {1, 2, 3, 4, 5};
    // auto it1 = vect1.begin();
    // - to delete one element, pass the iterator pointing to it
    // vect1.erase(it1);
    // - to delete a range of elements, pass the starting (inclusive) and the ending (exclusive) iterator
    // vect1.erase(it1, it1+2);
    // for(auto num : vect1){
    //     cout<<num<<endl;
    // };
    // 📍 insert() function
    // vector<int> vect1 = {1, 2, 3, 4, 5};
    // - to insert an element, first specify the iterator pointing to the location where the element is to be inserted, then specify the element which is to be inserted
    // vect1.insert(vect1.begin(), 0);
    // - to insert multiple occurences of an element, first specify the iterator pointing to the location where the first element is to be inserted, then specify the number of occurences of the elements, then specify the element which is to be inserted
    // vect1.insert(vect1.begin(),3,0);
    // - to copy a vector into another using insert:
    // vector<int> vect2;
    // vect2.insert(vect2.begin(), vect1.begin(), vect1.end());
    // for(auto num : vect1){
    //     cout<<num<<endl;
    // };
    // for(auto num : vect2){
    //     cout<<num<<endl;
    // };
    // 📍 pop_back() removes the last element
    // vector<int> vect1 = {1, 2, 3, 4, 5};
    // vect1.pop_back();
    // for (auto num : vect1)
    // {
    //     cout << num << endl;
    // };
    // 📍 size()
    // vector<int> vect1 = {1, 2, 3, 4, 5};
    // cout<<vect1.size()<<endl;
    // 📍 clear()
    // vector<int> vect1 = {1, 2, 3, 4, 5};
    // vect1.clear();
    // cout<<vect1.size()<<endl;
    // 📍 empty()
    // vector<int> vect1 = {1, 2, 3, 4, 5};
    // cout<<vect1.empty()<<endl;
    // 📍 swap()
    vector<int> vect1 = {1, 2, 3, 4, 5};
    vector<int> vect2 = {5, 4, 3, 2, 1};
    vect1.swap(vect2);
    for (auto num : vect2)
    {
        cout << num << endl;
    };
    return 0;
};