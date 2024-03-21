#include<iostream>
using namespace std;

void print(int *p);
void update(int *p);

int main() {
    int value = 5;
    int *p = &value;

    print(p);
    update(p);
    print(p);

    return 0;
}

void print (int *p) {
    cout << *p << endl;
}

void update(int *p) {
    // p = p + 1;
    *p = *p + 1;
    print(p);
}