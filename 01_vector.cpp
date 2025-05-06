#include <iostream>
#include <vector>

/**
 -------- C++ STL ---------
 -> Containers
 -> Iterators
 -> Algorithms
 -> Functors

 -------- Vector --------
 -> vector<int> vec;
 -> vector<int> vec = {1,2};
 -> vector<int> vec(3,10);
 -> vector<int> vec2(vec1);

 -> size & capacity
 -> push_back & pop_back
 -> emplace_back
 -> at() or []
 -> front & back

 -> erase
 -> insert
 -> clear
 -> empty

 ------ Vector Iterators -------
 -> begin
 -> end
 -> rbegin
 -> rend

 **/

using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    vec.pop_back();

    cout << "value at idx 2 is " << vec.at(2) << " or " << vec[2] << endl;
    cout << "first elemetn value: " << vec.front() << endl;
    cout << "last elemetn value: " << vec.back() << endl;

    vec.at(2) = 100;
    vec[3] = 200;

    for (int val : vec)
    {
        cout << val << " ";
    }

    vector<int> vec1(3, 10);

    cout << endl;

    for (int val1 : vec1)
    {
        cout << val1 << " ";
    }

    vec.clear(); // clear all element of the vector.

    vector<int> newVec = {1, 2, 3, 4, 5, 6, 7};

    newVec.erase(newVec.begin() + 1); // 2 will be removed

    newVec.erase(newVec.begin() + 1, newVec.begin() + 3); // 3 and 4 will be removed

    newVec.insert(newVec.begin() + 1, 100); // 100 will be insert in idx 1;

    cout << endl;
    for (int val : newVec)
    {
        cout << val << " ";
    }

    cout << endl;

    cout << "is Empty: " << vec.empty() << endl; // it vector is empty, it will show output 1, otherwise 0;

    vector<int> avec = {1, 2, 3, 4, 5};

    vector<int>::iterator it;

    // forward
    for (it = avec.begin(); it != avec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // also can written like this, because compiler can understand the iterator type.
    for (auto it = avec.begin(); it != avec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // backward
for(auto it = avec.rbegin(); it != avec.rend(); it++){
    cout << *it << " ";
}
}