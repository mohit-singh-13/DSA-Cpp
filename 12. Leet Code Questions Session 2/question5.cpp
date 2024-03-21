/*You are given an integer array 'ARR' of size 'N' and an integer 'S'. Yout task is to return 
the list of all pairs of elements such that each sum of elements of each pair equals 'S'.*/

#include<iostream>
using namespace std;

void pairSum(int arr[], int size, int S);

int main()
{
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[100];

    cout << "Enter array : ";
    for (int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }

    int S;
    cout << "Enter the value of 'S' : ";
    cin >> S;

    pairSum(arr, size, S);

    return 0;
}

void pairSum(int arr[], int size, int S)
{
    for (int i=0 ; i<size ; i++)
    {
        for (int j=i+1 ; j<size ; j++)
        {
            if (arr[i] + arr[j] == S)
            {
                int minNum, maxNum;
                minNum = min(arr[i], arr[j]);
                maxNum = max(arr[i], arr[j]);

                cout << minNum << " " << maxNum << endl;
            }
        }
    }
}