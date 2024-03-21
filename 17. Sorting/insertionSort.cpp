//Insertion Sort.

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

    /*for (int i=1 ; i<size; i++)
    {
        int temp = arr[i];

        int j=i-1;
        for ( ; j>=0 ; j--)
        {
            if (temp < arr[j])
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j+1] = temp;
    }*/

        //using while loop

    for (int i=1 ; i<size ; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        
        while (j>=0 && temp<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }

    cout << "\nSorted array using Insertion Sort : ";
    for (int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}