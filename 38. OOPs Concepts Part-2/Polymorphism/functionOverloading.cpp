#include<iostream>
using namespace std;

class A {
    public:
    void sayHello() {
        cout << "Hello Mohit Singh" << endl;
    }

    void sayHello(string name) {
        cout << "Hello " << name << endl;
    }
};

int main() {
    A obj;
    obj.sayHello();
    obj.sayHello("Rahul");

    return 0;
}