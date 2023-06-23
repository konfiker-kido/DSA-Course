#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextSmaller(vector<int> arr)
{

    stack<int> st;
    vector<int> ans(arr.size());
    st.push(-1);
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() >= curr)
        {
            st.pop();
        }
        ans[i] = (st.top());
        st.push(curr);
    }
    return ans;
}
vector<int> nextLarger(vector<int> arr)
{
    stack<int> st;
    vector<int> ans(arr.size());
    st.push(-1); // here we have to use maximimum variable
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() <= curr)
        {
            st.pop();
        }
        ans[i] = (st.top());
        st.push(curr);
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    vector<int> ans = nextSmaller(arr);
    // vector<int> ans = nextLarger(arr);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}