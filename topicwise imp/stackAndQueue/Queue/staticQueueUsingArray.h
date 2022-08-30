#include <iostream>

using namespace std;

template <typename T>

class QueueUsingArray
{
    T *data;
    int frontIndex;
    int size;
    int nextIndex;
    int cap;

public:
    QueueUsingArray(int s)
    {
        data = new T[s];
        frontIndex = 0;
        nextIndex = 0;
        this->size = 0;
        cap = s;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(T element)
    {
        if (size == cap)
        {
            cout << "Queue Full" << endl;
        }
        else
        {
            data[nextIndex] = element;
            nextIndex++;
            nextIndex %= cap; // if we get to the last it will comeback to first
            size++;
        }
    }

    T front()
    {
        if (size == 0)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        return data[frontIndex];
    }

    T dequeue()
    {
        if (size == 0)
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        T x = data[frontIndex];
        frontIndex = (frontIndex + 1) % cap;
        size--;
        return x;
    }
};
