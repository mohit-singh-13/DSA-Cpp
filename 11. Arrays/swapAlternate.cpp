#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size);
void printArray(int arr[], int size);

int main()
{

    int arr1[6] = {1, 4, 0, 5, -2, 15};
    int arr2[7] = {2, 6, 3, 9, 4, 0, 5};
    int arr3[5] = {1, 2, 7, 8, 5};

    swapAlternate(arr1, 6);
    swapAlternate(arr2, 7);
    swapAlternate(arr3, 5);

    printArray(arr1, 6);
    printArray(arr2, 7);
    printArray(arr3, 5);

    return 0;

}

void swapAlternate(int arr[], int size)
{

    int start = 0;
    int end = 1;

    while (start<size-1)    //we can also use 'for' loop with "i and i+1"
    {
        swap(arr[start], arr[end]);
        start = end + 1;
        end = start + 1;
    }

}

void printArray(int arr[], int size)
{

    cout << "Resulted array : ";

    for (int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}