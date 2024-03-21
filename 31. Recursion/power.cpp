#include<iostream>
using namespace std;

int factorial(int num, int power) {
    if (power == 0) {
        return 1;
    }

    int smallProblem = factorial(num, power-1);
    int bigProblem = num * smallProblem;

    return bigProblem;
}

int main() {
    int num, power;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Enter power : ";
    cin >> power;

    cout << "Answer : " << factorial(num, power);

    return 0;
}