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

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummynode = new node(-1);
    node *p3 = dummynode;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummynode->next;
}

node *mergeRecursive(node *&head1, node *&head2)
{
    node *result;

    if (head1 != NULL)
    {
        return head2;
    }
    if (head2 != NULL)
    {
        return head1;
    }

    if (head1->data < head2->data)
    {
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else
    {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}

int main()
{

    node *head1 = NULL;
    node *head2 = NULL;

    insertAtTails(head1, 1);
    insertAtTails(head1, 2);
    insertAtTails(head1, 3);
    insertAtTails(head1, 4);
    insertAtTails(head1, 5);
    insertAtTails(head1, 6);

    insertAtTails(head2, 8);
    insertAtTails(head2, 9);
    insertAtTails(head2, 10);
    insertAtTails(head2, 11);

    display(head1);
    cout << endl
         << "-----------------" << endl;
    display(head2);
    cout << endl
         << "-----------------" << endl;

    node *head3 = merge(head2, head1);

    display(head3);

    cout << endl
         << "-----------------" << endl;

    node *head4 = mergeRecursive(head2, head1);

    display(head4);
    return 0;
}