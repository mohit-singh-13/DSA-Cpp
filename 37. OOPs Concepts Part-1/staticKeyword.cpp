#include<iostream>
using namespace std;

class Hero {
    private:
    int health;
    char level;

    public:
    static int timeToComplete;

    // static function
    static void random() {
        // cout << health << endl;
        cout << "Static function : " << timeToComplete << endl;
    }
};

int Hero :: timeToComplete = 5;

int main() {
    cout << Hero :: timeToComplete << endl;

    Hero a;
    a.timeToComplete = 10;
    cout << a.timeToComplete << endl;

    cout << Hero :: timeToComplete << endl;


    // static function
    Hero :: random();

    return 0;
}