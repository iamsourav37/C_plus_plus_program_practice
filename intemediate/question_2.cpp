// C++ Program to Reverse a Number

#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter any number : ";
    cin >> number;

    int reverseNumber = 0;

    while (number != 0)
    {

        int rem = number % 10;
        number /= 10;

        reverseNumber = (reverseNumber * 10) + rem;
    }

    cout << "Reverse number is : " << reverseNumber;

    return 0;
}