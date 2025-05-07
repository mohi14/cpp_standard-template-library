#include <iostream>
#include <vector>
#include <list>



using namespace std;

/**
 -------- List ---------
 -> same as vector, vector is implemented as dynamic array where list is implemented as dowbly linked list
-> list<int> L = {1,2,3};

-> push_back & push_front
-> emplace_back & emplace_front
-> pop_back & pop_front

-> size, erase, clear, begin, end, rbegin, rend, insert, front, back

 **/

int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    for(int val:l){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}