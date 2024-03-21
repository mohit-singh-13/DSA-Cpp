/*Spiral Print.*/

#include<iostream>
#include<vector>
using namespace std;

void spiralPrint(int arr[][4], int row, int col);

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
    
    spiralPrint(arr, 4, 4);

    return 0;
}

void spiralPrint(int arr[][4], int row, int col)
{
    vector<int> ans;

    int count = 0;
    int total = row * col;

    //index initialisation
    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = col - 1;

    while (count < total)
    {
        //print starting row
        for (int index=startingCol ; index<=endingCol && count<total ; index++)
        {
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;

        //print ending column
        for (int index=startingRow ; index<=endingRow && count<total ; index++)
        {
            ans.push_back(arr[index][endingCol]);
            count++;
        }
        endingCol--;

        //print ending row
        for (int index=endingCol ; index>=startingCol && count<total ; index--)
        {
            ans.push_back(arr[endingRow][index]);
            count++;
        }
        endingRow--;

        //print starting column
        for (int index=endingRow ; index>=startingRow && count<total ; index--)
        {
            ans.push_back(arr[index][startingCol]);
            count++;
        }
        startingCol++;
    }

    cout << endl << "Output : " << endl;
    for (int i:ans)
    {
        cout << i << " ";
    }
}