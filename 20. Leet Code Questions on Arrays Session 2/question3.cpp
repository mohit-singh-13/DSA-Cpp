/*Sum of two arrays.*/
/*    
    2 3
   +9 5
   ------
   1 1 8
   ------
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size;
    cout << "Enter no. of elements in v1 : ";
    cin >> size;

    vector<int> v1;

    cout << "Enter elements : ";
    for (int i=0 ; i<size ; i++)
    {
        int element;
        cin >> element;
        v1.push_back(element);
    }

    cout << "Enter no. of elements in v2 : ";
    cin >> size;

    vector<int> v2;

    cout << "Enter elements : ";
    for (int i=0 ; i<size ; i++)
    {
        int element;
        cin >> element;
        v2.push_back(element);
    }

    int i = v1.size() - 1;
    int j = v2.size() - 1;

    vector<int> ans;
    int carry = 0;

    while (i>=0 && j>=0)
    {
        int sum = v1[i] + v2[j] + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        i--;
        j--;
    }

    //case 1 : when array 1 is bigger
    while (i>=0)
    {
        int sum = v1[i] + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        i--;
    }

    //case 2 : when array 2 is bigger
    while (j>=0)
    {
        int sum = v2[j] + carry;

        carry = sum / 10;
        sum = sum % 10;

        ans.push_back(sum);

        j--;
    }

    //case 3 : equal length but generate carry
    if (carry != 0)
    {
        ans.push_back(carry);
    }

    //reversing the vector
    int start = 0;
    int end = ans.size() - 1;

    while (start < end)
    {
        swap(ans[start], ans[end]);
        
        start++;
        end--;
    }

    cout << "The sum of two arrays is : ";
    for (int i=0 ; i<ans.size() ; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}