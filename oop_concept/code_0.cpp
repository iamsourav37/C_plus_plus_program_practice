#include <iostream>
using namespace std;

class Binary
{

private:
    string binary;
    void checkBinary();

public:
    void display();
    void read();
    void onesCompliment();
};

void Binary::checkBinary()
{

    for (int i = 0; i < binary.length(); i++)
    {

        if (binary.at(i) != '0' && binary.at(i) != '1')
        {
            cout << "\nIncorrect binary format\n";
            exit(0);
        }
    }
}

void Binary::read()
{
    cout << "Enter binary number : ";
    cin >> binary;
}

void Binary::display()
{
    checkBinary();

    cout << "\nDisplaying binary number : " << endl;
    cout << binary;
    // for (int i = 0; i < binary.length(); i++)
    // {
    //     cout << binary.at(i);
    // }
}

void Binary::onesCompliment()
{
    checkBinary();

    for (int i = 0; i < binary.length(); i++)
    {
        if (binary.at(i) == '0')
            binary.at(i) = '1';
        else
            binary.at(i) = '0';
    }
}

int main()
{

    Binary binary = Binary();
    binary.read();
    binary.display();
    binary.onesCompliment();
    binary.display();

    return 0;
}