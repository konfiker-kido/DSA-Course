#include <iostream>
#include <stack>
using namespace std;

string reverseWords(string S)
{
    // code here

    stack<string> st;
    string ans = "";
    for (int i = 0; i < S.length(); i++)
    {
        if (i == S.length() - 1)
        {
            ans += S[i];
            st.push(ans);
        }
        else if (S[i] == '.')
        {
            st.push(ans);
            st.push(".");
            ans = "";
        }
        else
        {
            ans += S[i];
        }
    }
    string ansStr = "";
    while (!st.empty())
    {
        // cout << st.top() << endl;
        ansStr += st.top();

        st.pop();
    }

    return ansStr;
}

int main()
{
    string str = "i.like.this.program.very.much";
    cout << "Original String-- " << endl;
    cout << str << endl;
    cout << "Reversed String ---" << endl;
    cout << reverseWords(str);
    return 0;
}