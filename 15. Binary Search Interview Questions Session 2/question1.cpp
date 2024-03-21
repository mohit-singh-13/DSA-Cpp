/*Find Pivot in an array.*/

#include<iostream>
using namespace std;

int pivot(int arr[], int size);

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

    cout << "Pivot element is at Index : " << pivot(arr, size) << endl;

    return 0;
}

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start<end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else 
        {
            end = mid;
        }
    }

    return start;   //return end can also be done
}