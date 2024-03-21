#include<iostream>
using namespace std;

void reverse(int arr[], int size);
void printArray(int arr[], int size);

int main()
{

    int arr1[6] = {1, 4, 0, 5, -2, 15};
    int arr2[5] = {2, 6, 3, 9, 4};

    reverse(arr1, 6);
    reverse (arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);

    return 0;

}

void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

void printArray(int arr[], int size)
{

    cout << "Reversed array : ";

    for (int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}