#include<iostream>
using namespace std;

int main()
{

/*
    int num = 2;

    switch (num)
    {
        case 1: 
        {
            cout << "First" << endl;
            break;
        }

        case 2: 
        {
            cout << "Second" << endl;
            break;
        }

        default: 
        {
            cout << "It is the default case" << endl;
        }
    }
*/

    char ch = '1';

    switch (ch)
    {
        case 1:
        {
            cout << "First" << endl;
            break;
        }

        case '1':
        {
            cout << "Character One" << endl;
            break;
        }

        default:
        {
            cout << "It is the default case" << endl;
        }
    }
}