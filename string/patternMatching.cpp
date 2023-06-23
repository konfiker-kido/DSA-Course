#include <iostream>
using namespace std;
int main()
{

    // akash   ash
    string str;
    string pattern;
    cout << "Enter string " << endl;
    cin >> str;
    cout << "Enter pattern to match " << endl;
    cin >> pattern;

    bool flag = true;
    for (int i = 0; i <= str.length() - pattern.length(); i++)
    {
        flag = true;
        int start = 0;
        for (int j = i; j < i + pattern.length(); j++)
        {
            if (str[j] != pattern[start])
                flag = false;
            start++;
        }
        if (flag)
            break;
    }
    if (flag)
        cout << "Pattern matched ";
    else
        cout << "Pattern Not Matched";
    return 0;
}