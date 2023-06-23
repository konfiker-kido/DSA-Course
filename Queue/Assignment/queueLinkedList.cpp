#include <iostream>
using namespace std;

// This is the ListNode class definition

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Implement the Stack class
class Stack
{
public:
    ListNode *peek;
    int stackCap;
    int stackSize;

    Stack(int capacity)
    {
        peek = NULL;
        stackCap = capacity;
        stackSize = 0;
    }

    bool isEmpty()
    {
        if (peek == NULL)
            return true;
        return false;
    }

    int size()
    {
        ListNode *temp = peek;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }

    int top()
    {
        if (peek != NULL)
            return peek->data;
        else 
          exit(1); // used to ternminate the program
    }

    void push(int element)
    {

        if (stackSize == stackCap)
            return;

        ListNode *temp = new ListNode(element);
        if (isEmpty())
        {
            peek = temp;
            peek->next = NULL;
        }
        else
        {
            ListNode *temp1 = peek;
            while (temp1->next != NULL)
            {
                temp1 = temp1->next;
            }
            temp1->data = element;
            temp1->next = NULL;
        }
        stackSize++;
    }

    void pop()
    {
        if (isEmpty())
            return;
        ListNode *temp = peek;
        if (temp->next == NULL)
        {
            peek = NULL;
            return;
        }
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
};

int main()
{

    return 0;
}