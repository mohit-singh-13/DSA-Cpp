#include<iostream>
using namespace std;

int main()
{

    //to print the sum of numbers till 'n'.
/*
    int n;
    cout << "Enter the value : ";
    cin >> n;

    int sum = 0;

    for (int i=1 ; i<=n ; i++)
    {
        sum += i;
    }

    cout << sum;
*/

    //use of 'continue'.
/*
    for (int i=1 ; i<=5 ; i++)
    {
        cout << "HI" << endl;
        cout << "HEY" << "\n";
        continue;
        cout << "REPLY" << endl;
    }
*/

    //to print Fibonacci Series.
     int n;
     cout << "Enter the value : ";
     cin >> n;

     int a = 0;
     int b = 1;
     cout << a << " " << b << " ";

     int nextNum = 0;

     for (int i=1 ; i<=n-2 ; i++)
     {
         cout << (nextNum = a + b) << " ";
         a = b;
         b = nextNum;
     }

}