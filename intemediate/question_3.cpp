// C++ program to Find Largest Number among three numbers

#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter three values : ";

    cin >> a >> b >> c;

    int max = a > b ? a > c ? a : c : b > c ? b : c;

    cout << "Maximum is : " << max;

    return 0;
}
