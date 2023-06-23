

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
// in Place  method
void sortZeroOneTwo(Node *&head)
{

    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;
    while (curr != NULL)
    {
        Node *temp = curr;
        if (curr->data == 0)
        {
            // isolate Node
            curr = curr->next;
            temp->next = NULL;

            // append to zeroTail
            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if (curr->data == 1)
        {
            // isolate Node
            curr = curr->next;
            temp->next = NULL;

            // append to oneTail
            oneTail->next = temp;
            oneTail = temp;
        }
        else if (curr->data == 2)
        {
            // isolate Node
            curr = curr->next;
            temp->next = NULL;

            // append to twoTail
            twoTail->next = temp;
            twoTail = temp;
        }
    }
    zeroTail->next = oneHead->next;
    oneTail->next = twoHead->next;
    display(zeroHead->next);
}

// Counting Method
void sortOneTwo(Node *&head)
{
    Node *curr = head;
    int zero = 0, one = 0, two = 0;
    int count = 0;
    while (curr != NULL)
    {
        if (curr->data == 0)
            zero++;
        else if (curr->data == 1)
            one++;
        else if (curr->data == 2)
            two++;

        curr = curr->next;
    }
    cout << zero << " " << one << " " << two << " " << endl;
    curr = head;
    while (curr != NULL)
    {
        if (zero != 0)
        {
            curr->data = 0;
            zero--;
        }
        else if (one != 0)
        {
            curr->data = 1;
            one--;
        }
        else if (two != 0)
        {
            curr->data = 2;
            two--;
        }
        curr = curr->next;
    }

    display(head);
}

int main()
{

    Node *head = new Node(1);
    Node *second = new Node(1);
    Node *third = new Node(2);
    Node *fourth = new Node(0);
    Node *fifth = new Node(1);
    Node *sixth = new Node(2);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    cout << "Original LL: ";
    display(head);
    cout << endl;
    cout << "Sorted List: ";
    sortZeroOneTwo(head);

    return 0;
}