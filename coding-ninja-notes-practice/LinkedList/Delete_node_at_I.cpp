#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main()
{
    Node *head = takeInput();

    print(head);

    int pos;
    cout << "pos to delete : ";
    cin >> pos;

    head = deleteNode(head, pos);
    print(head);

    return 0;
}