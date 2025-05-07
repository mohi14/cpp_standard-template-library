#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

/**
 -------- Deque: Double Endded Queue ---------
 -> same as list, but its implemented as dynamic array
 -> l[2] cannot access the value of the list but d[2] can access the vlaue of the deque.

-> deque<int> d = {1,2,3,4};

-> push_back & push_front
-> emplace_back & emplace_front
-> pop_back & pop_front

-> size, erase, clear, begin, end, rbegin, rend, insert, front, back


---------- Sequence containers -----------
-> vector
-> list
-> deque
**/

int main()
{
    deque<int> d = {1, 2, 3, 4};

    cout << d[2] << endl;
    return 0;
}