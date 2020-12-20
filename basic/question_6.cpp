// Write a program in C++ to check whether a number is positive, negative or zero.
#include <iostream>
using namespace std;

int main()
{

    cout << "Enter any number : ";
    int number;
    cin >> number;

    if (number < 0)
        cout << "Negative Number";
    else if (number > 0)
        cout << "Positive Number";
    else
        cout << "Number is Zero";
}