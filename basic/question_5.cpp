// Write a program in C++ to compute the total and average of four numbers

#include <iostream>
using namespace std;

int main()
{
    int a[4];

    int total = 0;
    cout << "Enter four values : ";
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    double avg = total / 4;

    cout << "Total is : " << total << endl;
    cout << "Average is : " << avg << endl;
}