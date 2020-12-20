// Write a program in C++ to swap two numbers
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 21;

    int t = a;
    a = b;
    b = t;

    cout << a << endl;
    cout << b << endl;
    return 0;
}
