#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> maxi;   //max heap

    priority_queue<int, vector<int>, greater<int>> mini;    //min heap

    maxi.push(1);
    maxi.push(2);
    maxi.push(0);

    cout << "Size of maxi : " << maxi.size() << endl;
    int n = maxi.size();
    for (int i=0 ; i<n ; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(9);
    mini.push(4);
    mini.push(6);
    mini.push(2);

    cout << "Size of mini : " << mini.size() << endl;
    n = mini.size();
    for (int i=0 ; i<n ; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    return 0;
}