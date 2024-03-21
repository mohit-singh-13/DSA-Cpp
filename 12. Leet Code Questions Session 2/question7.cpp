/*Sort 0s and 1s.*/

#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int size);

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[100];

    cout << "Enter the array : ";
    for (int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }

    sortZeroOne(arr, size);

    return 0;
}

void sortZeroOne(int arr[], int size)
{
    int i = 0, j = size - 1;

    while (i<j)
    {
        if (arr[i] == 0)    //we can also use while loop here.
        {
            i++;
        }

        if (arr[j] == 1)
        {
            j--;
        }
        else 
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    cout << "Output : ";
    for (int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }
}