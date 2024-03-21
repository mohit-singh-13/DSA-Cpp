//subtract the Product and Sum of digits of an Integer

#include<iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int digit;
    int product = 1;
    int sum = 0;

    while (n>0)
    {
        digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }

    cout << "Product of the digits of the Integer : " << product << endl;
    cout << "Sum of the digits of the Integer : " << sum << endl;

    cout << "Difference between the Product and Sum of digits of the Integer : " << (product - sum) << endl;

}