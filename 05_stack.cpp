#include <iostream>
#include <stack>

using namespace std;

/**
 -------------- Stack ----------------
 -> LIFO -> Last In First Out
 -> stack<int> s;

 -> push, emplace,
 -> top
 -> pop
 -> size
 -> empty
 -> swap



 ***/

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;

    s2.swap(s);

    // cout << "top: " << s.top() << endl;

    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    cout << endl;
    cout << "s size: " << s.size() << endl;
    cout << "s2 size: "<< s2.size()<<endl;

    return 0;
}