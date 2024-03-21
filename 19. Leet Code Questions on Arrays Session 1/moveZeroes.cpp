/* Move Zeroes. */

#include<iostream>
using namespace std;

int main()
{
    int arr[50];
    
    int size;
    cout << "Enter no. of elements : ";
    cin >> size;

    cout << endl;
    cout << "Enter elements : ";
    for (int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    int i = 0;

    for (int j=0 ; j<size ; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }

    cout << "Updated array : ";
    for (int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}