#include <iostream>
#include <stack>
using namespace std;

void insertBottom(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    insertBottom(s, target);
    s.push(temp);
}
void reverseStack(stack<int> &s)
{
    if (s.empty())
        return;

    int target = s.top();  // stored top element
    s.pop();
    //recursive call
    reverseStack(s);
    //insert bottom
    insertBottom(s, target);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}