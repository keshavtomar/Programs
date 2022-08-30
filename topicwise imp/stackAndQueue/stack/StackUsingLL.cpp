#include <iostream>
using namespace std;

template <typename T>

class Node
{
public:
    T data;
    Node *next;

    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename V>
class Stack
{
    Node<V> *topp;
    int size;

public:
    Stack()
    {
        topp = NULL;
        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return topp == NULL;
    }

    void push(V element)
    {
        Node<V> *x = new Node<V>(element);
        x->next = topp;
        topp = x;
        size++;
    }

    V pop()
    {
        if (this->isEmpty())
        {
            return -1;
        }
        Node<V> *x = topp;
        topp = topp->next;
        size--;
        return x->data;
    }

    V top()
    {
        if (this->isEmpty())
        {
            return -1;
        }
        return topp->data;
    }
};