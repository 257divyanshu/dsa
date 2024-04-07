#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

// VECTOR
// arrays are static
// vectors are dynamic
// include the vector header file
// iterators point some memory address
int main()
{
    // example 1
    // vector<int> v1; // declaration
    // v1.push_back(1); // inserting element at the end
    // cout<<v1[0]<<endl; // accessing the element at an index
    // v1.emplace_back(2); // another way to inert element
    // cout<<v1[1]<<endl;
    // example 2
    // vector<int> v2(5); // vector of size 5
    // cout<<v2.size()<<endl; // to access the size of the vector
    // example 3
    // vector<int> v3 (5,3); // size 5 with all elements set to 3
    // cout<<v3[0]<<endl;
    // cout<<v3[1]<<endl;
    // cout<<v3[2]<<endl;
    // vector<int> v4(v3); // copying vector v3 into vector v4
    // cout<<v4[0]<<endl;
    // cout<<v4[1]<<endl;
    // cout<<v4[2]<<endl;
    // example 4
    // vector<int> vect = {1,2,3,4};
    // // cout<<vect.at(0)<<endl; // at method
    // vector<int>::iterator it = vect.begin(); // points to the first element
    // // cout<<*(it)<<endl;
    // // cout<<*(it+1)<<endl;
    // vector<int>::iterator it1 = vect.end(); // points the space after the last element
    // // vector<int>::iterator it2 = vect.rend(); // DOUBT // why is this throwing error
    // // vector<int>::iterator it3 = vect.rbegin(); // DOUBT // why is this throwing error
    // cout<<vect.back()<<endl; // gives us the lsat element
    // auto iter = vect.begin(); // shorter way to use iterators
    // cout<<*(iter)<<endl;
    // example 5
    vector<int> vect = {1,2,3,4};
    // for(auto it : vect) // for each loop for tranversing a vector
    // {
    //     cout<<it<<" ";
    // };
    // cout<<endl;
    // vect.erase(vect.begin(),vect.begin()+1);
    // vect.erase(vect.begin()+2);
    // for(auto it : vect)
    // {
    //     cout<<it<<" ";
    // };
    // vect.insert(vect.begin(),5); // one 5 will be inserted at the specified position
    // vect.insert(vect.begin(),3,5); // 3 5s will be inserted at the specified position
    // vect.pop_back(); // removes the last element
    vector<int> vect2 = {8,9}; 
    // vect2.swap(vect); // swapping
    // for(auto it : vect)
    // {
    //     cout<<it<<" ";
    // };
    // cout<<endl;
    // for(auto it : vect2)
    // {
    //     cout<<it<<" ";
    // };
    // vect2.insert(vect2.begin(),vect.begin(),vect.end());
    vect2.clear(); // clears
    for(auto it : vect2)
    {
        cout<<it<<" ";
    };
    return 0;
};

// PAIR
// is a datatype
// include the utility header file
// int main()
// {
//     // example 1
//     // pair<int,int> p = {1,3}; // declaration
//     // cout<<p.first<<" "<<p.second<<endl; // accessing elements
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