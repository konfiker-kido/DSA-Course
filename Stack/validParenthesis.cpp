#include <iostream>
#include <stack>
using namespace std;

bool validParenthesis(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        // for opening brackets
        if (str[i] == '{' or str[i] == '(' or str[i] == '[')
            s.push(str[i]);
        else
        {
            if (!s.empty())
            {
                // closing brackets
                if (str[i] == '}' and s.top() == '{')
                    s.pop();
                else if (str[i] == ')' and s.top() == '(')
                    s.pop();
                else if (str[i] == ']' and s.top() == '[')
                    s.pop();
                else // brackets not maching
                    return false;
            }
            else
            {
                return false;
            }
        }
    }
    if (s.empty())
        return true;
    return false;
}

int main()
{
    // string str = "({[]})";
    string str = "()";
    stack<char> s;
    if (validParenthesis(str))
        cout << "true";
    else
        cout << "False";
    return 0;
}