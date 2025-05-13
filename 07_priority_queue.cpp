#include <iostream>
#include <queue>

using namespace std;

/**
 ------------ Priority Queue ------------
 -> largest is the most priority

 -> priority_queue<int> q;
 ->priority_queue<int, vector<int>, greater<int>> q; -> show value in reverse order


 -> push, emplace
 -> top
 -> pop
 -> size
 -> empty
 **/

int main()
{
    // priority_queue<int> q;
    priority_queue<int, vector<int>, greater<int>> q;

    q.push(10);
    q.push(13);
    q.push(9);
    q.push(12);
    q.push(5);

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }

    cout << endl;

    return 0;
}