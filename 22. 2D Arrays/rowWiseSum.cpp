/*Row wise sum.*/

#include<iostream>
using namespace std;

void printSum(int arr[][3], int row, int col);

int main()
{
    int arr[3][3];

    cout << "Enter input : ";
    for (int row=0 ; row<3 ; row++)
    {
        for (int col=0 ; col<3 ; col++)
        {
            cin >> arr[row][col];
        }
    }

    printSum(arr, 3, 3);

    return 0;
}

void printSum(int arr[][3], int row, int col)
{
    for (int i=0 ; i<row ; i++)
    {
        int sum = 0;
        for (int j=0 ; j<col ; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << endl << "The sum is : " << sum << endl;
    }
}