#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(0);
    s.insert(5);

    cout << "Elements of set s : ";
    for (int i:s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.erase(s.begin());

    cout << "Elements of set s : ";
    for (int i:s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int> :: iterator it = s.begin();
    it++;

    s.erase(it);

    cout << "Elements of set s : ";
    for (int i:s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.insert(4);
    s.insert(5);
    s.insert(2);
    s.insert(0);
    s.insert(5);

    cout << "Elements of set s : ";
    for (int i:s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Is 5 present? : " << s.count(5) << endl;
    cout << "Is 1 present? : " << s.count(1) << endl;

    set<int> :: iterator itr = s.find(2);

    cout << "Elements greater than 2 : ";
    for (auto i=++itr ; i!=s.end() ; i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}