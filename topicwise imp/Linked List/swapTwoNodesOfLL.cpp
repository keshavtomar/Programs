#include <iostream>
#include "LinkedList.cpp"

using namespace std;

Node *swapNodes(Node *head, int a, int b)
{
    int i = min(a, b);
    int j = max(a, b);

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *previ = NULL;
    Node *ni = head;

    while (i--)
    {
        previ = ni;
        ni = ni->next;
    }

    Node *prevj = NULL;
    Node *nj = head;

    while (j--)
    {
        prevj = nj;
        nj = nj->next;
    }

    Node *njn = nj->next;

    if (previ == NULL)
    {
        if (ni->next == nj)
        {
            ni->next = nj->next;
            head = nj;
            nj->next = ni;

            return head;
        }

        head = nj;

        nj->next = ni->next;

        prevj->next = ni;

        ni->next = njn;

        return head;
    }

    if (ni->next == nj)
    {
        ni->next = nj->next;
        previ->next = nj;
        nj->next = ni;

        return head;
    }
    previ->next = nj;

    nj->next = ni->next;

    prevj->next = ni;

    ni->next = njn;

    return head;
}

int main()
{
    Node *head = takeInput();
    print(head);

    int a, b;

    cout << "Nodes to swap : ";
    cin >> a >> b;

    head = swapNodes(head, a, b);

    print(head);

    return 0;
}