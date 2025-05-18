#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 ------------------- Algorithms ----------------
 -> Reverse
    -> reverse(v.begin(), v.end())
-> Next Permutation
    -> next_permutation(v.begin(), v.end())
-> swap, min, max
-> Max & Min Element
   -> max_element(v.begin(), v.end())
   -> min_element(v.begin(), v.end())
-> Binary Search
   -> binary_search(v.begin(), v.end(), target)
-> Count Set Bits
  -> __builtin_popcount()
  -> __builtin_popcountl()
  -> __builtin_popcountll()
    
 **/

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    reverse(vec.begin(), vec.end());

    for (auto val : vec)
    {
        cout << val << " ";
    }

    cout << endl;

    reverse(vec.begin() + 1, vec.begin() + 3);

    for (auto val : vec)
    {
        cout << val << " ";
    }

    cout << endl;

    string s = "abc";

    next_permutation(s.begin(), s.end());

    cout << s << endl;

    string s1 = "bca";

    prev_permutation(s1.begin(), s1.end());
    cout << s1 << endl;
    return 0;
}