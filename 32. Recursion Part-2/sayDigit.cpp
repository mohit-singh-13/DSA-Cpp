#include<iostream>
using namespace std;

void sayDigit(int num) {
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    if (num == 0) {
        return;
    }

    int digit = num % 10;
    num = num / 10;
    sayDigit(num);
    cout << arr[digit] << " ";
}

int main() {
    int num;
    cout << "Enter number : ";
    cin >> num;

    sayDigit(num);

    return 0;
}