/*Given a signed 32-bit integer n, return n with its digits reversed. 
If reversing n causes the value to go outside the signed 32-bit integer range (-2^31, 2^31 - 1), then return 0.*/

#include<iostream>
#include<climits>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int answer = 0;
    bool print = true;

    while (n!=0)
    {
        int digit = (n % 10);

        if ((answer>INT_MAX/10) || (answer<INT_MIN/10))
        {
            cout << "0" << endl;
            print = false;
            break;
        }

        answer = (answer * 10) + digit;

        n = (n / 10);
    }

    if (print)
    {
        cout << "Rever of the Integer is : " << answer << endl;
    }


}