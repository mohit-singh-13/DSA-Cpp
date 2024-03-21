//count number of 1 bits

#include<iostream>
using namespace std;

int main()
{

    int unsigned n;
    cout << "Enter the value : ";
    cin >> n;

    int count = 0;

    while (n!=0)
    {
        //checking last bit
        if (n&1)
        {
            count++;
        }
        n = n >> 1;
    }

    cout << "Number of 1 bits : " << count << endl;

}