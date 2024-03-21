#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key);

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

    int key;
    cout << "Enter the element to search : ";
    cin >> key;

    int index = binarySearch(arr, size, key);

    cout << "Index of " << key << " is : " << index;

    return 0;
}

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;    //we're not using (start + end) / 2 because of its disadvantage

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}