#include<iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter row : ";
    cin >> row;
    cout << "Enter col : ";
    cin >> col;

    // creating a 2D array
    int** arr = new int*[row];

    for (int i=0 ; i<row ; i++) {
        arr[i] = new int[col];
    }
    // creation done

    cout << "Enter elements : ";
    for (int i=0 ; i<row ; i++) {
        for (int j=0 ; j<col ; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Elements are : " << endl;
    for (int i=0 ; i<row ; i++) {
        for (int j=0 ; j<col ; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    for (int i=0 ; i<row ; i++) {
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}