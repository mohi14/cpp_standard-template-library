#include <iostream>
#include <queue>

using namespace std;

/**
-------------- Queue ---------------
-> FIFO -> First In First Out

-> queue<int> q;

-> push, emplace
-> front
-> pop
-> size
-> empty
-> swap

**/

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    // cout << "front: " << q.front() << endl;

    queue<int> q2;

    q2.swap(q);

    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    cout << endl;

    cout << "q size: "<< q.size()<<endl;
    cout << "q2 size: "<< q2.size()<<endl;

    return 0;
}