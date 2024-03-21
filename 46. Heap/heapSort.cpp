#include<iostream>
#include<queue>
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

void heapSort(int arr[], int n) {
    int size = n;

    while (size > 1) {
        // step 1 : swap
        swap(arr[size], arr[1]);
        size--;

        // step 2 : heapify
        heapify(arr, size, 1);
    }
}

int main() {
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int size = 5;

    // Heap creation
    for (int i=size/2 ; i>0 ; i--) {
        heapify(arr, size, i);
    }

    // Heap Sort
    heapSort(arr, size);
    
    cout << "Printing the array now : ";
    for (int i=1 ; i<=size ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << endl << "Using Priority Queue : " << endl;

    // Max Heap
    priority_queue<int> maxHeap;

    maxHeap.push(4);
    maxHeap.push(2);
    maxHeap.push(5);
    maxHeap.push(3);

    cout << "Element at top : " << maxHeap.top() << endl;

    maxHeap.pop();

    cout << "Element at top : " << maxHeap.top() << endl << endl;

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(4);
    minHeap.push(2);
    minHeap.push(5);
    minHeap.push(3);

    cout << "Element at top : " << minHeap.top() << endl;

    minHeap.pop();

    cout << "Element at top : " << minHeap.top() << endl;

    return 0;
}