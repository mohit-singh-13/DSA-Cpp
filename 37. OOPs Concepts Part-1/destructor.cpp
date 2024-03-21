#include<iostream>
#include<cstring>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;
    char *name;

    Hero() {
        cout << "Simple Constructor Called" << endl;
        name = new char[100];
    }
    
    ~Hero() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    // static
    Hero a;

    // dynamic
    Hero *b = new Hero();
    delete b;

    return 0;
}