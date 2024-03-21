#include<iostream>
using namespace std;

int main()
{

    //To tell whether a character is Lowercase, Uppercase or numeric
    char ch;
    cout << "Enter the Character : ";
    cin >> ch;

    cout << "Value of ch : " << ch << endl;

    if (ch>=97)
    {
        cout << "This is a Lowercase Alphabet." << endl;
    }
    else if (ch>=65)
    {
        cout << "This is a Uppercase Alphabet." << endl;
    }
    else
    { 
        cout << "This is a Numeric Value." << endl;
    }

}