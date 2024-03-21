#include<iostream>
using namespace std;

int main()
{

    int i;
    cout << "Enter number of Rows : ";
    cin >> i;

    int row = 1;

    while (row<=i)
    {
        int space = i - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        int column = 1;
        while (column<=row)
        {
            cout << column;
            column++;
        }

/*
        int column2 = column - 2;
        while (column2)
        {
            cout << column2;
            column2--;
        }
*/

        int column2 = row - 1;

        while (column2)
        {
            cout << column2;
            column2--;
        }
        cout << endl;

        row++;
    }

}