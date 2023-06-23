#include <iostream>
using namespace std;

class cirQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;
    cirQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int data)
    {
        /*  Cases two insert the data in circular Queue */
        // Empty or Not
        // Single element
        // Circular path
        // Normal case

        if (front == 0 and rear == size - 1)   // full 
        {
            cout << "Queue is full" << endl;
        }
        else if (front == -1 and rear == -1)    // Single element
        {
            front = 0;
            rear = 0;
            arr[front] = data;
        }
        else if (rear == size - 1 and front != 0)   // Circular path
        {
            rear = 0;
            arr[rear] = data;
        }
        else                                 // Normal case
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        // check Empty
        // single element
        //  circular nature
        // Normal 
        if(front==-1 and rear==-1){
              cout<<"Queue is empty, can't pop "<<endl;
        }else if(front==rear){
              arr[rear]=-1;
              front=-1;
              rear=-1;
        }else if(){
            
        }
    }
};

int main()
{

    return 0;
}