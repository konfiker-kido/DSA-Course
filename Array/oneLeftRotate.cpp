#include <iostream>
using namespace std;
// Rotated Array
//  1 2 3 4 5 =>  2 3 4 5 1
void leftRotate(int arr[], int size)
{

    int temp = arr[0];
    for (int i = 1; i < size; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    leftRotate(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}