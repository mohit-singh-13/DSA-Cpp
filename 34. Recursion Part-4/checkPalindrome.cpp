#include<iostream>
using namespace std;

void checkPalindrome(string str, int i, int j) {
    // base case
    if (i >= j) {
        cout << "This string is a palindrome.";
        return;
    }

    if (str[i] == str[j]) {
        i++;
        j--;
        checkPalindrome(str, i, j);
    }
    else {
        cout << "This string is NOT a palindrome.";
    }   
}

int main() {
    string str;
    cout << "Enter string : ";
    cin >> str;

    checkPalindrome(str, 0, str.length()-1);

    return 0;
}