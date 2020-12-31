// C++ Program to Check Number is Unique Number or Not

// A unique number is a number in which no digit is repeated. For example: 25712 is not a unique number as 2 is repeated twice while 4512 is a unique number.

#include <iostream>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
inline int getLastDigit(int number)
{
    return number % 10;
}

int main()
{
    int number;
    cout << "Enter any number : ";
    cin >> number;

    // TODO 1 : count the number of digits

    int count = countDigits(number);

    // TODO 2 : declare an array of that size
    int arr[count];

    // TODO 3 : initialize the array index by digits of the number
    int temp = number;
    for (int i = count - 1; i >= 0; i--)
    {
        arr[i] = getLastDigit(temp);
        temp /= 10;
    }

    // TODO 4 : now check if any repeatation is there or not
    bool flag = true;
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count - 1; j++)
        {
            if (arr[i] == arr[j + 1])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
            break;
    }

    if (flag)
        cout << "Its a unique number";
    else
        cout << "Not a unique number";

    string str = "Hello";
    cout << "Size of sring " << sizeof(str);

    return 0;
}