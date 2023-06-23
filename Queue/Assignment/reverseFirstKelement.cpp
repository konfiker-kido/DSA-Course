#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void recursiveCall(queue<int> &q, int k, int *itr)
{
    if (*itr == k)
        return;

    int temp = q.front();
    q.pop();
    itr++;
    recursiveCall(q, k, itr);
    q.push(temp);
}

void reverseQueue(queue<int> &q, stack<int> s)
{
    // cout << "---Queue before Reverse---" << endl;
    // while (!q.empty())
    // {
    //     int temp = q.front();
    //     cout << temp << " ";
    //     s.push(temp);
    //     q.pop();
    // }
    // cout << endl;
    // cout << "---Queue After Reverse-----" << endl;
    while (!s.empty())
    {
        int t = s.top();
        q.push(t);
        s.pop();
    }
}

void reverseKele(queue<int> &q, int k)
{
    stack<int> s;
    int size = q.size();
    int count = 0;
    if (k <= 0 or k > size)
        return;

    /* Reversing the Queue using Stack */
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;
        if (count == k)
            break;
    }

    reverseQueue(q, s);
    count = 0;

    if (k == size)
        return;
    /* Adding remaining element to Last */
    while (!q.empty())
    {
        int temp = q.front();
        q.push(temp);
        q.pop();
        count++;
        if (count == (size - k))
            break;
    }
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);

    int k = 3;

    reverseKele(q, k);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}