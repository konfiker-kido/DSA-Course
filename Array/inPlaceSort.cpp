#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &nums)
{
    int l = 0, m = 0, e = nums.size() - 1;

    while (m <= e)
    {
        if (nums[m] == 0)
        {
            swap(nums[m], nums[l]);
            l++, m++;
        }
        else if (nums[m] == 1)
        {
            m++;
        }
        else
        {
            swap(nums[m], nums[e]);
            e--;
        }
    }
    for (auto i : nums)
    {
        cout << i << " ";
    }
}

int main()
{

    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColors(nums);

    return 0;
}