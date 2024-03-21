#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
    // creation
    unordered_map<string, int> m;

    // insertion1
    pair<string, int> p = make_pair("Mohit", 3);
    m.insert(p);

    // insertion2
    pair<string, int> pair2("Singh", 2);
    m.insert(pair2);

    // insertion3
    m["Jyoti"] = 8;

    // searching
    cout << m["Jyoti"] << endl;
    cout << m.at("Mohit") << endl;

    cout << m["Rahul"] << endl;
    cout << m.at("Rahul") << endl;

    // size
    cout << "Size : " << m.size() << endl;

    // to check presence
    cout << m.count("Honey") << endl;
    cout << m.count("Mohit") << endl;

    // erase
    m.erase("Rahul");
    cout << "Size : " << m.size() << endl;

    cout << endl;

    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;
    
    unordered_map<string, int> :: iterator it = m.begin();

    while (it != m.end()) {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}