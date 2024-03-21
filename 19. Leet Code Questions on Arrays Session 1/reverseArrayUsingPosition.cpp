/* Reverse the array. */

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v, int pos);
void printVector(vector<int> v);

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

    int pos;
    cout << "Enter position : ";
    cin >> pos;

    vector<int> ans = reverse(v, pos);

    printVector(ans);

    return 0;
}

vector<int> reverse(vector<int> v, int pos)
{
    int s = pos + 1;
    int e = v.size() - 1;

    while (s < e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;
}

void printVector(vector<int> v)
{
    cout << "Reversed array : ";
    for (int i= 0 ; i<v.size() ; i++)
    {
        cout << v[i] << " ";
    }
}