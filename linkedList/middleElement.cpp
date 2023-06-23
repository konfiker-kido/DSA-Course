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

int middleBruteForce(Node *head)
{

    Node *temp = head;
    int count = 0;
    int n = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    (count % 2 == 0) ? n = (count / 2) + 1 : n = (count / 2);

    while (n > 1)
    {
        temp = temp->next;
        n--;
    }
    return temp->data;
}

Node *middleEle(Node *head)
{

    Node *temp = head;
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return head;
    }
    if (head->next == NULL)
        return head;

    Node *slow = head;
    Node *fast = head; // if we want n/2  as middle node then we have fast= head->next
    while (slow != NULL and fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}
void deleteMiddle(Node *&head)
{
    Node *temp = head;

    Node *mid = middleEle(head);

    while (temp->next != mid)
    {
        temp = temp->next;
    }
    temp->next = mid->next;

    cout << "Middle Element " << mid->data << " is deleted" << endl;
    free(mid);
}
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
int main()
{

    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    // Node *fifth = new Node(50);
    // Node *sixth = new Node(60);
    head->next = second;
    second->next = third;
    third->next = fourth;
    // fourth->next = fifth;

    // fifth->next = sixth;

    display(head);
    cout << "Middle Element is: " << middleEle(head)->data << endl;
    deleteMiddle(head);
    display(head);

    return 0;
}