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
        
        while (column<=i)
        {
            char alphabet = 'A' + column - 1;
            cout << alphabet << " ";
            column++;
        }
        cout << endl;

        row++;
    }

}