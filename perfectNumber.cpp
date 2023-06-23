#include <iostream>
using namespace std;

int main()
{

    for (int num = 1; num <= 500; num++)
    {
        int sum = 0;
        for (int j = 1; j <= num / 2; j++)
        {
            if (num % j == 0)
                sum += j;
        }
        if (sum == num)
            cout << num << " is Perfect Number" << endl;
    }
    return 0;
}