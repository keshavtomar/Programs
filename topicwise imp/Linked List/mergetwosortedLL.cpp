#include <iostream>
#include "LinkedList.cpp"

using namespace std;

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

int main()
{
    cout << "Input first sorted Linked List (press -1 to terminate)" << endl;
    Node *head1 = takeInput();

    cout << "Input Second sorted Linked List " << endl;
    Node *head2 = takeInput();

    print(head1);
    print(head2);

    Node *ans = mergeTwoSortedLinkedLists(head1, head2);
    cout << "After merging" << endl;

    print(ans);
    return 0;
}