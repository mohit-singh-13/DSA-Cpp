#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector <int> v;

    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity : " << v.capacity() << endl;
    cout << "Size : " << v.size() << endl;

    cout << "Element at 2nd index : " << v.at(2) << endl;
    cout << "First element : " << v.front() << endl;
    cout << "Last element : " << v.back() << endl;

    cout << "Elements in vector v : ";
    for (int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Vector v before pop : ";
    for (int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "Vector v after pop : ";
    for (int i:v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Clearing v." << endl;
    v.clear();
    cout << "Size of v : " << v.size() << endl;
    cout << "Capacity of v : " << v.capacity() << endl;

    vector <int> a(6, 1);

    cout << "Elements in vector a : ";
    for (int i:a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector <int> b(a);

    cout << "Elements in vector b : ";
    for (int i:b)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}