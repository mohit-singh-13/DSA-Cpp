/*Given an integer array 'nums' of length 'n' where all the integers of 'nums' are in the range [1, n]
and each integer appears once or twice, return an array of all the integers that appears twice.*/

#include<iostream>
#include<limits.h>
using namespace std;

void allDuplicates(int arr[], int size);
void printArray(int arrNew[], int size1);

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

    allDuplicates(arr, size);

    return 0;
}

void allDuplicates(int arr[], int size)
{
    int arrNew[50];
    int size1 = 0;
    int n = 0;

    for (int i=0 ; i<size ; i++)
    {
        for (int j=i+1 ; j<size ; j++)
        {
            if (arr[i] == arr[j])
            {
                arrNew[n] = arr[i];
                arr[j] = rand();
                size1++;
                n++;
            }
        }
    }

    printArray(arrNew, size1);
}

void printArray(int arrNew[], int size1)
{
    cout << "Output : ";
    for (int i=0 ; i<size1 ; i++)
    {
        cout << arrNew[i] << " ";
    }
}