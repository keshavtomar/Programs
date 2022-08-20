#include <iostream>
#include "LinkedList.cpp"

using namespace std;

Node *bubbleSort(Node *head)
{
    int len = length(head);

    Node *ptr1;
    Node *ptr2;

    for (int i = 0; i <len; i++)
    {
        ptr1 = head;
        ptr2 = head->next;
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (ptr1->data > ptr2->data)
            {
                int temp = ptr2->data;
                ptr2->data = ptr1->data;
                ptr1->data = temp;
            }

            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }

    return head;
}

int main()
{
    Node *head = takeInput();
    print(head);

    head = bubbleSort(head);
    print(head);

    return 0;
}