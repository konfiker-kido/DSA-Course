#include <iostream>
#include <vector>
using namespace std;

void reverseInGroups(vector<long long> &arr, int n, int k)
{
    // code here
    int s = 0;
    int e = n - 1;

    for (int i = 0; i < n; i = i + k)
    {

        int start = i;
        int end = min(i + k - 1, n - 1); // formula for end point

        while (start <= end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<long long> arr = {1, 2, 3, 4, 5};
    cout << "Original Array" << endl;
    for (auto i : arr)
        cout << i << " ";
    cout << endl;
    int k = 4;
    cout << "Array Reversed in " << k << " groups" << endl;
    reverseInGroups(arr, arr.size(), k);

    return 0;
}