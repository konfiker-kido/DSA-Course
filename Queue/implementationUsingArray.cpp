#include <iostream>
using namespace std;

class queue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else
            arr[rear] = data;
        rear++;
    }
    void pop()
    {
        if (front == rear)
            cout << "No data to delete from the Queue" << endl;
        else
        {
            arr[front] = -1; // just to identify
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }
    int getSize()
    {
        return rear - front;
    }
    int getFront()
    {

        return arr[front];
    }
    bool isEmpty()
    {
        if (front == rear)
            return true;
        return false;
    }
};

int main()
{
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    q.pop();

    cout << q.isEmpty() << endl;
    cout << q.getFront() << endl;
    cout << "Size of the Queue is: " << q.getSize() << endl;
    return 0;
}