#include <iostream>
#include <vector>
#include <stack>
#include <limits.h>
using namespace std;

vector<int> prevSmaller(vector<int> arr)
{

    vector<int> ans;
    stack<int> st;
    st.push(-1);

    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];
        while (st.top() != -1 and arr[st.top()] >= curr)
        {
            st.pop();
        }

        ans.push_back(st.top());
        st.push(i);
    }
    return ans;
}

vector<int> nextSmaller(vector<int> arr)
{
    vector<int> ans(arr.size());
    stack<int> st;
    st.push(-1);

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (st.top() != -1 and arr[st.top()] >= curr)
        {
            st.pop();
        }
        ans[i] = (st.top());
        st.push(i);
    }
    return ans;
}

int largestAreaHistogram(vector<int> height)
{
    vector<int> prev = prevSmaller(height);
    vector<int> next = nextSmaller(height);

    cout << "Prev smaller: ";
    for (auto i : prev)
        cout << i << " ";
    cout << endl;

    cout << "Next smaller: ";
    for (auto i : next)
        cout << i << " ";
    cout << endl;

    int maxArea = INT_MIN;
    int size = height.size();
    for (int i = 0; i < height.size(); i++)
    {
        int len = height[i];
        if (next[i] == -1)
            next[i] = size;
        int width = next[i] - prev[i] - 1;
        int area = len * width;
        maxArea = max(area, maxArea);
        cout << area << " ";
    }
    cout << endl;
    return maxArea;
}
int main()
{
    vector<int> height = {2, 1, 5, 6, 2, 3};

    int area = largestAreaHistogram(height);
    cout << "Largest Area is: " << area << endl;
    ;
    return 0;
}