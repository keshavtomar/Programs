#include <iostream>

using namespace std;

template <typename V>

class Node
{
public:
    V data;
    Node *next;

    Node(V data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class QueueUsingLL
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    QueueUsingLL()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void enqueue(T data)
    {
        Node *<T> x = new Node<T>(data);
        if (head == NULL)
        {
            head = x;
            tail = x;
        }
        else
        {
            tail->next = x;
            tail = tail->next;
        }
        size++;
        return;
    }

    T dequeue()
    {
        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        Node<T> *x = head;
        head = head->next;
        size--;
        return x->data;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    T front()
    {
        if (head == NULL)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        return head->data;
    }
};