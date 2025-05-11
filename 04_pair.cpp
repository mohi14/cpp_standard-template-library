#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    pair<int, int> p = {1, 5};
    cout << p.first << endl;
    cout << p.second << endl;

    pair<string, int> h = {"Mohi", 56};

    cout << h.first << endl;

    pair<int, pair<char, int>> m = {1, {'a', 3}};

    cout << m.first << endl;
    cout << m.second.first << endl;
    cout << m.second.second << endl;

    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};
    vec.push_back({4,5}); //insert
    vec.emplace_back(5,6); // in-place objects create

    for (pair<int, int> v : vec)
    {
        cout << v.first << " " << v.second << endl;
    }
}