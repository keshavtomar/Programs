#include <iostream>
#include "LinkedList.cpp"

using namespace std;

// a question of coding ninjas assignment

Node *kReverse(Node *head, int k)
{
    if (head == NULL || k == 0)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *next;

    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL)
    {
        head->next = kReverse(curr, k);
    }

    return prev;
}

int main()
{
    Node *head = takeInput();

    print(head);
    int k;

    cout << "Reverse by value : ";
    cin >> k;

    head = kReverse(head, k);

    print(head);
    return 0;
}