#include<iostream>
using namespace std;

void printCounting(int num) {
    if (num == 0) {
        return;
    }
    
    cout << num << " ";
    printCounting(num-1);
}

int main() {
    int num;
    cout << "Enter number : ";
    cin >> num;

    printCounting(num);

    return 0;
}