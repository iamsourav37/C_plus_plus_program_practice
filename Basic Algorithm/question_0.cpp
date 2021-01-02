// Write a C++ program to compute the sum of the two given integer values.If the two values are the same, then return triple their sum

#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;

    int sum = 0;

    if (a == b)
        sum = (a + b) * 3;
    else
        sum = a + b;

    cout << "sum : " << sum;
    return 0;
}