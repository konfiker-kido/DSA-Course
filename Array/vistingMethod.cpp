//   N - Size of array
//   a[i]  e [1,N]
// Missing element from an Array with duplicate element

#include <iostream>
using namespace std;

void findMissing(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
            arr[index - 1] = -1 * arr[index - 1];
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            cout << i + 1 << " is missing" << endl;
        }
    }
}

void sortingSwapping(int arr[], int size)
{

     




    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {1, 3, 4, 5, 3};
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    int size = sizeof(arr) / sizeof(int);

    // findMissing(arr, size);
    sortingSwapping(arr, size);

    return 0;
}