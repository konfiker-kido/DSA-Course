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

Node *reverseList(Node *head)
{

    if (head == NULL)
    {
        cout << "LL is Empty";
        return head;
    }
    if (head->next == NULL)
        return head;

    Node *prev = NULL;
    Node *curr = head;
    Node *forword = curr;

    while (curr != NULL)
    {
        forword = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forword;
    }
    return prev;
}

int countNode(Node *head)
{

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *reverseKgroups(Node *&head, int k)
{

    int count = countNode(head);

    if (count < k)
        return head;

    Node *prev = NULL;
    Node *curr = head;
    Node *forward;
    int itr = 0;

    // Step A: Reverse first k nodes
    while (itr < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        itr++;
    }
    cout << "Head is now -> " << head->data << endl;
    if (forward != NULL)
    {
        head->next = reverseKgroups(forward, k);
    }
    return prev;
}

void display(Node *head)
{
    if (head == NULL)
        cout << "LL is Empty";

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{

    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    display(head);
    cout << endl;
    // cout << " LL is reversed " << endl;
    // display(reverseList(head));
    cout << endl;
    cout << "LL is reverse in k groups" << endl;
    display(reverseKgroups(head, 4));

    return 0;
}