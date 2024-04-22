#include <bits/stdc++.h>
using namespace std;

// SETS
// sets are used stored unique elements in sorted format
int main()
{
    // declaration
    set<int> set1;
    set<int> set2;
    // insertion
    set1.insert(1);
    set1.insert(2);
    set1.insert(3);
    set2.insert(4);
    set2.insert(5);
    set2.insert(6);
    // iterating over a set
    for(auto it : set1)
    {
        cout<<it<<" ";
    };
    cout<<endl;
    for(auto it : set2)
    {
        cout<<it<<" ";
    };
    cout<<endl;
    // swap function
    // set1.swap(set2);
    // begin(), end() work the same way
    // find() function
    // auto it = set1.find(2);
    // cout<<*(it)<<endl;
    // erase() function
    // for insertion single element
    // set1.erase(2);
    // set2.erase(4);
    // for erasing a range of elements
    // auto it1 = set1.find(2);
    // auto it2 = set1.find(3);
    // set1.erase(it1,it2);
    // count() function
    // returns either 1 or 0
    // cout<<set1.count(1)<<endl;
    // count() function
    // for counting the number of occurences
    // cout<<set1.count(1)<<endl;
    return 0;
};
// in sets everything happens with O(logn)
// MULTISET
// elements are stored in sorted manner
// elements need not be unique
// if we erase an element in a multset then all the occurences of the element in the multiset will be erased
// if we erase an element present at the specified iterator, then only the location that iterator points to will be deleted
// UNORDERED SET
// store unique elements in unsorted order
// TC of most operation in unordered set is O(1) is worst case O(n)

// MAP
// keys are unique but values need not be unique
// maps stores unique keys in sorted order
// int main()
// {
//     // declaration
//     map<int,char> map1;
//     // insertion
//     map1.insert({1,'a'});
//     map1.insert({2,'b'});
//     map1.insert({3,'c'});
//     map1.insert({4,'d'});
//     map1.insert({5,'e'});
//     // iterating a map
//     for(auto it : map1)
//     {
//         cout<<it.first<<" "<<it.second<<endl;
//     };
//     // accessing
//     // cout<<map1[1]<<endl;
//     // finding
//     // auto it = map1.find(3);
//     // cout<<(*(it)).second<<endl;
//     // if the key isn't found it will point to map1.end();
//     // earse function
//     // map1.erase(2);
//     // the erase function of map cannot be used to erase a range of elements
//     // it can only be used to erase a specified key-value pair from the map
//     // size() function
//     // cout<<map1.size()<<endl;
//     // empty() function
//     // to check whether a map is empty or not
//     // cout<<map1.empty()<<endl;
//     // swap() function
//     // to swap on array with another 
//     // map1.swap(map2)
//     return 0;
// };
// multiMap maps are used for storing duplicate keys in sorted manner
// unorderedMap maps are used for storing key value pairs in unsorted format
// maps work in TC of O(n)
// unordered maps work in TC of O(1) in most cases (in worst case O(n))

// VECTOR
// arrays are static
// vectors are dynamic
// include the vector header file
// iterators point some memory address
// int main()
// {
//     // example 1
//     // vector<int> v1; // declaration
//     // v1.push_back(1); // inserting element at the end
//     // cout<<v1[0]<<endl; // accessing the element at an index
//     // v1.emplace_back(2); // another way to inert element
//     // cout<<v1[1]<<endl;
//     // example 2
//     // vector<int> v2(5); // vector of size 5
//     // cout<<v2.size()<<endl; // to access the size of the vector
//     // example 3
//     // vector<int> v3 (5,3); // size 5 with all elements set to 3
//     // cout<<v3[0]<<endl;
//     // cout<<v3[1]<<endl;
//     // cout<<v3[2]<<endl;
//     // vector<int> v4(v3); // copying vector v3 into vector v4
//     // cout<<v4[0]<<endl;
//     // cout<<v4[1]<<endl;
//     // cout<<v4[2]<<endl;
//     // example 4
//     // vector<int> vect = {1,2,3,4};
//     // // cout<<vect.at(0)<<endl; // at method
//     // vector<int>::iterator it = vect.begin(); // points to the first element
//     // // cout<<*(it)<<endl;
//     // // cout<<*(it+1)<<endl;
//     // vector<int>::iterator it1 = vect.end(); // points the space after the last element
//     // // vector<int>::iterator it2 = vect.rend(); // DOUBT // why is this throwing error
//     // // vector<int>::iterator it3 = vect.rbegin(); // DOUBT // why is this throwing error
//     // cout<<vect.back()<<endl; // gives us the lsat element
//     // auto iter = vect.begin(); // shorter way to use iterators
//     // cout<<*(iter)<<endl;
//     // example 5
//     vector<int> vect = {1,2,3,4};
//     // for(auto it : vect) // for each loop for tranversing a vector
//     // {
//     //     cout<<it<<" ";
//     // };
//     // cout<<endl;
//     // vect.erase(vect.begin(),vect.begin()+1);
//     // vect.erase(vect.begin()+2);
//     // for(auto it : vect)
//     // {
//     //     cout<<it<<" ";
//     // };
//     // vect.insert(vect.begin(),5); // one 5 will be inserted at the specified position
//     // vect.insert(vect.begin(),3,5); // 3 5s will be inserted at the specified position
//     // vect.pop_back(); // removes the last element
//     vector<int> vect2 = {8,9}; 
//     // vect2.swap(vect); // swapping
//     // for(auto it : vect)
//     // {
//     //     cout<<it<<" ";
//     // };
//     // cout<<endl;
//     // for(auto it : vect2)
//     // {
//     //     cout<<it<<" ";
//     // };
//     // vect2.insert(vect2.begin(),vect.begin(),vect.end());
//     vect2.clear(); // clears
//     for(auto it : vect2)
//     {
//         cout<<it<<" ";
//     };
//     return 0;
// };

// PAIR
// is a datatype
// include the utility header file
// int main()
// {
//     // example 1
//     pair<int,int> p = {1,3}; // declaration
//     cout<<p.first<<" "<<p.second<<endl; // accessing elements
//     // example 2
//     // pair<int,pair<int,int>> p2 = {1,{2,3}};
//     // cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;
//     // example 3
//     // pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
//     // cout<<arr[0].first<<endl;
//     // cout<<arr[0].second<<endl;
//     // cout<<arr[1].first<<endl;
//     // cout<<arr[1].second<<endl;
//     // example 4
//     return 0;
// };

// STL PARTS
// algorithm, container, function, iterator