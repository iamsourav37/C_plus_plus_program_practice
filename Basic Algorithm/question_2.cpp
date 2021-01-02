// Write a C++ program to check two given integers, and return true if one of them is 30 or if their sum is 30.

#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;

    if (a == 30 || b == 30 || a + b == 30)
        cout << "true";
    else
        cout << "false";

    return 0;
}