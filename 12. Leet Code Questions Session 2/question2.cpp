/*Given an array of integers arr, return true if the number of occurrences of each value in
the array is unique, or false otherwise.*/

#include<iostream>
using namespace std;

bool uniqueOccurences(int arr[], int size);
bool halfWayArray(int arr2[], int size2, int element);
bool answer(int arr1[], int size1);

int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;

    int arr[100];

    cout << "Enter the array : ";
    for (int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }

    bool answer = uniqueOccurences(arr, size);

    if (answer)
    {
        cout << "Answer : true";
    }
    else
    {
        cout << "Answer : flase";
    }

    return 0;
}

bool uniqueOccurences(int arr[], int size)
{
    int arr1[100];
    int size1 = 0;

    for (int i=0 ; i<size ; i++)
    {
        int count = 0;
        int k = arr[i];

        if (halfWayArray(arr, i, k))
        {
            for (int j=i ; j<size ; j++)
            {
                if (arr[j] == k)
                {
                    count++;
                }
            }

            arr1[i] = count;
            size1++;
        }
    }

    bool ans = answer(arr1, size1);

    return ans;
}

bool halfWayArray(int arr[], int size2, int element)
{
    for (int i=0 ; i<size2 ; i++)
    {
        if (arr[i] == element)
        {
            return false;
        }
    }

    return true;
}

bool answer (int arr1[], int size1)
{
    for (int i=0 ; i<size1 ; i++)
    {
        for (int j=i+1 ; j<size1 ; j++)
        {
            if (arr1[i] == arr1[j])
            {
                return false;
            }
        }
    }

    return true;
}