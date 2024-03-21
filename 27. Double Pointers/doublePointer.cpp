#include<iostream>
using namespace std;

int main() {
    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << "Address of i : " << &i << endl;
    cout << "Value of p : " << p << endl;
    cout << "Address of p : " << &p << endl;
    cout << "Value at address in p2 : " << *p2 << endl;

    cout << endl;

    cout << "i : " << i << endl;
    cout << "*p : " << *p << endl;
    cout << "**p2 : " << **p2 << endl;

    return 0;
}