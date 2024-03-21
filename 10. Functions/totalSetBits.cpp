#include<iostream>
using namespace std;

int setBit(int a, int b);

int main()
{

    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    cout << "Total no. of set bits are : " << setBit(a, b);

}

int setBit(int a, int b)
{

    int count = 0;
     
    while ((a!=0) || (b!=0))
    {
        if (a&1)
        {
            count++;
        }
        a = a >> 1;
 
        if (b&1)
        {
            count++;
        }
        b = b >> 1;
    }

    return count;

}