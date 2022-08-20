#include <iostream>
#include "LinkedList.cpp"

using namespace std;

Node *midPoint(Node *head)
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

    return slow;
}

int main()
{
    // this program will return a node pointing to the midpoint of the Linked list

    // a higher version of this function in break at midpoint will break the LL in two halves, 
    // that can be used later in programs like mergesort
    Node *head1 = takeInput();

    print(head1);

    head1 = midPoint(head1);

    print(head1);

    return 0;
}