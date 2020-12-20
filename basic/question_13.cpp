// C++ Program to Check Character is Uppercase, Lowercase, Digit or Special Character

#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter any character : ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Character is uppercase";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Character is lowercase";
    else if (ch >= '0' && ch <= '9')
        cout << "Character is a number";
    else
        cout << "It is a special characrer";

    return 0;
}