#include<iostream>
using namespace std;

int getLength(char name[]);
void reverse(char name[]);

int main()
{
    char name[20];

    cout << "Enter your name : ";
    cin >> name;
    cout << "Your name is " << name << endl;
    cout << endl;

    /*char name1[20];
    cout << "Enter your name : ";
    cin >> name1;
    name1[2] = '\0';
    cout << "Your name is : " << name1 << endl;
    cout << endl;*/

    cout << "Length of the character array is : " << getLength(name) << endl;
    cout << endl;

    reverse(name);
    cout << "Reversed character array is : " << name << endl;


    return 0;
}

int getLength(char name[])
{
    int i = 0;

    while (name[i] != '\0')
    {
        i++;
    }

    return i;
}

void reverse(char name[])
{
    int start = 0;

    int count = 0;
    while (name[count] != '\0')
    {
        count++;
    }

    int end = count - 1;

    while (start < end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}