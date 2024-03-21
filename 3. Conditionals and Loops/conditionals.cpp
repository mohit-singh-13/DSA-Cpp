#include<iostream>
using namespace std;

int main()
{

/*
    //To tell either a number is Positive or Negative.

    int a;
    cin >> a;

    cout << "Value of a is : " << a << endl;

    if (a>0)
    {
        cout << "'a' is Positive." << endl;
    }
    else
    {
        cout << "'a' is Negative." << endl;
    }
*/

/*
    //To compare two numbers.

    int a,b;
    cin >> a >> b;

    cout << "Enter the Value of 'a' : ";
    cin >> a;
    cout << "Enter the Value of 'b' : ";
    cin >> b;

    if (a>b)
    { 
        cout << "'a' is greater." << endl;
    }
    if (b>a)
    {
        cout << "'b' is greater." << endl;
    }

    cout << "Value of a and b is : " << a << " and " << b << endl;
*/

/*
    //To demonstrate the use of cin.get();.

    int a;
    a = cin.get();
    cout << "Value of 'a' is : " << a << endl;
*/

    //To tell whether a number is Positive, Negative or Zero.

    int a;
    cout << "Enter the Value of 'a' : ";
    cin >> a;

    if (a>0)
    {
        cout << "'a' is Positive." << endl;
    }
    else
    {
        if (a<0)
        {
            cout << "'a' is Negative." << endl;
        }
        else
        {
            cout << "'a' is 0" << endl;
        }
    }

}