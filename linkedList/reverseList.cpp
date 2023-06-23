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
        this->next = next;
    }
};

void display(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
        cout << "LL is empty" << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *reverseList(Node *prev, Node *curr)
{
    if (curr == NULL)
        return prev;
    Node *forward = curr->next;
    curr->next = prev;
    return reverseList(curr, forward);
}
Node *reverseListLoop(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *temp = curr;

    while (curr != NULL)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    Node *prev = NULL;
    Node *curr = head;
    // head = reverseList(prev, curr);
    head = reverseListLoop(head);
    display(head);

    return 0;
}