#include<iostream>
using namespace std;

void heapify(int arr[], int size, int index) {
    int largest = index;
    int left = 2*index;
    int right = 2*index+1;

    if (left <= size && arr[largest] < arr[left]) {
        largest = left;
    }
    if (right <= size && arr[largest] < arr[right]) {
        largest = right;
    }

    if (largest != index) {
        swap(arr[largest], arr[index]);
        heapify(arr, size, largest);
    }
}

int main() {
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int size = 5;

    for (int i=size/2 ; i>0 ; i--) {
        heapify(arr, size, i);
    }
    
    cout << "Printing the array now : ";
    for (int i=1 ; i<=size ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}