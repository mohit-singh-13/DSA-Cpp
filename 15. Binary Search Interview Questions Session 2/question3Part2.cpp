/*To find square root of a number with decimal precision.*/

#include<iostream>
using namespace std;

long long int sqrRootInt(int num);
double sqrRootDec(int num, int precision, int tempAns);

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    int tempAns = sqrRootInt(num);
    
    cout << "Square root of " << num << " is : " << sqrRootDec(num, 5, tempAns) << endl;
    cout << "\n";

    return 0;
}

long long int sqrRootInt(int num)
{
    int start = 0;
    int end = num;
    long long int ans = -1;

    while (start<=end)
    {
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;

        if(square == num)
        {
            return mid;
        }
        else if (square >= num)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
    }

    return ans;
}

double sqrRootDec(int num, int precision, int tempAns)
{
    double decimals = 1;
    double ans = tempAns;

    for (int i=1 ; i<=precision ; i++)
    {
        decimals = decimals / 10;

        for (double j=ans ; j*j<=num ; j=j+decimals)
        {
            ans = j;
        }
    }

    return ans;
}