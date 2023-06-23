#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

pair<int, int> targetSum(vector<int> arr, int target)
{

    int diff;
    pair<int, int> ans = {-1, -1};
    map<int, int> m;

    for (int i = 0; i < arr.size(); i++)
    {
        m[arr[i]] = i;
    }

    for (auto itr = m.begin(); itr != m.end(); itr++)
    {

        int diff = target - (itr->first);
        if (find(m.begin(), m.end(), diff) != m.end())
        {
            ans.first = itr->second;
            ans.second = m[diff];
            break;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 10, 2, 6, 4, 12};
    pair<int, int> ans = targetSum(arr, 15);
    ans.first == -1 ? cout << "No sum matches" << endl : cout << "matched with " << ans.first << " and " << ans.second << " index" << endl;
    cout << arr[ans.first] << "->" << arr[ans.second] << endl;
    return 0;
}