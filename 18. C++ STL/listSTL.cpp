#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(1);
    l.push_front(5);

    cout << "Elements in list l : ";
    for (int i:l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of l : " << l.size() << endl;

    l.pop_front();

    cout << "Elements in list l : ";
    for (int i:l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of l : " << l.size() << endl;

    l.push_front(3);

    cout << "Elements in list l : ";
    for (int i:l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of l : " << l.size() << endl;

    l.erase(l.begin());

    cout << "Size of l : " << l.size() << endl;

    l.erase(l.end());

    cout << "Size of 1 : " << l.size() << endl;

    list<int> n(5, 99);

    cout << "Elements in list n : ";
    for (int i:n)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}