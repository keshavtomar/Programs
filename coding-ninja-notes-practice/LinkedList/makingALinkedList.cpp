#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    // static memory allocation
    Node n1(5);
    Node *head = &n1;

    Node n2(10);
    n1.next = &n2;

    cout << head->data << " " << head->next->data << endl;

    // dynamic memory allocation
    Node *n3 = new Node(11);
    Node *head2 = n3;

    Node *n4 = new Node(22);
    n3->next = n4;                //address of next node has been put to previous node

    

    return 0;
}