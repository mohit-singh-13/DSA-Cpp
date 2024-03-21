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
        int num = row;

        while (column<=i-row+1)
        {
            cout << num;
            num++;
            column++;
        }
        cout << endl;

        row++;
    }

}