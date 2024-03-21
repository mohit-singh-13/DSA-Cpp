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

    // Copy constructor
    // Deep Copy
    Hero(Hero& temp) {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;

        this->level = temp.level;
    }

    void print() {
        cout << endl;
        cout << "[Name : " << name << ", ";
        cout << "Health : " << health << ", ";
        cout << "Level : " << level << "]";
        cout << endl;
    }

    void setHealth(int h) {
        health = h;
    }
    
    int getHealth() {
        return health;
    }

    void setName(char name[]) {
        strcpy(this->name, name);
    }
};

int main() {
    Hero hero1;
    hero1.setHealth(13);
    hero1.level = 'D';
    char name[6] = "Mohit";
    hero1.setName(name);

    hero1.print();

    // use Default Copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'R';
    hero1.print();

    hero2.print();

    return 0;
}