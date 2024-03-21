/*Check if array is sorted and rotated.*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    int size;
    cout << "Enter no. of elements : ";
    cin >> size;

    cout << "Enter elements : ";
    for (int i=0 ; i<size ; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    cout << endl;

    int count = 0;  //to keep the count of comparisions

    for (int i=1 ; i<size ; i++)
    {
        if (v[i-1] > v[i])
        {
            count++;
        }
    }

    if (v[size-1] > v[0])
    {
        count++;
    }

    if (count <= 1)
    {
        cout << "This is a sorted rotated array.";
    }
    else
    {
        cout << "This is NOT a sorted rotated array.";
    }

    return 0;
}