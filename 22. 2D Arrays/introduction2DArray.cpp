#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col);

int main()
{
    //create 2D array
    int arr[3][4];

    //taking input --> row wise input
    cout << "Enter input : ";
    for (int row=0 ; row<3 ; row++) //for row
    {
        for (int col=0 ; col<4 ; col++) //for coloumn
        {
            cin >> arr[row][col];
        }
    }

    //taking input --> colomn wise input
    cout << "Enter input : ";
    for (int col=0 ; col<4 ; col++) //for column
    {
        for (int row=0 ; row<3 ; row++) //for row
        {
            cin >> arr[row][col];
        }
    }

    //output
    cout << endl << "Output : " << endl;
    for (int row=0 ; row<3 ; row++)
    {
        for (int col=0 ; col<4 ; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    int arr2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; //this will perform row wise input

    //output
    cout << endl << "Output : " << endl;
    for (int row=0 ; row<3 ; row++)
    {
        for (int col=0 ; col<4 ; col++)
        {
            cout << arr2[row][col] << " ";
        }
        cout << endl;
    }

    int arr3[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    //output
    cout << endl << "Output : " << endl;
    for (int row=0 ; row<3 ; row++)
    {
        for (int col=0 ; col<4 ; col++)
        {
            cout << arr3[row][col] << " ";
        }
        cout << endl;
    }


    int target;
    cout << "Enter the element to be searched : ";
    cin >> target;

    if(isPresent(arr, target, 3, 4))
    {
        cout << "The element is present." << endl;
    }
    else
    {
        cout << "The element is NOT present." << endl;
    }

    return 0;
}

bool isPresent(int arr[][4], int target, int row, int col)
{ 
    for (int i=0 ; i<row ; i++)
    {
        for (int j=0 ; j<col ; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}