#include<iostream>
using namespace std;

int main() {
    int num = 5;

    cout << "num : " << num << endl;

    // address of operator
    cout << "Address of num : " << &num << endl;

    int *ptr = &num;

    cout << "Address in ptr : " << ptr << endl;
    cout <<  "Value is : " << *ptr << endl;
    cout << "Size of integer is : " << sizeof(num) << endl;
    cout << "Size of pointer is : " << sizeof(ptr) << endl;
    cout << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address in p2 : " << p2 << endl;
    cout << "Value is : " << *p2 << endl;
    cout << "Size of double is : " << sizeof(d) << endl;
    cout << "Size of pointer is : " << sizeof(p2) << endl;
    cout << endl;

    cout << "Before : " << num << endl;
    (*ptr)++;
    cout << "After : " << num << endl;

    cout << ++(*ptr) << endl;
}