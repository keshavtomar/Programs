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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *takeInput()
{
    // going to use -1 as a Input breaker

    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data); // dynamic allocation
        if (head == NULL)
        {
            head = newNode;
            tail = head;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }

        cin >> data;
    }

    return head;
}

int length(Node *head)
{
    // Write your code here
    int len = 0;
    while (head != NULL)
    {
        // cout << "what" << endl;
        len++;
        head = head->next;
    }
    return len;
}

Node *InsertAtI(Node *head, int element, int pos)
{
    Node *newNode = new Node(element);

    Node *temp = head;

    if (pos == 0)
    {
        newNode->next = head;
        return newNode;
    }

    int i = 0;
    while (i < pos - 1)
    {
        if (temp == NULL)
        {
            return head;
        }
        temp = temp->next;
        i++;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

Node *deleteNode(Node *head, int pos)
{
    int i = 0;

    Node *temp = head;

    if (head == NULL)
    {
        return head;
    }

    if (pos == 0)
    {
        return head->next;
    }

    while (i < pos - 1)
    {
        if (temp->next->next == NULL)
        {
            return head;
        }
        temp = temp->next;
        i++;
    }

    if (temp->next == NULL)
    {
        return head;
    }
    temp->next = temp->next->next;

    return head;
}

// Length, insertion and Deletion in a linkedlist using recursion

int lengthrec(Node *head)
{
    // Write your code here
    if (head == NULL)
    {
        return 0;
    }

    return 1 + lengthrec(head->next);
}

Node *insertNoderec(Node *head, int i, int data)
{
    // Write your code here
    if (head == NULL)
    {
        return head;
    }
    if (i == 0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        return newNode;
    }

    Node *ptr = insertNoderec(head->next, i - 1, data);

    head->next = ptr;

    return head;
}

Node *deleteNodeRec(Node *head, int pos)
{
    if (head == NULL)
    {
        return head;
    }
    if (pos == 0)
    {
        return head->next;
    }

    Node *ptr = deleteNodeRec(head->next, pos - 1);

    head->next = ptr;

    return head;
}

void reverseLinkedList(Node *head)
{
    // Initialize current, previous and next pointers
    Node *current = head;
    Node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        // Store next
        next = current->next;
        // Reverse current node's pointer
        current->next = prev;
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    head = prev;
}

Node *swap(Node *ptr1, Node *ptr2)
{
    Node *tmp = ptr2->next;
    ptr2->next = ptr1;
    ptr1->next = tmp;
    return ptr2;
}
