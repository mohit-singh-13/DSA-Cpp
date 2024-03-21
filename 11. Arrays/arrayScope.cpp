#include<iostream>
using namespace std;

void update(int arr[], int size);

int main()
{

    int arr[3] = {1, 2, 3};
    
    update(arr, 3);

    cout << "Printing in main : " << endl;
    for (int i=0 ; i<3 ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}

void update(int arr[], int size)
{

    arr[0] = 120;   //updating value in array

    cout << "Printing in Update : " << endl;
    for (int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}