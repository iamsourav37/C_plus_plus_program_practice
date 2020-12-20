// C++ Program to Convert Days Into Years, Weeks and Days

#include <iostream>
using namespace std;

int main()
{

    int days;
    cout << "Enter days : ";
    cin >> days; // 400

    int year, months, weeks;

    year = days / 365;
    days = days % 365;

    months = days / 30;
    days = days % 30;

    weeks = days / 7;
    days = days % 7;

    cout << "Year : " << year << endl;
    cout << "Months : " << months << endl;
    cout << "Weeks : " << weeks << endl;
    cout << "Days : " << days << endl;
    return 0;
}