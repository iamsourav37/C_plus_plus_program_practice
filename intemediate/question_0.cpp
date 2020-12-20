// C++ Program to Check given number is Prime number or not

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter any number : ";
    cin >> n;

    bool is_prime = true;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }

    if (is_prime)
        cout << "Its a prime number";
    else
        cout << "Its not a prime number";

    return 0;
}
