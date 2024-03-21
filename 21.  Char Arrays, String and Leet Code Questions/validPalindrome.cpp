#include<iostream>
using namespace std;

bool valid(char ch);
char toLowerCase(char ch);
bool checkPalindrome(string myString);

int main()
{
    string myString = "A man, a plan, a canal : Panama";

    int ans = checkPalindrome(myString);

    if (ans == 1)
    {
        cout << "The given string is a valid palindrome.";
    }
    else
    {
        cout << "The given string is NOT a valid palindrome.";
    }

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

char toLowerCase(char ch)
{
    if ((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(string myString)
{
    string temp = "";

    for (int j=0 ; j<myString.length() ; j++)
    {
        if (valid(myString[j]))
        {
            temp.push_back(myString[j]);
        }
    }

    for (int j=0 ; j<temp.length() ; j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }

    int start = 0;
    int end = temp.length() - 1;

    while (start < end)
    {
        if (temp[start] == temp[end])
        {
            start++;
            end--;
        }
        else
        {
            return false;
        }
    }

    return true;
}