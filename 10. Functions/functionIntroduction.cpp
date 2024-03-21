#include<iostream>
using namespace std;

int power(int num1, int num2);  //function prototype declaration

int main()
{

    int a, b;
    cout << "Enter the values : ";
    cin >> a >> b;

    int answer = power(a, b);  //function calling    

    cout << "Answer : " << answer << endl;

}

int power(int num1, int num2)  //function definition
{

    int answer = 1;

    for (int i=1 ; i<=num2 ; i++)
    {
        answer = answer * num1;
    }

    return answer;

}