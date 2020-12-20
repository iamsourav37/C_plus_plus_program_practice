// C++ Program to Check Number is Odd or Even
#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter any number : ";
    cin >> number;

    if (number % 2 == 0)
        cout << "Even number";
    else
        cout << "Odd number";

    return 0;
}