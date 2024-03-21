#include<iostream>
using namespace std;

int main()
{

/*
    //To print the numbers till 'n'.

    int n;
    cout << "Enter the value for which we have to stop : ";
    cin >> n;
    
    int i = 1;

    while (i<=n)
    { 
        cout << i << " ";
        i++;
    }
*/  

    //To print the sum of numbers till 'n'.
    int n;
    cout << "Enter the value till which we have to add : ";
    cin >> n;

    int i = 1;
    int sum = 0;

    while (i<=n)
    {
        sum = sum + i;
        i++;
    }

    cout << "Value of sum is : " << sum;
    
}