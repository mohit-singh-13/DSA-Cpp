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
        int space = row - 1;

        while (space)
        {
            cout << " ";
            space--;
        }

        int column = 1;

        while (column<=i-row+1)
        {
            cout << "*";
            column++;
        }
        cout << endl;

        row++;
    }

}