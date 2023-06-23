#include <iostream>
using namespace std;

int main()
{

    int num = 1221;

    int temp = num;
    int reverse = 0;
    while (num > 0)
    {
        reverse = (reverse * 10) + num % 10;
        num /= 10;
    }
    (reverse == temp) ? cout << "number is Palindrom" : cout << "Not Palindrom";

    return 0;
}