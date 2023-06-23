#include <iostream>
using namespace std;

void reverseString(string &str, int start, int end)
{
    cout << "Stack fill " << start << " ---- ";
    cout << str << endl;
    if (start > end)
        return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);
    cout << "Stack poped " << start << " ---- ";
    cout << str << endl;
}

int main()
{

    string str = "ABCDE";
    int len = str.length();
    int end = len - 1;
    reverseString(str, 0, end);
    // cout << str;
    return 0;
}