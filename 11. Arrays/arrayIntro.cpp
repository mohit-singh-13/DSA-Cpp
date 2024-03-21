#include<iostream>
using namespace std;

int main()
{

    int number[15];     //declaration

    cout << "Value at 0 index : " << number[0] << endl;    //accessing an array

    //cout << "Value at 20 index : " << number[50];

    int second[3] = {5, 7, 11};     //initialising an array

    cout << "Value at 2 index : " << second[2] << endl;     //accessing an element

    int third[15] = {2, 7};
    int n = 15;

    cout << "Printing the third array : ";
    for (int i=0 ; i<n ; i++)      //accessing all the elements of an array
    {
        cout << third[i] << " ";
    }
    cout << endl;

    int fourth[10] = {0};   //initialising all locations with 0
    n = 10;

    cout << "Printing the fourth array : ";
    for (int i=0 ; i<n ; i++)
    {
        cout << fourth[i] << " ";
    }
    cout << endl;

    int fifth[10] = {1};    //initialising all locations with 1 (not possible with below line)
    n = 10;

    cout << "Printing the fifth array : ";
    for (int i=0 ; i<n ; i++)
    {
        cout << fifth[i] << " ";
    }
    cout << endl;

    int sixth[10];      //initialising all locations with any value
    n = 10;
    std::fill_n(sixth, n, 1);

    cout << "Printing the sixth array : ";
    for (int i=0 ; i<n ; i++)
    {
        cout << sixth[i] << " ";
    }
    cout << endl;


    char ch[5] = {'m', 'o', 'h', 'i', 't'};     //initialising a character array
    n = 5;

    cout << "Printing the character array : ";
    for (int i=0 ; i<n ; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;


    cout << endl << "Everthing is fine";

    return 0;

}