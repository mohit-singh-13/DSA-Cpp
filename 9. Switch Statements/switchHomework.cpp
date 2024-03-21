#include<iostream>
using namespace std;

int main()
{

    int amount;
    cout << "Enter the amount : ";
    cin >> amount;

    int notes;
    int remaining;
    int total = 0;

    cout << endl;
    
    switch (100)
    {
        case 100:
        {
            notes = (amount / 100);
            total = (total + notes);
            remaining = (amount % 100);
            cout << "Notes we need of 100 : " << notes << endl;
        }

        case 50:
        {
            notes = (remaining / 50);
            total = (total + notes);
            remaining = (remaining % 50);
            cout << "Notes we need of 50 : " << notes << endl;
        }

        case 20:
        {
            notes = (remaining / 20);
            total = (total + notes);
            remaining = (remaining % 20);
            cout << "Notes we need of 20 : " << notes << endl;
        }

        case 1:
        {
            notes = (remaining / 1);
            total = (total + notes);
            remaining = (remaining % 1);
            cout << "Notes we need of 1 : " << notes << endl;
            break;
        }
    }
    cout << endl;
    cout << "Total notes we need : " << total;

}