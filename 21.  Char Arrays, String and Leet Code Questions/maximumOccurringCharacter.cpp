#include<iostream>
using namespace std;

char getMaxOccCharacter(string s);

int main()
{
    string s;

    cout << "Enter string : ";
    cin >> s;

    cout << "\nMaximum occurring character is : " << getMaxOccCharacter(s);

    return 0;
}

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};
    int number = 0;

    //create an array of count of characters
    for (int i=0 ; i<=s.length() ; i++)
    {
        char ch = s[i];

        if (ch>='a' && ch<='z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    //finding maximum occurring character
    int maxi = 0;
    int ans = 0;

    for (int i=0 ; i<26 ; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}