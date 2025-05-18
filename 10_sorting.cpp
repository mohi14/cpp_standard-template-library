#include <iostream>

using namespace std;

/**
---------------- Sorting --------------
-> sort(arr, arr+n)
-> sort(arr, arr+n, greater<int>())
-> sort(v.begin(), v.end())
 **/

// custom comparator

bool comparator(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first < p2.first)
        return true;
    else
        return false;
}

int main()
{
    int arr[5] = {3, 4, 1, 8, 2};

    sort(arr, arr + 5);

    for (int val : arr)
    {
        cout << val << " ";
    }

    cout << endl;

    vector<int> vec = {3, 5, 1, 7, 9};

    sort(vec.begin(), vec.end());

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    // printing in decending order

    sort(vec.begin(), vec.end(), greater<int>());
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    vector<pair<int, int>> vec1 = {{3, 1}, {2, 2}, {7, 1}, {5, 3}};

    sort(vec1.begin(), vec1.end());

    for (auto val : vec1)
    {
        cout << val.first << " " << val.second << endl;
    }

    cout << "Custom comparator" << endl;
    sort(vec1.begin(), vec1.end(), comparator);

    for (auto val : vec1)
    {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}