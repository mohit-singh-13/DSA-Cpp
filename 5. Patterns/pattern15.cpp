#include<iostream>
using namespace std;

int main()
{

    int i;
    cout << "Enter number of Rows : ";
    cin >> i;

    int row = i;

    while (row>=1)
    {
        int column = 1;
        
        while (column<=i-row+1)
        {
            char alphabet = 'A' + row + column - 2;
            cout << alphabet << " ";
            column++;
        }
        cout << endl;

        row--;
    }

}