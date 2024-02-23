#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 14, 7, 6, 10, 9};
    int size = sizeof(arr) / sizeof(int);

    for (int i = size - 1; i >= 0; i--)
    {

        for (int j = 0; j < i; j++)
        {

            if (arr[j] > arr[j + 1])
            swap(arr[j], arr[j + 1]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}