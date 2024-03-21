#include<iostream>
using namespace std;

int exponentiation(int num, int power) {
    /*// base case
    if (power == 0) {
        return 1;
    }

    if (power & 1) {
        int ans = num * (exponentiation(num, power/2) * exponentiation(num, power/2));
        return ans;
    }
    else {
        int ans = (exponentiation(num, power/2) * exponentiation(num, power/2));
        return ans;
    }*/

    // base case
    if (power == 0) {
        return 1;
    }
    if (power == 1) {
        return num;
    }

    // Recursion Call
    int ans = exponentiation(num, power/2);

    if (power & 1) {
        // odd
        return num * ans * ans;
    }
    else {
        return ans * ans;
    }
}

int main() {
    int num, power;
    cout << "Enter number : ";
    cin >> num;
    cout << "Enter power : ";
    cin >> power;

    cout << "Answer : " << exponentiation(num, power);

    return 0;
}