#include <iostream>

using namespace std;

template <typename T>

class DynamicQueueUsingArray
{
    T *data;
    int frontIndex;
    int size;
    int nextIndex;
    int cap;

public:
    DynamicQueueUsingArray()
    {
        data = new T[5];
        frontIndex = 0;
        nextIndex = 0;
        this->size = 0;
        cap = 5;
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

        // if our queue is full let's first increase the size
        if (size == cap)
        {
            T *newData = new T[cap * 2];
            // copying previous elements with extra care
            for (int i = 0; i < cap; i++)
            {
                newData[i] = data[(frontIndex + i) % cap];
            }

            nextIndex = cap;
            frontIndex = 0;
            cap *= 2;

            delete[] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
        nextIndex %= cap; // if we get to the last it will comeback to first
        size++;
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
