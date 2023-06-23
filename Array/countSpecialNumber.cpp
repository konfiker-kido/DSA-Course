/*
You are given an array arr[ ] of size N consisting of only positive integers.
Your task is to find the count of special numbers in the array.
 A number is said to be a special number if it is divisible by at least 1 other
 element of the array.


INPUT
N = 3
arr[] = {2, 3, 6}
Output:
1
Explanation:
The number 6 is the only special number in the
array as it is divisible by the array elements 2
and 3. Hence, the answer is 1 in this case.
Example 2:

Input:
N = 4
arr[] = {5, 5, 5, 5}
Output:
4
Explanation:
All the array elements are special. Hence,
the answer is 4 in this case.

*/

#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int countSpecialNumbers(vector<int> arr)
{
    // Code here
    int N = arr.size();
    int mx = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        mx = max(mx, arr[i]);
    }
    vector<int> temp(mx + 1, 0);

    for (int i = 0; i < N; i++)
    {
        if (temp[arr[i]] <= 1)
        {
            for (int j = arr[i]; j <= mx; j += arr[i])
            {
                temp[j]++;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (temp[arr[i]] > 1)
        {
            count++;
        }
    }

    return count;
}
int main()
{
    vector<int> arr = {2, 3, 6};
    cout << countSpecialNumbers(arr);

    return 0;
}