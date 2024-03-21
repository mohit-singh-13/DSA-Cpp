#include<iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    int a, b;
    cout << "Enter the numbers : ";
    cin >> a >> b;

    cout << "The GCD of the given numbers is : " << gcd(a, b) << endl;

    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}