#include <iostream>
#include <algorithm>
using namespace std;

int minSteps(string str)
{
    // Write your code here.
    int a = 0, b = 0;
    if (str[0] == 'a')
        a++;
    else
        b++;
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i - 1] == 'b' and str[i] == 'a')
            a++;
        else if (str[i - 1] == 'a' and str[i] == 'b')
            b++;
    }
    cout << a << " " << b << endl;
    return min(a, b) + 1;
}

int main()
{

    // string str = "aababaa";
    string str = "bbaaabb";
    cout << minSteps(str);
    return 0;
}