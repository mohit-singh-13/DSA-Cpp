#include<iostream>
using namespace std;

bool checkPalindrome(char myString[]);
char toLowerCase(char ch);
bool checkPalindromeNotSensitive(char myString[]);

int main()
{
    char myString[25];

    cout << "Enter the string : ";
    cin >> myString;
    
    bool ans = checkPalindrome(myString);

    if (ans == 1)
    {
        cout << "\nThe given string is a Palindrome";
    }
    else 
    {
        cout << "\nThe given string is NOT a Palindrome";
    }

    ans = checkPalindromeNotSensitive(myString);

    if (ans == 1)
    {
        cout << "\nThe given string is a Palindrome";
    }
    else 
    {
        cout << "\nThe given string is NOT a Palindrome";
    }

    return 0;
}

bool checkPalindrome(char myString[])
{
    int start = 0;
    
    int count = 0;
    while (myString[count] != '\0')
    {
        count++;
    }

    int end = count - 1;

    while (start < end)
    {
        if (myString[start] == myString[end])
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

bool checkPalindromeNotSensitive(char myString[])
{
    int start = 0;
    
    int count = 0;
    while (myString[count] != '\0')
    {
        count++;
    }

    int end = count - 1;

    while (start < end)
    {
        if (toLowerCase(myString[start]) == toLowerCase(myString[end]))
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
