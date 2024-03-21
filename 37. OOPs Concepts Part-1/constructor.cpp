#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

    /*Hero() {
        cout << "Constructor Called" << endl;
    }*/

    // Parameterised constructor
    Hero(int health) {
        this->health = health;
        // cout << "Value at this : " << this << endl;
    }

    // Copy constructor
    Hero(Hero& temp) {
        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
    }

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
    // object created statically
    Hero paul(10);
    // cout << "Address of paul : " << &paul << endl;
    cout << "Paul's Health : " << paul.getHealth() << endl;

    // object created dynamically
    // Hero *king = new Hero();

    // copy constructor called
    Hero king(paul);
    cout << "King's Health : " << king.getHealth() << endl;

    return 0;
}