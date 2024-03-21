#include<iostream>
#include<stack>
using namespace std;

int main() {
    string str;
    cout << "Enter string : ";
    cin >> str;

    stack<char> s;

    for (int i=0 ; i<str.length() ; i++) {
        s.push(str[i]);
    }

    cout << "Reverse : ";
    for (int i=0 ; i<str.length() ; i++) {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    return 0;
}