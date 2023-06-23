// time complexity O(n) ,  we pushed all the element od the vector so complexity is n and complexity is also n so 2n 

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> prevSmaller(vector<int> arr)
{
    vector<int> ans;
    stack<int> st;
    st.push(-1);
    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];
        while (st.top() > curr)
        {
            st.pop();
        }
        ans.push_back(st.top());
        st.push(curr);
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 4, 3};
    vector<int> ans;
    ans = prevSmaller(arr);
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}