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

void insertAtHead(Node *&head, int data)
{

    Node *val = new Node(data);
    val->next = head;
    head = val;
}

void insertAtLast(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

int countElement(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}
void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    Node *val = new Node(data);
    Node *temp = head;
    if (pos == 1)
        insertAtHead(head, data);
    else if (pos + 1 == countElement(head))
        insertAtLast(tail, data);
    else if (pos > countElement(head) + 1)
        cout << "Please enter accurate position" << endl;
    else
    {
        int itr = 1;
        while (itr < pos - 1)
        {
            temp = temp->next;
            itr++;
        }
        val->next = temp->next;
        temp->next = val;
        cout << endl;
        cout << data << " inserted at " << pos << " position" << endl;
    }
}

// void removeHead(Node *&head)
// {

//     head->next =
// }

void display(Node *&head)
{
    Node *temp = head;
    if (head == NULL)
        cout << "List is Empty" << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverseList(Node *head)
{

    Node *prev = NULL;
    Node *curr = head;
    Node *forward;

    while (curr != NULL)
    {
        forward = curr->next;
        prev
        prev = curr;
        forward = curr;
    }
    display(prev);
}

int main()
{
    // int data;
    // int key;
    // Node *head = NULL;
    // Node *tail = head;
    // while (true)
    // {
    //     cout << "1.insertAtHead  2.InsertAtTail" << endl;
    //     cout << "3.insertAtPosition   4.Display" << endl;
    //     cout << "5.Exit       " << endl;
    //     cout << "-----------" << endl;
    //     cout << endl;
    //     cin >> key;
    //     switch (key)
    //     {
    //     case 1:
    //         cin >> data;
    //         insertAtHead(head, tail, data);
    //         break;
    //     case 2:
    //         cin >> data;
    //         insertAtLast(tail, data);
    //         break;
    //     case 3:
    //         int pos;
    //         cout << "Enter Position " << endl;
    //         cin >> pos;
    //         cout << "Enter data " << endl;
    //         cin >> data;
    //         break;
    //     case 4:
    //         display(head);
    //         break;
    //     case 5:
    //         break;
    //     default:
    //         cout << "Choose correct option" << endl;
    //         break;
    //     }
    // }

    Node *head = NULL;

    int data = 10;
    insertAtHead(head, data);
    display(head);
    Node *tail = head;
    insertAtLast(tail, 20);
    display(head);

    // insertAtHead(head, 5);
    // insertAtHead(head, 1);

    insertAtLast(tail, 50);
    insertAtLast(tail, 60);
    insertAtLast(tail, 70);
    insertAtPosition(head, tail, 25, 4);
    insertAtPosition(head, tail, 0, 1);
    // insertAtPosition(head, tail, 0, 10);

    display(head);
    reverseList(head);
    // cout << endl;
    // insertAtPosition(head, tail, 0, 11);
    // // cout << "There are " << countElement(head) << " Element" << endl;
    return 0;
}