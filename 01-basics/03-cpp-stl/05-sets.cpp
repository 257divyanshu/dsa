#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 📍 creating a set
    // set<int> s1;
    // 📍 inserting elements
    // set<int> s1;
    // s1.emplace(3);
    // s1.insert(2);
    // s1.insert(2); // won't get inserted again
    // s1.insert(4);
    // 📍 find()
    // - returns an iterator pointing to the element
    // - if the element doesn't exist, iterator is assigned s1.end()
    // set<int> s1;
    // s1.emplace(3);
    // s1.insert(2);
    // s1.insert(4);
    // auto it3 = s1.find(3);
    // auto it3 = s1.find(5); // will point to s1.end()
    // 📍 erase()
    // set<int> s1;
    // s1.emplace(3);
    // s1.insert(2);
    // s1.insert(4);
    // s1.insert(5);
    // - either provide the element to be deleted
    // s1.erase(2);
    // - or provide the iterator pointing to the element to be deleted
    // auto it2 = s1.find(2);
    // s1.erase(it2);
    // - to erase a range of values (using iterators)
    // auto it2 = s1.find(2);
    // auto it5 = s1.find(5);
    // s1.erase(it2, it5); // will delete 2, 4 and 5
    // 📍 count()
    set<int> s1;
    s1.emplace(3);
    s1.insert(2);
    s1.insert(4);
    cout<<s1.count(2)<<endl; // 1
    // 📍 lower_bound() and upper_bound()
    // 🟨 pending
};

// 📍 time complexity
// - everything happens in O(log(N))

// 📍 sets 
// - store unique elements in a sorted manner
// - bts, a tree is maintained for sets