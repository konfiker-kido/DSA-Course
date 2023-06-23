#include <iostream>
#include <map>
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

void removeDuplicate(Node *head)
{
    Node *curr = head;
    map<int, bool> flag;
    flag[head->data] = true;

    while (curr->next != NULL)
    {
        if (flag[curr->next->data] == true)
        {
            curr->next = curr->next->next;
        }
        else
        {
            flag[curr->next->data] = true;
            curr = curr->next;
        }
    }
    display(head);
}

int main()
{

    Node *head = new Node(4);
    Node *second = new Node(2);
    Node *third = new Node(1);
    Node *fourth = new Node(4);
    Node *fifth = new Node(2);
    Node *sixth = new Node(7);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    cout << "Original LL:  ";
    display(head);

    cout << endl;
    cout << "Removed duplicates LL:  ";
    removeDuplicate(head);

    return 0;
}