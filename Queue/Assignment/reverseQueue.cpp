#include <iostream>
#include <stack>
#include <queue>
using namespace std;

/*  we are using a stack of size n so space is O(n) for n recursive call and time complexity is O(n)   */

queue<int> reverseQueue(queue<int> q)
{
    stack<int> s;
    cout << "---Queue before Reverse---" << endl;
    while (!q.empty())
    {
        int temp = q.front();
        cout << temp << " ";
        s.push(temp);
        q.pop();
    }
    cout << endl;
    cout << "---Queue After Reverse-----" << endl;
    while (!s.empty())
    {
        int t = s.top();
        q.push(t);
        s.pop();
    }
    return q;
}


/*  Space for every recursion call is o(1) so space is O(n) for n recursive call and time complexity is O(n)   */
void reverseUsingRecursion(queue<int> &q)
{

    if (q.empty()) // base case
    { 
        return;
    }
    int temp = q.front();       // storing the front ele
    q.pop();                    // remove top ele from the Queue
    reverseUsingRecursion(q);   //   recursive call
    q.push(temp);               // storing the ele from the Last to queue
    // cout << temp << " ";
}
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50); 

    reverseUsingRecursion(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    // queue<int> ans = reverseQueue(q);
    // while (!ans.empty())
    // {
    //     cout << ans.front() << " ";
    //     ans.pop();
    // }

    return 0;
}