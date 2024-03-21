/*You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays
are sorted in non-descreasing order. You have to find the intersection of these two arrays.
Intersection of two arrays is an array that consists of all the common elements occuring in
both arrays.

Optimised solution is in notebook.*/

#include<iostream>
 #include<limits.h>
using namespace std;

int inputArray(int arr[]);
void intersection(int arr1[], int arr2[], int size1, int size2);

int main()
{

    int arr1[100];
    int arr2[100];

    cout << "Enter the size of Array 1 : ";
    int size1 = inputArray(arr1);

    cout << "Enter the size of Array 2 : ";
    int size2 = inputArray(arr2);

    intersection(arr1, arr2, size1, size2);

    return 0;

}

int inputArray(int arr[])
{

    int size;
    cin >> size;

    for (int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }

    return size;
}

void intersection(int arr1[], int arr2[], int size1, int size2)
{

    bool flag = true;

    cout << "Answer : ";
    for (int i=0 ; i<size1 ; i++)
    {
        for (int j=0 ; j<size2 ; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = INT_MIN;
                flag = false;
                break;
            }
        }
    }

    if (flag)
    {
        cout << "-1" << endl;
    }

}