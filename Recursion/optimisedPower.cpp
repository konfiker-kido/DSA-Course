#include <iostream>
using namespace std;

int powerFunc(int num, int times)
{

    if (times == 0)
        return 1;
    if (times == 1)
        return num;

    // recursive call
    int ans = powerFunc(num, times / 2);

    if (times % 2 == 0)
        return ans * ans;
    else
        return num * ans * ans;
}
int main()
{

    cout << powerFunc(2, 10);

    return 0;
}