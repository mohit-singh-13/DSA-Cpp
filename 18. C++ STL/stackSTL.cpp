#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("Mohit");
    s.push("Singh");
    s.push("Thapa");

    cout << "Top is : " << s.top() << endl;

    s.pop();

    cout << "Top is : " << s.top() << endl;

    cout << "Size is : " << s.size() << endl;

    cout << "Empty or not : " << s.empty() << endl;
    
   return 0;
}