// Write a program in C++ to divide two numbers and print on the screen.

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter two number : ";
    cin >> a >> b;

    int result = a / b; // this line might get exception if user entered 0

    cout << "Result : " << result;

    return 0;
}


