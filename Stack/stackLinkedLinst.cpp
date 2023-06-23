#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Stack
{
    Node *top;
    void push(int val)
    {
        Node *temp = top;
        temp->data = val;
        temp->next = NULL;
        top = temp;
    }
    bool isEmpty(){
        if(top==NULL)
            return true;
            return false;
    }
    int top(){
        if(top==NULL)
           return ;
    }

};

int main()
{

    return 0;
}