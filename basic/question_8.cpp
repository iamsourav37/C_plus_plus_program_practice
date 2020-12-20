
// C++ Program to Swap Two Numbers Without Using third variable

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    cout << "Before swapping, Numbers are " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping Numbers are : " << endl;

    cout << "a is : " << a << endl;
    cout << "b is : " << b << endl;

    return 0;
}