// Website Link : https://www.geeksforgeeks.org/cc-programs/

// C Program to find sum of elements in a given array

#include <iostream>

using namespace std;

int main()
{

    int sizeOfArray = 5;
    int arr[sizeOfArray];
    int sum = 0;

    cout << "Enter " << sizeOfArray << " elements : \n";
    for (int i = 0; i < sizeOfArray; i++)
        cin >> arr[i];
   

    for (int i = 0; i < sizeOfArray; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of elements : " << sum;

    return 0;
}