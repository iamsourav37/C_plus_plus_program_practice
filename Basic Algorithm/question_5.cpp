// Write a C++ program to remove the character in a given position of a given string.The given position will be in the range 0..string length - 1 inclusive.

#include <iostream>
using namespace std;

string removeCharacter(string str, int index)
{

    return str.erase(index, 1);
}

int main()
{
    string s = "python";
    int index;
    cin >> index;

    cout << removeCharacter(s, index);

    return 0;
}