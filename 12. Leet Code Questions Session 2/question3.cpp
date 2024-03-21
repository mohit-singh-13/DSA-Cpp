/*You are given an array 'ARR' of size 'N' containing each number between 1 and 'N' - 1 at least
once. There is a single integer value that is present in the array twice. Your task is to
find the duplicate integer value present in the array.*/

#include<iostream>
using namespace std;

int duplicate(int arr[], int size);

int main()
{

    int size;
    cout << "Enter the size : ";
    cin >> size;

    int arr[100];

    for (int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate element in the array is : " << duplicate(arr, size) << endl;

    return 0;

}

int duplicate(int arr[], int size)
{

    int ans = 0;

    for (int i=0 ; i<size ; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i=1 ; i<size ; i++)
    {
        ans = ans ^ i;
    }

    return ans;

}