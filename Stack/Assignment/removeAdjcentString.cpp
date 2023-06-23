#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;
string removeDuplicates(string s)
{

    stack<char> st;

    for (auto ch : s)
    {
        if (!st.empty() and st.top() == ch)
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{

    string str = "abbaca";
    cout << "Original string is-> " << str << endl;
    string ans = removeDuplicates(str);
    cout << "Removed duplicates string is-> " << ans;
    return 0;
}