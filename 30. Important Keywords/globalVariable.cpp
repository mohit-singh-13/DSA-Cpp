#include<iostream>
using namespace std;

void a(int& i);
void b(int& i);

int main() {
    int i = 5;
    a(i);
    
    return 0;
}

void a(int& i) {
    cout << "a : " << i << endl;
    b(i);
}

void b(int& i) {
    cout << "b : " << i << endl;
}