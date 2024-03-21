#include<iostream>
using namespace std;

string check(string myString);

int main()
{
    string myString = "Mohit Singh";

    cout << "Reversed string is : ";
    string ans = check(myString);
    cout << ans;
    
    return 0;
}

string check(string myString)
{
    int j = 0;
    string temp;

    for (int i=0 ; i<=myString.length() ; i++)
    {
        if ((myString[i]==' ') || (myString[i]=='\0'))
        {
            int k = i - 1;
            while (j < k)
            {
                swap(myString[j], myString[i]);
                j++;
                i--;
            }

            for (int l=j ; l<i ; l++)
            {
                temp.push_back(myString[l]);
            }

            j = i + 1;
        }
    }

    cout << temp;
}