// C++ Program to Check whether year is Leap year or not

// for leap year , it is mendatory that year is divisible by 4 and not divisible by 100 or divisible by
// 400
//              ( (  (year % 4 == 0) && (AND) (year % 100 != 0) ) || (OR) ( year % 400 == 0 ) )

#include <iostream>
using namespace std;

int main()
{

    int year;
    cout << "Enter year : ";
    cin >> year;

    if ((((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)))
        cout << "Leap year";
    else
        cout << "Normal year";

    return 0;
}