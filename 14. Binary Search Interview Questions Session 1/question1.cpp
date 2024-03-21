/*You have been given a sorted array ARR consisting of 'N' elements. You are also given an
integer 'K'. Now, your task is to find the first and last occurrence of 'K' in ARR.*/

#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key);
int lastOccurrence(int arr[], int size, int key);

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
    cout << "Enter the integer 'K' : ";
    cin >> key;

    cout << endl;
    cout << "First occurrence of " << key << " is at Index : " << firstOccurrence(arr, size, key) << endl;
    cout << "Last occurrence of " << key << " is at Index : " << lastOccurrence(arr, size, key) << endl;

    return 0;
}

int firstOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int first = -1;

    while (start<=end)
    {
        if (arr[mid] == key)
        {
            first = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return first;
}

int lastOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int last = -1;

    while (start<=end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            last = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return last;
}