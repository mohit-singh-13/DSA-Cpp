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
        int column = 1;

        while (column<=row)
        {
            char alphabet = 'A' + row - 1;
            cout << alphabet << " ";
            column++;
        }
        cout << endl;

        row++;
    }

}