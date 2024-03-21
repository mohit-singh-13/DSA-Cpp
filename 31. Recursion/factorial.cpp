#include<iostream>
using namespace std;

int factorial(int n) {
    // base case
    if (n == 0) {
        return 1;
    }

    int smallProblem = factorial(n-1);
    int bigProblem = n * smallProblem;

    return bigProblem;
}

int main() {
    int n;
    cout << "Enter no. : ";
    cin >> n;

    int ans = factorial(n);
    cout << "Answer : " << ans << endl;

    return 0;
}