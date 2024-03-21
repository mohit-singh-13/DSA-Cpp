#include<iostream>
using namespace std;

bool isEven(int a);

int main()
{
    
    int num;
    cout << "Enter the number : ";
    cin >> num;

    if (isEven(num))
    {
        cout << num << " is an EVEN number.";
    }
    else
    {
        cout << num << " is a ODD number.";
    }

}

bool isEven(int a)
{

    if (a&1)
    {
        return 0;
    }

    else
    {
        return 1;
    }

}