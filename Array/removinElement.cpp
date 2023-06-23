#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int key)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != key)
            nums[j++] = nums[i];
    }
    if (j == 0)
        return -1;
    return j;
}
int main()
{

    vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
    int key = 2;
    cout << removeElement(nums, key);

    return 0;
}