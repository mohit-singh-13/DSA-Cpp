//Complement of base 10 integer. Given an integer n, return its complement.

#include<iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the integer : ";
    cin >> n;

    int m = n;
    int mask = 0;
    bool print = false;

    if (n==0)
    {
        cout << "The complement of the Integer is : 1" << endl; 
    }

    while (m!=0)
    {
        m = (m >> 1);
        mask = (mask << 1) | 1;
        print = true;
    }

    if (print)
    {
        int answer = (~n & mask);

        cout << "The complement of the Integer is : " << answer << endl;
    }
}