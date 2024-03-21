#include<iostream>
using namespace std;

void print(int arr[], int start, int end) {
    cout << "Array is : ";
    for (int i=start ; i<=end ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int arr[], int start, int end, int key) {
    print(arr, start, end);

    // base case
    /*if (size == 0) {
        return false;
    }

    int mid = size / 2;
    cout << "Mid : " << mid << endl << endl;
    if (arr[mid] == key) {
        return true;
    }

    if (arr[mid] < key) {
        return binarySearch(arr+mid+1, size-mid-1, key);
    }
    else {
        return binarySearch(arr, mid, key);
    }*/

    // base case
    if (start > end) {
        return false;
    }
    

    int mid = start + (end - start) / 2;

    if (arr[mid] == key) {
        return true;
    }

    // cout << "start : " << start << endl << "end : " <<  end << endl;

    if (arr[mid] < key) {
        return binarySearch(arr, mid+1, end, key);
    }
    else {
        return binarySearch(arr, start, mid-1, key);
    }
}

int main() {
    int arr[6] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int key = 18;

    if (binarySearch(arr, 0, size-1, key)) {
        cout << "Key is Present";
    }
    else {
        cout << "Key is NOT Present";
    }

    return 0;
}