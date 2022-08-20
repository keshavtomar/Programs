#include <iostream>
#include "LinkedList.cpp"

using namespace std;

class Pair
{
public:
    Node *head;
    Node *tail;
};

Pair reverseLLinLessTime(Node *head)
{
    // here we will maintain a pair having a tail as well, so that we will not have to iterate to the last over and over again

    if (head == NULL || head->next == NULL)
    {
        Pair p;
        p.head = head;
        p.tail = head;
        return p;
    }

    Node *curr = head;

    Pair pr;

    pr = reverseLLinLessTime(head->next);

    curr->next = NULL;
    pr.tail->next = curr;
    pr.tail = pr.tail->next;

    return pr;
}

Node *reverseLinkedListRec(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *curr = head;

    head = reverseLinkedListRec(head->next);

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = curr;

    curr->next = NULL;

    return head;
}

int main()
{
    Node *head = takeInput();
    print(head);

    Pair pr;
    pr = reverseLLinLessTime(head);

    print(pr.head);

    return 0;
}