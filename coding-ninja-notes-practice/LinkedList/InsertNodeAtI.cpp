#include <iostream>
#include "LinkedList.cpp"

using namespace std;


int main()
{
    Node *head = takeInput();

    print(head);

    int x, pos;
    cout << "Element to insert : ";
    cin >> x;
    cout << "pos : ";
    cin >> pos;

    head = InsertAtI(head, x, pos);

    print(head);

    return 0;
}