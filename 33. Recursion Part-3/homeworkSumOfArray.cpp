#include<iostream>
using namespace std;

int sumArray(int arr[], int size) {
    // base case
    if (size == 0) {
        return 0;
    }

    int sum = arr[0] + sumArray(arr+1, size-1);
    return sum;
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 1};
    int size = 6;

    cout << "Sum is : " << sumArray(arr, size) << endl;

    return 0;
}