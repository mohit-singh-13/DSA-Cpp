/* Merge two sorted array. */

#include<iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int arr3[]);
void printArray(int arr3[], int size3);

int main()
{
    int arr1[50];
    int arr2[50];
    int arr3[50] = {0};

    int size1, size2;
    cout << "Enter no. of elements in arr1 : ";
    cin >> size1;

    cout << "Enter no. of elements in arr2 : ";
    cin >> size2;

    int size3 = size1 + size2;

    cout << endl;
    
    cout << "Enter elements of arr1 : ";
    for (int i=0 ; i<size1 ; i++)
    {
        cin >> arr1[i];
    }
    cout << endl;

    cout << "Enter elements of arr2 : ";
    for (int i=0 ; i<size2 ; i++)
    {
        cin >> arr2[i];
    }
    cout << endl;

    merge(arr1, size1, arr2, size2, arr3);

    printArray(arr3, size3);

    return 0;
}

void merge(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i<size1 && j<size2)
    {
        if (arr1[i] <= arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}

void printArray(int arr3[], int size3)
{
    cout << "Merged sorted array : ";
    for (int i=0 ; i<size3 ; i++)
    {
        cout << arr3[i] << " ";
    }
}