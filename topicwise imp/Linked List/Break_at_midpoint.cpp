#include <iostream>
#include "LinkedList.cpp"

using namespace std;

Node *BreakAtMidPoint(Node *head)
{
    // Write your code here
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

int main()
{
    Node *head1 = takeInput();
    print(head1);

    Node *head2 = BreakAtMidPoint(head1);

    print(head1);
    print(head2);
    return 0;
}