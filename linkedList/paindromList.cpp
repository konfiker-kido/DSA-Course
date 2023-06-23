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

Node *reverseList(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *forword = head;

    while (curr != NULL)
    {
        forword = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forword;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
    // find middle node
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    // reverse nodes after middle node
    Node *reverseKaHead = reverseList(slow->next);

    slow->next = reverseKaHead;
    // compare values after reversed node
    Node *temp1 = head;
    Node *temp2 = reverseKaHead;
    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
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
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(3);
    Node *fifth = new Node(2);
    Node *sixth = new Node(1);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    if (isPalindrome(head))
        cout << "List is Palindrom";
    else
        cout << "List is not Palindrom";

    // display(head);
    return 0;
}