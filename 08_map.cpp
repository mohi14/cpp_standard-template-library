#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

/**
 ------------------ Map ---------------
-> key, value

 -> map<string, int> m;
 -> m[key] = value;


 -> insert, emplace
 -> count -> return the number of keys
 -> erase
 -> find
 -> size, empty


 -------------- Multi Map -----------
 -> multimap<string, int> m;

 --------------- Unordered Map -------------
 -> unordered_map<string,int> m;

 **/

int main()
{
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25});
    m.emplace("earpod", 30);

    m.erase("tv");

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    cout << "laptop = " << m["laptop"] << endl;
    cout << "count = " << m.count("laptop");

    cout << endl;
    if (m.find("camera") != m.end())
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }

    multimap<string, int> mulm;

    mulm.emplace("chips", 100);
    mulm.emplace("chips", 100);
    mulm.emplace("chips", 100);
    mulm.emplace("chips", 100);
    mulm.emplace("chips", 100);

    mulm.erase(mulm.find("chips"));

    for (auto p : mulm)
    {
        cout << p.first << " " << p.second << endl;
    }

    unordered_map<string, int> uom;

    uom["pen"] = 200;
    uom["pencil"] =120;
    uom["book"] = 30;
    uom["calculator"] =50;

    for(auto p: uom){
        cout << p.first << " "<< p.second<< endl;
    }


    return 0;
}