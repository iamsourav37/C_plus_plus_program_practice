/* Write a program in C++ to compute quotient and remainder. Go to the editor */

#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the dividend  : ";
    int dividend;
    cin >> dividend;

    cout << "Enter the divisor : ";
    int divisor;
    cin >> divisor;

    int quotent = dividend / divisor;
    int remainder = dividend % divisor;

    cout << "The quotent of the division : " << quotent << endl;
    cout << "The remainder of the division : " << remainder << endl;
}
