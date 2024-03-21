/*Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer
part of the result is returned.

Note : You are not allowed to use any built-in exponent funtion or operator, such as pow.*/

#include<iostream>
using namespace std;

int sqrRoot(int num);

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    cout << "Sqaure root of " << num << " is : " << sqrRoot(num);

    return 0;
}

int sqrRoot(int num)
{
    int start = 0;
    int end = num;
    int ans;

    while (start<=end)
    {
        int mid = start + (end - start) / 2;

        if (mid*mid == num)
        {
            return mid;
        }
        else if (mid*mid > num)
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