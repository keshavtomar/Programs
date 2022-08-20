#include <iostream>
#include "LinkedList.cpp"

using namespace std;

Node *ReverseLLusingRecursion(Node *head)
{
    /* In last approach of maintaining a tail, we do extra work to maintain a tail,
    But we forgot one thing, once recursion has done it's work our head is still pointing the tail
    So we not need to maintain the tail in pair, we can calculate tail after recursion work by
    normal calculations
    Initial       1->2->3->4->5
    After Recursion  5->4->3->2   <-  1   but our head that is 1 here is still pointing to 2 which is the ultimate tail
    */

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *afterRec = ReverseLLusingRecursion(head->next);

    Node *tail = head->next;

    tail->next = head;
    head->next = NULL;

    return afterRec;
}

int main()
{
    Node *head = takeInput();

    print(head);

    head = ReverseLLusingRecursion(head);

    print(head);
    return 0;
}