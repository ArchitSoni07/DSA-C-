#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAtTails(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL " << endl;
}

int getLen(node *&head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

node *appendKnodes(node *&head, int k)
{
    node *tail = head;
    node *newhead;
    node *newtail;

    int l = getLen(head);
    k = k % l;

    int count = 1;

    while (tail->next != NULL)
    {

        if (count == l - k)
        {
            newtail = tail;
        }

        if (count == l - k + 1)
        {
            newhead = tail;
        }
        tail = tail->next;
        count++;
    }

    newtail->next = NULL;
    tail->next = head;

    return newhead;
}

int main()
{
    node *head = NULL;
    insertAtTails(head, 1);
    insertAtTails(head, 2);
    insertAtTails(head, 3);
    insertAtTails(head, 4);
    insertAtTails(head, 5);
    insertAtTails(head, 6);
    insertAtTails(head, 7);

    display(head);

    cout << endl;

    int k = 3;
    node *newhead = appendKnodes(head, k);

    cout << "-----------" << endl;
    display(newhead);

    return 0;
}