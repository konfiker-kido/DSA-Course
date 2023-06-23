/*

Given an array A of n positive numbers.
The task is to find the first index in the array
such that the sum of elements before it is equal to the sum of elements after it.


Input:
n = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case
at position 3 elements before it
(1+3) = elements after it (2+2)

Input:
n = 1
A[] = {1}
Output: 1
Explanation:
Since its the only element hence
it is the only point
*/

#include <iostream>
#include <vector>
using namespace std;

int equalSum(vector<int> &A)
{
    int N = A.size();
    
    if (N == 0 || N == 1)
        return 1;
    int sum = 0;
    for (int i = 1; i < N; i++)
        sum += A[i];

    int pre_sum = A[0];
    for (int i = 1; i < N; i++)
    {
        sum -= A[i];
        if (pre_sum == sum)
            return i + 1;
        else
            pre_sum += A[i];
    }

    return -1;
}

int main()
{

    vector<int> num = {1, 3, 5, 2, 2};
    cout << equalSum(num);

    return 0;
}