// Write a C++ program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.

#include <iostream>
// #include <cmath>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int absDiff = abs(n - 51);

    if (n > 51)
        absDiff = absDiff * 3;
    cout << absDiff;

    return 0;
}
