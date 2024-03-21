#include<iostream>
// #include "class.cpp"
using namespace std;

class Hero {
    // properties
    private:
    int health;

    public:
    char level;

    // behaviour
    void print() {
        cout << level << endl;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char l) {
        level = l;
    }
    
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }
};

int main() {
    // creation of object
    Hero paul;

    // paul.health = 70;
    paul.setHealth(80);  // using setter

    paul.level = 'A';

    cout << "Size : " << sizeof(paul) << endl;
    // cout << "Health is : " << paul.health << endl;
    cout << "Health is : " << paul.getHealth() << endl;  // using getter
    cout << "Level is : " << paul.level << endl;

    return 0;
}