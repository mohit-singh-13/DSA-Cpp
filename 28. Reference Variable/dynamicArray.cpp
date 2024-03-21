#include<iostream>
using namespace std;

int getSum(int *arr, int size);

int main() {
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    // Dynamic allocation
    int* arr = new int[size];

    cout << "Enter elements : "; 
    for (int i=0 ; i<size ; i++) {
        cin >> arr[i];
    }

    cout << "The array is : ";
    for (int i=0 ; i<size ; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "Sum is : " << getSum(arr, size) << endl;

    return 0;
}

int getSum(int *arr, int size) {
    int sum = 0;

    for (int i=0 ; i<size ; i++) {
        sum += arr[i];
    }
    
    return sum;
}