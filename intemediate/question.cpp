// C++ Program to Find number of Digits in any number

#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter any number : ";
    cin >> number;

    int counter = 0;

    while (number != 0)
    {

        counter++;
        number /= 10;
    }

    cout << "Digits : " << counter;

    return 0;
}