#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthMax(vector<int> nums, int k)
{
    priority_queue<int, vector<int>> q;
    
    for (auto i : nums)
        q.push(i);

    for (int i = 1; i < k; i++)
        q.pop();

    cout << k << " Greatest number is ";
    return q.top();
}
int main()
{

    vector<int> nums = {10, 20, 5, 46, 12, 3, 45, 8};
    int k = 3;
    cout << kthMax(nums, k);
    return 0;
}