/*You are given an array ARR consisting of N integers. Your task is to find all the distinct
triplets present in the array which adds up to a given number K.

An array is said to have a triplet (ARR[i], ARR[j], ARR[k]) with sum = 'K' if there exists 
three indices i, j and k such that i!=j, j!=k and i!=k and ARR[i] + ARR[j] + ARR[k] = 'K'.*/

#include<iostream>
using namespace std;

void triplets(int arr[], int size, int K);

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

    int K;
    cout << "Enter the value of 'K' : ";
    cin >> K;

    triplets(arr, size, K);

    return 0;
}

void triplets(int arr[], int size, int K)
{
    bool flag = true;

    for (int i=0 ; i<size ; i++)
    {
        for (int j=i+1 ; j<size ; j++)
        {
            for (int k=j+1 ; k<size ; k++)
            {
                if (arr[i] + arr[j] + arr[k] == K)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    flag = false;
                }
            }
        }
    }

    if (flag)
    {
        cout << "-1" << endl;
    }
}