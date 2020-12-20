// C++ Program to find Factorial of a Number
#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter any number : ";
    cin >> number; // 5

    int fact = 1;
    int temp = number;

    while (temp != 0)
    {

        fact *= temp;
        temp--;
    }

    cout << "Factorial of " << number << " is " << fact;

    return 0;
}