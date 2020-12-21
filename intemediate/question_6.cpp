// C++ Program to Generate Fibonacci Series for N numbers

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int a = 0;
    int b = 1;

    int result = 0;

    cout << a << " " << b << " ";

    while (result < n)
    {

        result = a + b;
        cout << result << " ";
        a = b;
        b = result;
    }

    return 0;
}