#include<iostream>
using namespace std;

void update(int n);
void update2(int &n);

int main() {
    /*int i = 5;
    
    // create a reference variable
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;*/

    int n = 5;
    cout << "Before : " << n << endl;
    update(n);
    cout << "After : " << n << endl;
    cout << endl;
    
    cout << "Before : " << n << endl;
    update2(n);
    cout << "After : " << n << endl;

    return 0;
}

void update(int n) {
    n++;
    cout << "n in update() : " << n << endl;
}

void update2(int &n) {
    n += 2;
    cout << "n in update() : " << n << endl;
}