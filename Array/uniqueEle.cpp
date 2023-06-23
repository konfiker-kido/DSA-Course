#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{

    int ans = 0; // 0^0 = 0 , 0^1= 1 that why we have initialise with 0

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 5, 5, 3, 4, 6, 4, 6};

    cout << "Unique Element is " << findUnique(arr);
    return 0;
}