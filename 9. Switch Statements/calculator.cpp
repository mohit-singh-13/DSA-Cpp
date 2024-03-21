#include<iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    char operation;
    cout << "Enter the operation : ";
    cin >> operation;

    cout << "Answer : ";

    switch (operation)
    {
        case '+':
        {
            cout << (num1 + num2) << endl;
            break;
        }

        case '-':
        {
            cout << (num1 - num2) << endl;
            break;
        }

        case '*':
        {
            cout << (num1 * num2) << endl;
            break;
        }

        case '/':
        {
            cout << (num1 / num2) << endl;
            break;
        }
        
        case '%':
        {
            cout << (num1 % num2) << endl;
            break;
        }
    }

}