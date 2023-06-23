#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A'};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        if (arr[i] != '0')
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = '0';
                }
            }

            cout << arr[i] << " -> " << count << endl;
        }
    }
    return 0;
}