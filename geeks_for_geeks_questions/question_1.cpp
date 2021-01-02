// C program to find largest and smallest element in an array
#include <iostream>
#include <climits>

using namespace std;
int main()
{

    int sizeOfArray = 5;
    int arr[sizeOfArray];

    cout << "Enter " << sizeOfArray << " elements : \n";
    for (int i = 0; i < sizeOfArray; i++)
        cin >> arr[i];

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < sizeOfArray; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout << "Maximum : " << maxNo << endl;
    cout << "Minimum : " << minNo << endl;

    return 0;
}