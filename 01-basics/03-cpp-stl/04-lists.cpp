#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l1;
    l1.push_back(3);
    l1.push_back(4);
    l1.push_front(2);
    l1.push_front(1);
    l1.emplace_front(0);
    for (auto num : l1)
    {
        cout << num << endl;
    }
    return 0;
};

// 📍 bts
// - bts a doubly linked list is maintained for lists
// - bts a singly linked list is maintained for vectors

// 📍 complexities
// - insert() of vector is a costly operation
// - in comparison, push_front() of lists is very cheap operation

// 📍 lists
// - are similar to vectors
// - allows us to insert element from front as well
// - rest of the functions like : begin, end, clear, insert, size and swap are similar to that in vectors