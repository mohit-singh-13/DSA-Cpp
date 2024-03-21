/*You have been given an integer array ARR of size 'N'. It only contains 0s, 1s and 2s. 
Write a solution to sort this array.*/ 

#include<iostream>
using namespace std;

void sort012(int arr[], int size);

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

    sort012(arr, size);

    return 0;
}

void sort012(int arr[], int size)
{
    int i = 0, j = size - 1;

    while (i<j)
    {
        while (arr[i] == 0)
        {
            i++;
        }

        while (arr[j] == 2)
        {
            j--;
        }

        if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }

        if (arr[i] == 2 && arr[j] == 1)
        {
            swap(arr[i], arr[j]);
            j--;
        }

        if (arr[i] == 2 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }

        if (arr[i] == arr[j])
        {
            int k = j;

            while (arr[k]!=0)
            {
                k--;
            }

            if (i<k)
            {
                swap(arr[i], arr[k]);
            }

            i++;
        }
    }

    cout << "Output : ";
    for (int i=0 ; i<size ; i++)
    {
        cout << arr[i] << " ";
    }
}