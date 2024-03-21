/*Peak index in a mountain array.*/

#include<iostream>
using namespace std;

int peakIndex(int arr[], int size);

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

    cout << endl;
    cout << "The Peak element is at Index : " << peakIndex(arr, size) << endl;
    cout << endl;

    return 0;
}

int peakIndex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start<=end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid+1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}