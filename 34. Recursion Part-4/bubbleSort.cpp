#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    // base case
    if (size <= 1) {
        return;
    }

    for (int i=0 ; i<size-1 ; i++) {
        if (arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
        }
    }

    bubbleSort(arr, size-1);
}

int main() {
    int arr[5] = {2, 5, 1, 6, 9};
    int size = 5;

    bubbleSort(arr, size);

    cout << "Sorted array : ";
    for (int i=0 ; i<size ; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}