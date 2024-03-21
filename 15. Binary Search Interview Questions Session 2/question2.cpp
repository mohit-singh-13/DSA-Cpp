/*Search in Rotated Sorted Array

You have been given a sorted array ARR consisting of 'N' elements. You are also given an
integer 'K'.
Now the array is rotated at some pivot point unknown to you. For example, if ARR = [1, 3, 5,
7, 8]. Then after rotating ARR at index 3, the array will be ARR = [7, 8, 1, 3, 5].
Now, your task is to find the index at which 'K' is present in ARR.

Very important question.*/

#include<iostream>
using namespace std;

int getPivot(int arr[], int size);
int binarySearch(int arr[], int start, int end, int key);

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
    cout << "Enter the element to be searched : ";
    cin >> key;

    int pivot = getPivot(arr, size);

    if (key >= arr[pivot] && key <= arr[size-1])
    {
        cout << "Element " << key << " is at index : " << binarySearch(arr, pivot, size-1, key);
    }
    else
    {
        cout << "Element " << key << " is at index : " << binarySearch(arr, 0, pivot-1, key);
    }

    return 0;
}

int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid;

    while (start!=end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return start;
}

int binarySearch(int arr[], int start, int end, int key)
{
    while (start<=end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
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

    return -1;
}