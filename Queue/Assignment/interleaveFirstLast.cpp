#include <iostream>
#include <stack>
#include <queue>
using namespace std;

queue<int> interleaveQueue(queue<int> &q)
{
    if (q.size() < 3)
        return;

    queue<int> s1;
    queue<int> s2;

    int count = 0;
    int mid = q.size() / 2;

    while (!q.empty())
    {
        int temp = q.front();
        if (count < mid)
        {
            s1.push(temp);
        }
        else
        {
            s2.push(temp);
        }
        q.pop();
        count++;
    }
    // while (!s1.empty())
    // {
    //     cout << s1.front() << " ";
    //     s1.pop();
    // }
    // cout << endl;
    // cout << "Stack 2" << endl;
    // while (!s2.empty())
    // {
    //     cout << s2.front() << " ";
    //     s2.pop();
    // }
    // cout << endl;

    while (!s2.empty())
    {
        if (!s1.empty())
        {
            q.push(s1.front());
            s1.pop();
        }
        if (!s2.empty())
        {
            q.push(s2.front());
            s2.pop();
        }
    }

    return q;
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
    q.push(80);
    queue<int> ans = interleaveQueue(q);
    while (!ans.empty())
    {
        cout << ans.front() << " ";
        ans.pop();
    }
    return 0;
}