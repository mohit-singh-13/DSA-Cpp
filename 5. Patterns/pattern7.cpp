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
        int count = row;
        int column = 1;

        while (column<=row)
        {
            cout << count << " ";
            count++;
            column++;
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
            cout << row + column - 1 << " ";
            column++;
        }
        cout << endl;

        row++;
    }

}