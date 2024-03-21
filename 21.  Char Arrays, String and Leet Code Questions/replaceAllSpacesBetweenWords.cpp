#include<iostream>
using namespace std;

bool valid(char ch);
string replaceSpace(string myString);

int main()
{
    string myString = "My name is Mohit Singh";

    cout << "Result : " << replaceSpace(myString);

    return 0;
}

bool valid(char ch)
{
    if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

string replaceSpace(string myString)
{
    string temp = "";

    for (int i=0 ; i<myString.length() ; i++)
    {
        if (valid(myString[i]))
        {
            temp.push_back(myString[i]);
        }
        else
        {
            temp.push_back('@');            
            temp.push_back('4');            
            temp.push_back('0');            
        }
    }

    return temp;
}