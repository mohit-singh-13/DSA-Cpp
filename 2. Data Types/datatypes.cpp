#include<iostream>
using namespace std;

int main()
{
    
    int a = 123;
    cout << a << endl;

    char b = 'm';
    cout << b << endl;

    bool c = true;
    cout << c << endl;

    float d = 1.2;
    cout << d << endl;

    double e = 1.23;
    cout << e << endl;

    int size = sizeof(a);
    cout << "Size of 'a' is : " << size << endl;

    int f = 'a';
    cout << f << endl;

    char g = 98;
    cout << g << endl;

    char h = 1236;
    cout << h << endl;

    unsigned int i = 112;
    cout << i << endl;                                                                                                                                                                                                                                                                                                                                                                                

    int j = 2.0/5;
    cout << j << endl;
    
    cout << 2.0/5 << endl;

    float k = 2.0/5;
    cout << k << endl;

    int l = 2;
    int m = 3;

    bool first = (l==m);
    cout << first << endl;

    bool second = (l<m);
    cout << second << endl;

    bool third = (l!=m);
    cout << third << endl;

    int n = 21;
    cout << !n << endl;

    int o = 0;
    cout << !o << endl;

}