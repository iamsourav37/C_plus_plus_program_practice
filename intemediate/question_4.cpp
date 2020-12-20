// C++ program to find sum of digits of a number

#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter any number : ";
    cin >> number;

    int sum = 0;

    while (number != 0)
    {

        sum += number % 10;
        number /= 10;
    }

    cout << "Sum of all digits : " << sum;

    return 0;
}