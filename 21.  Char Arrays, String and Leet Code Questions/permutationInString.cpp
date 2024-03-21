#include<iostream>
using namespace std;

bool permutation(string s1, string s2);
bool checkEqual(int count1[], int count[2]);

int main()
{
    string s1;
    cout << "Enter s1 : ";
    cin >> s1;

    string s2;
    cout << "Enter s2 : ";
    cin >> s2;

    if (permutation(s1, s2))
    {
        cout << "\nThe substring is present.";
    }
    else
    {
        cout << "\nThe substring is NOT present.";
    }

    return 0;
}

bool permutation(string s1, string s2)
{
    //character count array
    int count1[26] = {0};

    for (int i=0 ; i<s1.length() ; i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    //traverse s2 string in window of size s1 length and compare
    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    //running for first window
    while (i<windowSize && i<s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2))
    {
        return true;
    }

    //process window futher
    while (i < s2.length())
    {
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        i++;

        if (checkEqual(count1, count2))
        {
            return true;
        }
    }
    return false;
}

bool checkEqual(int count1[], int count2[])
{
    for (int i=0 ; i<26 ; i++)
    {
        if (count1[i] != count2[i])
        {
            return false;
        }
    }
    return true;
}