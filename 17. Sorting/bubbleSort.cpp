//Bubble Sort.

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter no. of elements : ";
    cin >> size;

    int arr[50];

    cout << "Enter the elements : ";
    for (int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }

    for (int i=1 ; i<size ; i++)    //used for rounds
    {
        bool swapped = true;

        for (int j=0 ; j<size-i ; j++)  //used for comparing and swapping
        {
            if (arr[j] > arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];

                swapped = false;
            }
        }

        if (swapped)
        {
            break;
        }
    }

    cout << "\nSorted array using Bubble Sort : ";
    for (int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}