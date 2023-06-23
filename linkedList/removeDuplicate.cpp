// removing duplicaes from a sorted List
// eg.  1 2 2 3 4 4   =>   1 2 3 4
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
void display(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void removeDuplicate(Node *&head)
{

    if (head == NULL)
    {
        cout << "LL is Empty" << endl;
        return;
    }
    if (head->next == NULL)
    {
        cout << head->data << endl;
        return;
    }

    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) and curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;

            // delete Node
            temp->next = NULL;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }

    display(head);
}

int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(3);
    Node *fifth = new Node(4);
    Node *sixth = new Node(5);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    cout << "Original LL:  ";
    display(head);
    cout << endl;
    cout << "Removed Duplicate from LL: ";
    removeDuplicate(head);
    return 0;
}