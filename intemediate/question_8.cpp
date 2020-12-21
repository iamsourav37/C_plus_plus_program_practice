// C++ program to find LCM of two numbers using functions

// LCM :- Least Common Multiple

//    3 6

//  Multiple of 3 is : 6 9 12 15 .....
// Multiple of 6 is : 12 18 24 30 .....
// LCM is : 12

// 8 9

// 16 24 32 40 48 56 64 72
// 9 18 27 36 45 54 63 72
// LCM is 72

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    int lcm;
    int max = a > b ? a : b;

    for (int i = max; i <= a * b; i += max)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }

    cout << "LCM is : " << lcm;

    return 0;
}