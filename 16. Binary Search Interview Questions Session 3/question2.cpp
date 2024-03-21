/*Aggressive cows problems

Given an array of length 'N', where each element denotes the position of a stall. Now you have
'N' stalls and an integer 'k' which denotes the number of cows that are aggrerssive. To prevent 
the cows from hurting each other, you need to assign the cows to the stalls, such that the 
minimum distance between any two of them is as large as possible. Return the largest minimum
distance.*/

/*This question need sorted array.*/

#include<iostream>
using namespace std;

void enterArray(int arr[], int size);
int cowsStalls(int arr[], int stalls, int aggCows);
bool isPossible(int arr[], int stalls, int aggCows, int mid);

int main()
{
    int stalls;
    cout << "Enter the number of stalls : ";
    cin >> stalls;

    int arr[100];

    cout << "Enter the position of each stall : ";
    enterArray(arr, stalls);

    int aggCows;
    cout << "Enter the number of aggressive cows : ";
    cin >> aggCows;

    cout << "Answer : " << cowsStalls(arr, stalls, aggCows) << endl;
    cout << endl;

    return 0;
}

void enterArray(int arr[], int size)
{
    for (int i=0 ; i<size ; i++)
    {
        cin >> arr[i];
    }
}

int cowsStalls(int arr[], int stalls, int aggCows)
{
    int start = 0;

    int maxi = -1;
    for (int i=0 ; i<stalls ; i++)
    {
        maxi = max(arr[i], maxi);
    }
    int end = maxi;

    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start<=end)
    {
        if (isPossible(arr, stalls, aggCows, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

bool isPossible(int arr[], int stalls, int aggCows, int mid)
{
    int cowsCount = 1;
    int lastPosition = arr[0];

    for (int i=0 ; i<stalls ; i++)
    {
        if (arr[i] - lastPosition >= mid)
        {
            cowsCount++;

            if (cowsCount == aggCows)
            {
                return true;
            }

            lastPosition = arr[i];
        }
    }

    return false;
}