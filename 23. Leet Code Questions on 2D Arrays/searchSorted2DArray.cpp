/*Searching in a 2D array which is sorted row wise and column wise.*/

#include<iostream>
using namespace std;

bool binarySearch(int arr[][5], int row, int col, int key);

int main()
{
    int arr[5][5];

    cout << "Enter input : " << endl;
    for (int row=0 ; row<5 ; row++)
    {
        for (int col=0 ; col<5 ; col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << endl;

    int key;
    cout << "Enter the key : ";
    cin >> key;

    if (binarySearch(arr, 5, 5, key))
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

bool binarySearch(int arr[][5], int row, int col, int key)
{
    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex<row && colIndex>=0)
    {
        int element = arr[rowIndex][colIndex];

        if (element == key)
        {
            return true;
        }
        else if (element < key)
        {
            rowIndex++;
        }
        else 
        {
            colIndex--;
        }
    }

    return false;
}