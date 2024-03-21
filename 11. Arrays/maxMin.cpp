#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int num[], int size);
int getMin(int num[], int size);

int main()
{

    int size;
    cout << "Enter the size : ";
    cin >> size;

    //int num[size];    //it is a bad practice
    int num[100];

    for (int i=0 ; i<size ; i++)    //taling input in array
    {
        cin >> num[i];
    }

    cout << "Maximum value is : " << getMax(num, size) << endl;
    cout << "Minimum value is : " << getMin(num, size) << endl;

    return 0;

}

int getMax(int num[], int size)
{

    int max =  INT_MIN;

    for (int i=0 ; i<size ; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    return max;

}

int getMin(int num[], int size)
{

    int min = INT_MAX;

    for (int i=0 ; i<size ; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    return min;

}