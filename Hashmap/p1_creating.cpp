#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    // creation
    unordered_map<string, int> m;

    // insertion

    // first way
    pair<string, int> p = make_pair("sachin", 1);
    m.insert(p);

    // second way
    pair<string, int> p1("sachin1", 2);
    m.insert(p1);

    // third way
    m["rat"] = 3;

    // searcch
    cout << m["rat"] << endl;
    cout << m["sachin1"] << endl;
    // sizze
    cout << m.size() << endl;

    // check presencce
    cout << m.count("sachin") << endl;

    // eraze
    // m.erase("rat");
    cout << m.size() << endl;
    // traverse the map using for each
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // traverse the map using iterator
    unordered_map<string, int>::iterator i = m.begin();
    while (i != m.end())
    {
        cout << i->first << " " << i->second << endl;
        i++;
    }
}