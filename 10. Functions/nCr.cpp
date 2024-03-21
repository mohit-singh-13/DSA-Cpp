#include<iostream>
using namespace std;

int factorial(int n);
int nCr(int n, int r);

int main()
{

    int n, r;
    cout << "Enter the value of 'n' and 'r' : ";
    cin >> n >> r;

    cout << "nCr = " << nCr(n, r);

}

int factorial(int n)
{

    int factorial = 1;

    for (int i=1 ; i<=n ; i++)
    {
        factorial = factorial * i;
    }

    return factorial;

}

int nCr(int n, int r)
{

    int numerator = factorial(n);
    int denomenator = factorial(r) * factorial(n-r);

    int answer = (numerator / denomenator);

    return answer;

}