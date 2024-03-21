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
        int columns = 1;

        while (columns<=i)
        {
            cout << "*";
            columns++;
        }
        cout << endl;

        row++;
    }
    
}