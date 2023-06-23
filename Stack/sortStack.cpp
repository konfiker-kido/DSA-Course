#include <iostream>
#include <stack>
using namespace std;

void insertSort(stack<int> &s, int target)
{
    if (s.empty())
    {
        s.push(target);
        return;
    }
    if (s.top() >= target)
    {
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    insertSort(s, target);
    s.push(temp);
}
void sortStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int topElement = s.top();
    s.pop();
    sortStack(s);
    insertSort(s, topElement);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(5);
    s.push(17);
    s.push(12);
    s.push(35);
    s.push(2);

    sortStack(s);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}