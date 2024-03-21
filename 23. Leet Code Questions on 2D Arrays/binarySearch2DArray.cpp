/*Search in a 2D array using Binary Search.*/

#include<iostream>
using namespace std;

bool binarySearch(int arr[][4], int row, int col, int key);

int main()
{ 
    int arr[3][4];

    cout << "Enter input : " << endl;
    for (int row=0 ; row<3 ; row++)
    {
        for (int col=0 ; col<4 ; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << endl;

    int key;
    cout << "Enter the key : ";
    cin >> key;

    if (binarySearch(arr, 3, 4, key))
    {
        cout << "Element is present.";
    }
    else
    {
        cout << "Element is NOT present.";
    }
    cout << endl;

    return 0;
}

bool binarySearch(int arr[][4], int row, int col, int key)
{
    int start = 0;
    int end = row * col - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int element = arr[mid/col][mid%col];

        if (element == key)
        {
            return true;
        }
        else if (element < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}