#include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m);

int main()
{
    int x, n, m;
    cout << "Enter x, n and m respectively : ";
    cin >> x >> n >> m;

    cout << "Answer : " << modularExponentiation(x, n, m);

    return 0;
}

int modularExponentiation(int x, int n, int m) 
{
    int ans = 1;

    while (n > 0)
    {
        if (n & 1)
        {//odd
            ans = (1LL * (ans) * (x) % m) % m; 
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1; //divide by 2;
    }
    return ans ;
}