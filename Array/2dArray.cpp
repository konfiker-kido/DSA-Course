// coloum -Wise sum

#include <iostream>
#include <limits.h>
using namespace std;

void printColSum(int arr[][3], int r, int c) //**    index = (cols*i+j) thats why we have to pass the cols to the functuon so that we can map the index
{

    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum of " << i + 1 << " column -> " << sum << endl;
    }
}

void findMaxMin(int arr[][3], int r, int c)
{

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Minimum value is " << min << " max is " << max << endl;
}
int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printColSum(arr, 3, 3);
    findMaxMin(arr, 3, 3);

    return 0;
}