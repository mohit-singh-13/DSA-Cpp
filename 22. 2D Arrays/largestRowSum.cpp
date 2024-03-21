/*Largest row sum*/

#include<iostream>
#include<limits.h>
using namespace std;

void largestRow(int arr[][3], int row, int coloumn);

int main()
{
    int arr[3][3];

    cout << "Enter input : " << endl;
    for (int row=0 ; row<3 ; row++)
    {
        for (int col=0 ; col<3 ; col++)
        {
            cin >> arr[row][col];
        }
    }

    largestRow(arr, 3, 3);

    return 0;
}

void largestRow(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int i=0 ; i<row ; i++)
    {
        int sum = 0;
        for (int j=0 ; j<col ; j++)
        {
            sum = sum + arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is : " << maxi << endl;
    cout << "The row index is : " << rowIndex << endl;
}