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

node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}

node *reverseRecursive(node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

node *reverseKNodes(node *&head, int k)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    int counter = 0;

    while (currptr != NULL && counter < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }

    if (nextptr != NULL)
    {
        head->next = reverseKNodes(nextptr, k);
    }
    return prevptr;
}

bool detectCycle(node *&head)
{
    node *fast = head;
    node *slow = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *startNode;

    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

void removeCycle(node *&head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;

    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }

    slow->next = NULL;
}

int main()
{

    node *head = NULL;
    insertAtTails(head, 1);
    insertAtTails(head, 2);
    insertAtTails(head, 2);
    insertAtTails(head, 4);
    insertAtTails(head, 5);
    insertAtTails(head, 6);
    display(head);
    cout << "-------------------" << endl;
    node *newhead = reverseKNodes(head, 2);
    display(newhead);
    makeCycle(head, 3);
    // display(head);
    cout << detectCycle(head);
    cout << endl;
    removeCycle(head);
    cout << detectCycle(head);
    cout << endl;
    display(head);
    return 0;
}