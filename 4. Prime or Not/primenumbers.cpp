#include<iostream>
using namespace std;

int main()
{

    //To tell whether a number is NOT Prime or not.
/*
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int i = 2;

    while (i<n)
    {
        if (n % i == 0)
        {
            cout << n << " is NOT a Prime Number for " << i << endl;
        }
        else
        {
            cout << n << " is a Prime Number for " << i << endl;
        }

        i++;
    }
*/

    //to tell whether a number is Prime or Nor.
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int i;

    for (i=2 ; i<n ; i++)
    {
        if ((n % i) == 0)
        {
            cout << n << " is NOT a Prime Number" << endl;
            break;
        }
    }

    if (i == n)
    {
        cout << n << " is a Prime Number" << endl;
    }

}