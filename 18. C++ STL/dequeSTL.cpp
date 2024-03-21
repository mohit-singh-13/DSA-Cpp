#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque <int> d;

    d.push_back(1);
    d.push_front(2);

    cout << "Elements in deque d : ";
    for (int i:d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Element at 1st index : " << d.at(1) << endl;
    cout << "Front element : " << d.front() << endl;
    cout << "Back element : " << d.back() << endl;
    cout << "Empty or not : " << d.empty() << endl;

    d.pop_front();

    cout << "Elements in deque d : ";
    for (int i:d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.pop_back();

    cout << "Elements in deque d : ";
    for (int i:d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.push_back(4);
    d.push_front(3);

    cout << "Elements in deque d : ";
    for (int i:d)
    {
        cout << i << " ";
    }
    cout << endl;

    d.erase(d.begin(), d.begin() + 1);
    cout << "Elements in deque d : ";
    for (int i:d)
    {
        cout << i << " ";
    }
    cout << endl;
}