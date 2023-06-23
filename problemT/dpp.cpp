#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void kthLarge(vector<int> list, int k)
{

    priority_queue<int, vector<int>> p;
    for (int i = 0; i < list.size(); i++)
        p.push(list[i]);

    int itr = 1;
    while (itr < k)
    {
        // cout << p.top() << " ";
        p.pop();
        itr++;
    }
    cout << p.top();
}
int main()
{

    vector<int> v = {4, 3, 6, 4, 1};
    int k = 3;
    kthLarge(v, k);

    return 0;
}