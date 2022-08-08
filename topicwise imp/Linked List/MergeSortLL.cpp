#include <iostream>
#include "LinkedList.cpp"

using namespace std;
Node *breakAtMidpoint(Node *head)
{
    if (head == NULL)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head->next;

    while (true)
    {
        if (fast == NULL || fast->next == NULL)
        {
            break;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *head2 = slow->next;

    slow->next = NULL;

    return head2;
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    // Write your code here
    Node *finalhead = NULL;
    Node *finaltail = NULL;

    if (head1 == NULL)
    {
        return head2;
    }
    else if (head2 == NULL)
    {
        return head1;
    }

    if (head1->data < head2->data)
    {
        finalhead = head1;
        finaltail = head1;
        head1 = head1->next;
    }
    else
    {
        finalhead = head2;
        finaltail = head2;
        head2 = head2->next;
    }

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            finaltail->next = head1;
            head1 = head1->next;
        }
        else
        {
            finaltail->next = head2;
            head2 = head2->next;
        }

        finaltail = finaltail->next;
    }

    if (head1 == NULL)
    {
        finaltail->next = head2;
    }
    else
    {
        finaltail->next = head1;
    }

    return finalhead;
}

Node *mergeSort(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // dividing in two halfs and call recursion on both of them, we have already calculated midpoint, use that code, or calculate again

    Node *head1 = head;
    Node *head2;

    head2 = breakAtMidpoint(head1);

    head1 = mergeSort(head1);
    head2 = mergeSort(head2);

    // now we have to merge two sorted LLs

    Node *finalhead = mergeTwoSortedLinkedLists(head1, head2);

    return finalhead;
}

int main()
{
    Node *head = takeInput();

    print(head);

    head = mergeSort(head);

    print(head);

    return 0;
}