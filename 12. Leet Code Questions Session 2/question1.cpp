/*You have given an integer array of size N. Where N is equal to (2m + 1). Now, in the given
arraylist, 'm' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the arraylist.*/

#include<iostream>
using namespace std;

int findUnique(int arr[], int size);

int main()
{

    int size;
    cout << "Enter the size : ";
    cin >> size;

    int arr[50];

    for (int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }

    cout << "Unique element is : " << findUnique(arr, size);

    return 0;

}

int findUnique(int arr[], int size)
{

    int ans = 0;

    for (int i=0 ; i<size ; i++)
    {
        ans = (ans ^ arr[i]);
    }

    return ans;

}