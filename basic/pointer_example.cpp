#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *b = &a;

    // & is called address of operator
    // * is called dereference operator

    cout << "Address of a is : " << &a << endl;
    cout << "Value of b is : " << b<<endl;

    // here address of a and value of b is same
    // and value of a and value at address of b (*b) is same

    cout << "Value of a is : " << a << endl;
    cout << "*b or the value at address of b is : " << *b<<endl;

    return 0;
}