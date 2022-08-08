#include <iostream>
#include "LinkedList.cpp"

using namespace std;

Node *removeDuplicates(Node *head)
{
    // Write your code here
    Node *prev = head;
    Node *ptr = head;

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    while (ptr->next != NULL)
    {
        if (ptr->data == prev->data)
        {
            ptr = ptr->next;
        }
        else
        {
            prev->next = ptr;
            prev = ptr;
        }
    }

    prev->next = NULL;

    return head;
}

int main()
{
    Node *head = takeInput();

    head = removeDuplicates(head);

    print(head);
    return 0;
}