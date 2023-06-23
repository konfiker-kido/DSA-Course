#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findUnion(vector<int> nums1, vector<int> nums2)
{

    vector<int> ans;
    for (int i = 0; i < nums1.size(); i++)
    {
        if (count(ans.begin(), ans.end(), nums1[i]) == 0)
        {
            ans.push_back(nums1[i]);
        }
    }
    for (auto i : nums2)
    {
        if (count(ans.begin(), ans.end(), i) == 0)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    vector<int> num1 = {10, 20, 45, 56, 12, 10, 20, 30};
    vector<int> num2 = {10, 70, 80, 90, 20};

    vector<int> ans = findUnion(num1, num2);
    cout << "Union of both the Arrays is " << endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}