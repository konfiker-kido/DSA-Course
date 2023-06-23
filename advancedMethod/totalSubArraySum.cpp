#include <iostream>
#include <vector>
#include <map>


using namespace std;

int totalSubarraySum(vector<int> arr, int k)
{

    map<int, int> m;
    m[0] = 1;
    map<int, int>::iterator itr = m.begin();

    int prefixSum = 0;
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        prefixSum += arr[i];
        cnt += m[prefixSum - k]; // adding the number of occurance of difference(prefixSum-k)
        m[prefixSum]++;
    }

    return cnt;
}
int main()
{
    vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    int k = 3;
    cout << totalSubarraySum(arr, k);
    return 0;
}