#include <iostream>
#include <vector>
#include <string>
using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
// string maxOdd(string str)
// {
//     vector<int> v;
//     double digit = -1;
//     for (int first = 0; first < str.length(); first++)
//     {
//         int digFirst = str[first] - '0';
//         double ansDig = 0;
//         for (int sec = first; sec < str.length(); sec++)
//         {
//             int digSec = str[sec] - '0';
//             ansDig = (ansDig * 10) + (str[sec] - '0');
//             if (ansDig % 2 != 0)
//                 digit = max(ansDig, digit);
//         }
//     }

//     if (digit == -1)
//         return "";
//     return to_string(digit);
// }

// string maxOdd(string str)
// {
//     int n = str.size();
//     int idx = -1;
//     int i = (n - 1);
//     while (i >= 0)
//     {
//         int num = str[i] - '0';
//         if (num % 2 != 0)
//         {
//             idx = i;
//             break;
//         }
//         else
//         {
//             i--;
//         }
//     }
//     if (idx == -1)
//     {
//         return "";
//     }
//     else
//     {
//         int i = 0;
//         string ans = "";
//         while (i <= idx)
//         {
//             ans += str[i];
//             i++;
//         }
//         return ans;
//     }
//     return "";
// }

string maxOdd(string s)
{
    // Approach
    int n = s.length();
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] % 2 == 0)
            s.pop_back();
        else
            break;
    }
    return s;
}
int main()
{
    string str = "202492";
    cout << maxOdd(str);

    return 0;
}