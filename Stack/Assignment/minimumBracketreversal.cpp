// cout the reversal Problem

#include <iostream>
#include <stack>

using namespace std;

int bracketReversal(string str)
{
    if (str.size() % 2 != 0)
        return -1;
    stack<char> st;

    for (char ch : str)
    {
        if (ch == '(')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }

    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    int ans = 0;
    while (!st.empty())
    {
        char a = st.top();
        st.pop();
        char b = st.top();
        st.pop();
        if (a == b)
            ans += 1;
        else
            ans += 2;
    }
    return ans;
}
int main()
{

    string str = ")(())(((";
    cout << bracketReversal(str);
    return 0;
}