#include<iostream>
using namespace std;

int main()
{

    int i;
    cout << "Enter number of Rows : ";
    cin >> i;

    int row = 1;
    int count = 1;

    while(row<=i)
    {
        int column = 1;

        while(column<=row)
        {
            cout << count << " ";
            count++;
            column++;
        }
        cout << endl;

        row++;
    }

}