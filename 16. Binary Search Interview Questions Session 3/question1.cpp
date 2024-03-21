/*Given an array 'arr' of integer numbers. Where arr[i] represents the number of pages in the
i-th book. There are 'm' number of students and the task is to allocate all the books to their
students. Allocate books in such a way that: 
1- Each student gets at least one book.
2- Each book should be allocated to a student.
3- Book allocation should be in a contiguous manner.

You have to allocate the book to 'm' students such that the maximum number of pages assigned
to a student is minimum.*/

#include<iostream>
using namespace std;

void enterArray(int arr[], int size);
int allocateBooks(int arr[], int noBooks, int noStudents);
bool isPossible(int arr[], int noBooks, int noStudents, int mid);

int main()
{
    int noBooks;
    cout << "Enter number of books : ";
    cin >> noBooks;

    int arr[100];

    cout << "Enter no. of pages in each book : ";
    enterArray(arr, noBooks);

    int noStudents;
    cout << "Enter number of students : ";
    cin >> noStudents;

    cout << "Answer : " << allocateBooks(arr, noBooks, noStudents) << endl;
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

int allocateBooks(int arr[], int noBooks, int noStudents)
{
    int start = 0;
    int sum = 0;

    for (int i=0 ; i<noBooks ; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start<=end)
    {
        if (isPossible(arr, noBooks, noStudents, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

bool isPossible(int arr[], int noBooks, int noStudents, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i=0 ; i<noBooks ; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;

            if(studentCount > noStudents || arr[i] > mid)
            {
                return false;
            }

            pageSum = arr[i];
        }
    }

    return true;
}