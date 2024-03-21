#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

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
    // static allocation
    Hero a;
    a.setHealth(80);
    a.level = 'B';
    cout << "Health is : " << a.getHealth() << endl;
    cout << "Level is : " << a.level << endl;

    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(90);
    b->level = 'A';
    cout << "Health is : " << (*b).getHealth() << endl;
    cout << "Level is : " << (*b).level << endl;

    cout << "Health is : " << b->getHealth() << endl;
    cout << "Level is : " << b->level << endl;

    return 0;
}