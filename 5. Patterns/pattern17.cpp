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

        while (column<=row)
        {
            cout << "* ";
            column++;
        }
        cout << endl;

        row--;
    }

}