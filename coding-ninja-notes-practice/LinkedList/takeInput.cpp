#include <iostream>
#include "LinkedList.cpp"

using namespace std;


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


void printIthNode(Node *head, int i)
{
    // Write your code here
    if (i >= length(head))
    {
        return;
    }
    int j = 0;

    while (j != i)
    {
        head = head->next;
        j++;
    }

    cout << head->data;
}

int main()
{
    Node *head = takeInput();

    print(head);      //printing a linkedlist, function defined in LinkedList.cpp

    cout << length(head);
    return 0;
}