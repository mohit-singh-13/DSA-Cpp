/*Rotate a matrix by 90 degree.*/

#include<iostream>
#include<vector>
using namespace std;

void rotateNinety(int arr[][4], int row, int col);

int main()
{
    int arr[4][4];

    cout << "Enter input : " << endl;
    for (int row=0 ; row<4 ; row++)
    {
        for (int col=0 ; col<4 ; col++)
        {
            cin >> arr[row][col];
        }
    }

    rotateNinety(arr, 4, 4);

    return 0;
}

void rotateNinety(int arr[][4], int row, int col)
{
    int arrNew[col][row];

    int endingRow = row - 1;
    int startingCol = 0;

    for (int i=0 ; i<=col ; i++)
    {   
        int endingRow = row - 1;

        for (int j=0 ; j<=row ; j++)
        {
            arrNew[i][j] = arr[endingRow][startingCol];
            endingRow--;
        }

        startingCol++;
    }

    cout << endl << "Output : " << endl;
    for (int i=0 ; i<col ; i++)
    {
        for (int j=0 ; j<row ; j++)
        {
            cout << arrNew[i][j] << " ";
        }
        cout << endl;
    }
}