/*Power of Two. Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2^x.*/

#include<iostream>
#include<math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    bool print = true;

    for (int i=0 ; i<=30 ; i++)
    {
        int answer = pow(2, i);
        if (answer==n)
        {
            cout << n << " is a power of Two.";
            print = false;
            break;
        }
    }
    
    if(print)
    {
        cout << n << " is NOT a power of Two.";
    }

}