#include <iostream>
#include <vector>
using namespace std;

void zeroOne(vector<int> arr)
{

    int zero = 0, one = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (i < zero)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
}

int main()
{

    vector<int> val = {0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0};
    zeroOne(val);
    return 0;
}