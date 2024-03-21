#include<iostream>
using namespace std;

void reverseStr(string &str, int start, int end) {
    // base case
    if (start >= end) {
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseStr(str, start+1, end-1);
}

int main() {
    string str;
    cout << "Enter string : ";
    cin >> str;

    reverseStr(str, 0, str.length()-1);

    cout << "Output : " << str;

    return 0;
}