// C++ program to find cube of number using macros

#include <iostream>
using namespace std;

#define CUBE(x) (x * x * x)

int main()
{

    int number;
    cout << "Enter any number for cube : ";
    cin >> number;

    cout << "Cube is : " << CUBE(number);

    return 0;
}