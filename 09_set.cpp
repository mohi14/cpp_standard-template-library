#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

/**
 ----------------- Set --------------
 -> set<int> s;
 
 
-> insert, emplace
-> count 
-> erase
-> find
-> size, empty


-> Multi set // its can duplicate value
   -> multiset<int> s;
-> Unordered set // its set value in a unorder way
   -> unordered_set<int> s;
  
 **/

int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    //set ignore duplicate values
    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout<< s.size()<<endl;

    cout << "lower bound = " << *(s.lower_bound(4))<<endl; //4 -> should not be less than key
    cout << "upper bound = " << *(s.upper_bound(4))<< endl; //5 -> greater than key

    for(auto val:s){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}