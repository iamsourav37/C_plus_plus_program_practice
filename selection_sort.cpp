#include <iostream>
using namespace std;

void selectionSort(int arr[], int length)
{

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {

            if (arr[j] < arr[i])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

int main()
{

    int length = 4;
    int arr[length];

    cout << "Enter " << length << " elements : \n";

    for (int i = 0; i < length; i++)
        cin >> arr[i];

    selectionSort(arr, length);
    cout << "After Selection Sort\n";

    for (int i = 0; i < length; i++)
        cout << arr[i] << endl;
}
