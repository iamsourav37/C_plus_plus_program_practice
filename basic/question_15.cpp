// C++ program to Print Table of any Number

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    for (int i = 1; i <= 10; i++)
        cout << number << " X " << i << " = " << i * number << endl;

    return 0;
}