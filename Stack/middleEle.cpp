#include <iostream>
#include <stack>
using namespace std;

void middleEle(stack<int> s, int mid)
{
    if (s.size() == 0)
    {
        cout << "Stack is Empty" << endl;
        return;
    }
    // Base-case
    if (s.size() == mid)
    {
        cout << s.top() << " is Middle Element" << endl;
        return;
    }
    int temp = s.top();
    s.pop();

    // recursive call
    middleEle(s, mid);

    // backtrack
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.top();
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // s.push(60);
    // s.push(70);
    // cout << "Stack Element" << endl;
    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    // int mid = (s.size() / 2) + 1;

    // middleEle(s, mid);
    return 0;
}