#include<iostream>
using namespace std;

int main() {
    // int arr[10] = {23, 122, 41, 67};

    // cout << "Address of first memory block is : " << arr << endl;
    // cout << arr[0] << endl;
    // cout << "Address of first memory block is : " << &arr[0] << endl;

    // cout << "4th : " << *arr << endl;
    // cout << "5th : " << *arr + 1 << endl;
    // cout << "6th : " << *(arr + 1) << endl;
    // cout << "7th : " << arr[2] << endl;
    // cout << "8th : " << *(arr + 2) << endl;
    // cout << "9th : " << 3[arr] << endl;
    // cout << endl;

    // int *ptr = &arr[0];
    // cout << "Size of arr : " << sizeof(arr) << endl;
    // cout << "Size of arr : " << sizeof(*arr) << endl;
    // cout << "Size of arr : " << sizeof(&arr) << endl;

    // cout << "Size of ptr : " << sizeof(ptr) << endl;
    // cout << "Size of ptr : " << sizeof(*ptr) << endl;
    // cout << "Size of ptr : " << sizeof(&ptr) << endl;

    // int a[20] = {1, 2, 3, 5};
    // cout << &a[0] << endl;
    // cout << &a << endl;
    // cout << a << endl;
    // cout << endl;

    // int *p = &a[0];
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;

    int arr[10];
    // arr = arr + 1; (error)

    int *ptr = arr;
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;

    return 0;
}