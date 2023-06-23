#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr = NULL;
    int size;
    int topOne;
    int topTwo;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        topOne = -1;
        topTwo = size;
    }
    void pushOne(int data)
    {
        if (topTwo - topOne == 1)
        {
            cout << "Stack One is OverFlow" << endl;
        }
        else
        {
            topOne++;
            arr[topOne] = data;
        }
    }
    void pushTwo(int data)
    {
        if (topTwo - topOne == 1)
        {
            cout << "Stack Two is OverFlow" << endl;
        }
        else
        {
            topTwo--;
            arr[topTwo] = data;
        }
    }
    void popOne()
    {
        if (topOne == -1)
        {
            cout << "Stack one is underFlow" << endl;
        }
        else
        {
            topOne--;
        }
    }
    void popTwo()
    {
        if (topTwo == size)
        {
            cout << "Stack two is underFlow" << endl;
        }
        else
        {
            topTwo++;
        }
    }

    void print()
    {
        cout << "topOne: " << topOne << " , topTwo: " << topTwo << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(10);

    s.pushOne(10);
    s.print();
    // s.popOne();

    s.pushOne(20);
    s.print();

    s.pushOne(30);
    s.print();

    s.pushOne(40);
    s.print();

    s.pushOne(50);
    s.print();

    s.pushTwo(100);
    s.print();

    s.pushTwo(110);
    s.print();

    s.pushTwo(120);
    s.popTwo();

    s.print();

    return 0;
}