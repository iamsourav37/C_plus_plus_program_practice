// C++ Program to Find HCF of two numbers

//  HCF :- Heighest Common Factor

// 20 , 30  hcf is 10

// Factors of 20 :  1 2 4 5 10 20
// Factors of 30 :  1 2 3 5 6 10 15 30

// Common factors are : 1 , 2, 5, 10
//  HCF is 10

// 5 ,6
// 1 5
// 1 2 3 6

// 20 , 15
// Factors of 20 :  1 2 4 5 10 20
// Factors of 15 : 1 2 3 5 15
// hcf is 5

#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    int hcf;

    for (int i = (a < b ? a : b) / 2; i != 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }

    cout << "HCF is : " << hcf;

    return 0;
}