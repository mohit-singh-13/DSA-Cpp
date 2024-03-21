//To get the sum of all the elements of an array.

#include<iostream>
using namespace std;

int getSum(int num[], int size);

int main()
{

    int size;
    cout << "Enter the size : ";
    cin >> size;

    int num[100];

    for (int i=0 ; i<size ; i++)
    {
        cin >> num[i];
    }

    cout << "Sum of all the numbers is : " << getSum(num, size);

    return 0;

}

int getSum(int num[], int size)
{

    int sum = 0;

    for (int i=0 ; i<size ; i++)
    {
        sum = sum + num[i];
    }

    return sum;

}