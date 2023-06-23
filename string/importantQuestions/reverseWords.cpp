#include <iostream>
#include <stack>
using namespace std;

string reverseWords(string S)
{
    // code here
    stack<string> s;
    string str = "";

    for (int i = 0; i < S.length(); i++)
    {

        if (S[i] == '.')
        {
            s.push(str);
            s.push(".");
            str = "";
        }
        else if (i == S.length() - 1)
        {
            str += S[i];
            s.push(str);
        }
        else
        {
            str += S[i];
        }
    }
    string ans = "";
    while (!s.empty())
    {
        ans += s.top();
        s.pop();
    }
    return ans;
}

int main()
{
    string str = "i.like.this.program.very.much";
    cout << reverseWords(str);

    return 0;
}