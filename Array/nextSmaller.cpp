#include <iostream>
#include <vector>
using namespace std;

vector<int> nextSmaller(vector<int> arr)
{
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        bool flag = false;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[i])
            {
                ans.push_back(arr[j]);
                flag = true;
                break;
            }
        }
        if (!flag)
            ans.push_back(-1);
    }
    return ans;
}
int main()
{

    vector<int> arr = {2, 1, 4, 3};

    vector<int> ans = nextSmaller(arr);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}