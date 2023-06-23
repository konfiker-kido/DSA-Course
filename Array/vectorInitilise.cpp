#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> arr(10);        // by default it initialise with 0
    vector<int> arrOne(10, -1); // by default it initialise with 0
    vector<bool> flag(5, true);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : arrOne)
    {
        cout << i << " ";
    }
    cout << endl;

    for (auto i : flag)
    {
        cout << i << " ";
    }
    return 0;
}