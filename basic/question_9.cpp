#include <iostream>
#include <cmath>
using namespace std;

// Write a C++ Program to raise any number X to power N

int main()
{
    int base, expo;
    cout << "Enter base number : ";
    cin >> base >> expo;
    cout << "Power is : " << pow(base, expo)<<endl;



    return 0;
}