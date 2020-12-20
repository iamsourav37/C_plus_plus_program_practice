#include <iostream>
using namespace std;

// swapping values using reference variable

void changeValue(int &a, int &b)
{

    int t = a;
    a = b;
    b = t;
}

int main()
{

    int a, b;

    cout << "Enter a :";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    changeValue(a, b);
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
}
