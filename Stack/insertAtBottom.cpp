#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int> &s, int t)
{
    if (s.empty())
    {
        s.push(t);
        return;
    }
    int temp = s.top();
    s.pop();
    insertBottom(s, t);
    s.push(temp);
}

int main()
{

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    if (s.empty())
        return 0;
    int target = s.top();
    s.pop();
    insertBottom(s, target);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}