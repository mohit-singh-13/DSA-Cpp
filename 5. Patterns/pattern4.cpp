#include<iostream>
using namespace std;

int main()
{

    int i;
    cout << "Enter number of Rows : ";
    cin >> i;

    int row = 1;
    int column = 1;

    while (row<=i)
    {
        while(column<=i*row)
        {
            cout << column << " ";
            column++;
        }
        cout << endl;

        row++;
    }

}