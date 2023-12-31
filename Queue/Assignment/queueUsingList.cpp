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

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void pop(Node *&head)
{
    Node *temp = head;
    if (head == NULL)
        return;
    if (head->next == NULL)
    {
        head = NULL;
        cout << "Stack is Empty Now! " << endl;
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    Node *first = new Node(10);
    Node *sec = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    first->next = sec;
    sec->next = third;
    third->next = fourth;
    fourth->next = fifth;
    // display(first);
    pop(first);
    // display(first);
    pop(first);
    // display(first);
    pop(first);
    // display(first);
    pop(first);
    pop(first);
    pop(first);
    display(first);

    return 0;
}