/*Print like a Wave - Print the first column top to bottom, next column bottom to top, and so on.*/

#include<iostream>
using namespace std;

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

    cout << endl << "Output : " << endl;
    for (int col=0 ; col<3 ; col++)
    {
        if (col%2 == 0) //if (col & 1)
        {
            for (int row=0 ; row<3 ; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row=3-1 ; row>=0 ; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
    } 

    return 0;
}