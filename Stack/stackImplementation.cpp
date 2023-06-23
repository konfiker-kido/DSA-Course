#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data)
    {
        top++;
        if (top >= size)
        {
            cout << "Stack is OverFlow" << endl;
        }
        else
        {
            arr[top] = data;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is UnderFlow" << endl;
        }
        else
        {
            top--;
        }
    }

    int atTop()
    {
        if (top == -1)
        {
            cout << "Stack underFlow" << endl;
        }
        else
        {
            return arr[top];
        }
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }

    // Number of valid Element in Stack
    int getSize()
    {
        return top + 1;
    }
};
int main()
{
    Stack s(10);
    cout << s.atTop() << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    while (!s.isEmpty())
    {
        cout << s.atTop() << " ";
        s.pop();
    }
    s.pop();

    return 0;
}