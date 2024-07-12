#include <iostream>
using namespace std;

void readIntegers(int *arr, int size)
{
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void printAscending(int *arr, int size)
{
    cout << "Array elements in ascending order:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printDescending(int *arr, int size)
{
    std::cout << "Array elements in descending order:\n";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[10];
    readIntegers(arr, 10);

    // Sort thehe array (bubble sort)
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printAscending(arr, 10);
    printDescending(arr, 10);

    return 0;
}

// Enter 10 integers:
// 21
// 23
// 2
// 4
// 99
// 48
// 65
// 377
// 01
// 49
// Array elements in ascending order:
// 1 2 4 21 23 48 49 65 99 377 
// Array elements in descending order:
// 377 99 65 49 48 23 21 4 2 1 