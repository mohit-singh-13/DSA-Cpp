#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Mohit");
    q.push("Singh");
    q.push("Thapa");

    cout << "Queue front : " << q.front() << endl;
    cout << "Size of queue : " << q.size() << endl;

    q.pop();

    cout << "Queue front : " << q.front() << endl;
    cout << "Queue back : " << q.back() << endl;
    cout << "Size of queue : " << q.size() << endl;

    return 0;
}