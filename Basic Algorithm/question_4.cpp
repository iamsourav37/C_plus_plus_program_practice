// Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200

#include <iostream>
using namespace std;

bool test(int a) // my code
{
    if ((a <= 110 && a >= 90) || (a <= 210 && a >= 190))
        return true;

    return false;
}

bool test2(int a) // Solution Code
{

    if (abs(a - 100) <= 10 || abs(a - 200) <= 10)
        return true;

    return false;
}

int main()
{
    int a;
    cin >> a;
    cout << test(a) << endl;
    cout << test2(a);

    return 0;
}