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
        int column1 = 1;
        while (column1<=i-row+1)
        {
            cout << column1;
            column1++;
        }

        int column2 = row - 1;
        while (column2)
        {
            cout << "*";
            column2--;
        }

        int column3 = row - 1;
        while (column3)
        {
            cout << "*";
            column3--;
        }

        int column4 = i - row +  1;
        while (column4)
        {
            cout << column4;
            column4--;
        }
        cout << endl;

        row++;
    }

}