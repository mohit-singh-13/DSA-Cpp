#include<iostream>
using namespace std;

int main()
{

    //To find the sum of even numbers till 'n'.
    int n;
    cout << "Enter the value : ";
    cin >> n;

    int i = 2;
    int sum = 0;

    while (i<=n)
    {
        sum = sum + i;
        i = i + 2;
    }

    cout << "Value of sum is : " << sum;

}