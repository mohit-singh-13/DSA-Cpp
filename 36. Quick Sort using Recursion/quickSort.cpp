#include<iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[start];

    int count = 0;
    for (int i=start+1 ; i<=end ; i++) {
        if (arr[i] < pivot) {
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);  // swapping index

    // handling left and right part
    int i = start, j = end;

    while (i<pivotIndex && j>pivotIndex) {
        while (arr[i] < pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i<pivotIndex && j>pivotIndex) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end) {
    // base case
    if (start >= end) {
        return;
    }

    // partition
    int p = partition(arr, start, end);

    // sorting left part
    quickSort(arr, start, p-1);
    quickSort(arr, p+1, end);
}

int main() {
    int arr[5] = {5, 2, 1, 3, 8};
    int size = 5;

    quickSort(arr, 0, size-1);

    cout << "Answer : ";
    for (int i=0 ; i<size ; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}