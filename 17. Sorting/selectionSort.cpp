//Selection Sort.

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

    for (int i=0 ; i<size-1 ; i++)
    {
        int minIndex = i;

        for (int j=i+1 ; j<size ; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex!=i)
        {
            //swapping
            arr[minIndex] = arr[minIndex] + arr[i];
            arr[i] = arr[minIndex] - arr[i];
            arr[minIndex] = arr[minIndex] - arr[i];
        }
    }

    cout << "\nSorted array using Selection Sort : ";
    for (int i=0 ; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}