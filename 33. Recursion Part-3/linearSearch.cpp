#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {
    // base case
    if (size == 0) {
        return false;
    }

    if (arr[0] == key) {
        return true;
    }

    return (linearSearch(arr+1, size-1, key));
}

int main() {
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 6;

    if (linearSearch(arr, size, key)) {
        cout << "Key is Present" << endl;
    }
    else {
        cout << "Key is NOT Present" << endl;
    }

    return 0;
}