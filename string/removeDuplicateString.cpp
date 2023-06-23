#include <iostream>
using namespace std;

// void removeDuplicate(string str)
// {

//     string s = "";
//     for (int i = 0; i < str.length() - 1; i++)
//     {
//         if (str[i] == str.length() - 2 and str[i] != str[i + 1])
//             s += str[i + 1];
//         if (str[i] != str[i + 1])
//             s += s[i];
//     }
// }

int main()
{
    string str = "abbaca";
    string s = "";
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] != str[i + 1])
            s += s[i];
    }
    cout << s;
    return 0;
}