// Complexity O(1)

#include <iostream>
#include <vector>
using namespace std;

class MinStack
{
public:
    vector<pair<int, int>> st;

    MinStack()
    {
    }

    void push(int val)
    {
        if (st.empty())
        {
            pair<int, int> p = {val, val};
            st.push_back(p);
        }
        else
        {
            pair<int, int> p;
            p.first = val;
            p.second = min(val, st.back().second);
            st.push_back(p);
        }
    }

    void pop()
    {
        st.pop_back();
    }

    int top()
    {
        return st.back().first;
    }

    int getMin()
    {
        return st.back().second;
    }
};

int main()
{
    MinStack stack;
    stack.push(10);
    stack.push(20);
    stack.push(5);
    stack.push(40);
    stack.push(50);
    cout << stack.getMin();
    return 0;
}