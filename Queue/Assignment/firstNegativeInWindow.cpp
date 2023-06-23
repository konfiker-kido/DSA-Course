#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void firstNegative(vector<int> v, int k)
{
    deque<int> q;

    for (int i = 0; i < k; i++)
    {
        if (v[i] < 0)
            q.push_back(v[i]);
    }
    int i = k;
    int size = v.size();
    vector<int> ans;
    while (i < size)
    {
        if (q.front() < 0)
        {
            ans.push_back(q.front());
        }
        else
        {
            ans.push_back(0);
        }
        if (v[i] < 0)
        {
            q.push_front(v[i]);
        }
        else
        {
            q.push_back(v[i]);
        }
        q.pop_front();

        i++;
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> arr = {-8, 2, 3, -6, 10};
    vector<int> v;
    v.push_back(12);
    v.push_back(-1);
    v.push_back(-7);
    v.push_back(8);
    v.push_back(-15);
    v.push_back(30);
    v.push_back(16);
    v.push_back(28);

    int k = 2;
    firstNegative(arr, k);
    return 0;
}