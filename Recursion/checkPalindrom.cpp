#include <iostream>
using namespace std;

bool checkPalindrom(string str, int start, int end)
{

    if (start > end)
        return true;

    if (str[start] != str[end])
        return false;
    else
        return checkPalindrom(str, start + 1, end - 1);
}

int main()
{
    string str = "bookooB"; // palindrom string
    int end = str.length() - 1;
    if (checkPalindrom(str, 0, end))
        cout << "String is palindrom" << endl;
    else
        cout << "Not Palindrom" << endl;

    return 0;
}