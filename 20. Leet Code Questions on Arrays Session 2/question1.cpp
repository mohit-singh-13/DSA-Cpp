/*Rotate array.
We will use mod(%) here.*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    int size;
    cout << "Enter no. of elements : ";
    cin >> size;

    cout << "Enter elements : ";
    for (int i=0 ; i<size ; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    cout << endl;
    
    int k;
    cout << "Enter the index to rotate : ";
    cin >> k;

    vector<int> newArray(size);     //creating new vector to avoid overwriting

    for (int i=0 ; i<size ; i++)
    {
        newArray[(i+k) % v.size()] = v[i];
    }
    cout << endl;

    v = newArray;

    cout << "Array after rotation : ";
    for (int i=0 ; i<size ; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}