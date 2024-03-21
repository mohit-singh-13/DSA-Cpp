#include<iostream>
using namespace std;

void reachHome(int src, int dest) {
    cout << "Source : " << src << endl << "Destination : " << dest << endl;

    //base case
    if (src == dest) {
        cout << "Pohonch gaya" << endl;
        return;  // mandatory
    }

    reachHome(src+1, dest);
}

int main() {
    int dest = 10;
    int src = 1;

    reachHome(src, dest);

    return 0;
}