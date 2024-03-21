#include<iostream>
#include<math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value : ";
    cin >> n;

    int answer = 0;
    int i = 0;

    while (n!=0)
    {
        int digit = n % 10;

        if (digit==1)
        {
            answer = pow(2, i) + answer;
        }

        n = n / 10;
        i++;
    }
    cout << "The number in Decimal is : " << answer << endl;

}