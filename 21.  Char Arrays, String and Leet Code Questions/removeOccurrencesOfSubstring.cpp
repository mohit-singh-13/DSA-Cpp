#include<iostream>
using namespace std;

string removeOccurrences(string s, string part);

int main()
{
    string s;
    
    cout << "Enter your string : ";
    cin >> s;

    string part;
    cout << "Enter the substring : ";
    cin >> part;

    string ans = removeOccurrences(s, part);
    cout << "\nThe string is : " << ans;

    return 0;
}

string removeOccurrences(string s, string part)
{
    while (s.length()!=0 && s.find(part)<=s.length())
    {
        s.erase(s.find(part), part.length());
    }

    return s;
}