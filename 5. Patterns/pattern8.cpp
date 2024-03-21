#include<iostream>
using namespace std;

int main()
{

/*
    int i;
    cout << "Enter number of Rows : ";
    cin >> i;

    int row = 1;

    while (row<=i)
    {
        int column = row;

        while (column<=row)
        {
            cout << column << " ";
            column = column - 1;
            if (column<1)
            {
                break;
            }
        }
        cout << endl;

        row++;
    }
*/

    int i;
    cout << "Enter number of Rows : ";
    cin >> i;

    int row = 1;

    while (row<=i)
    {
        int column = 1;

        while (column<=row)
        {
            cout << row - column + 1 << " ";
            column++;
        }
        cout << endl;

        row++;
    }
    
}