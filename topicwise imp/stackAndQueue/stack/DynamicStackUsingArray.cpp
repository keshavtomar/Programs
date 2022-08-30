#include <iostream>

using namespace std;

template <typename T>

class DynamicStackUsingArray
{
    T *data;
    int nextIndex;
    int cap;

public:
    DynamicStackUsingArray()
    {
        data = new T[4];
        nextIndex = 0;
        cap = 4;
    }

    // return the no of elements present in stack
    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    void push(T x)
    {
        if (nextIndex == cap)
        {
            T *newData = new T[2 * cap];
            // copying the old stack into new stack
            for (int i = 0; i < cap; i++)
            {
                newData[i] = data[i];
            }
            data = newData; // now our data pointer is pointing to new data
            cap *= 2;

            return;
        }
        data[nextIndex] = x;
        nextIndex++;
        return;
    }

    // delete the top element and also retrun that deleted element
    T pop()
    {
        if (nextIndex == 0)
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top()
    {
        if (this->isEmpty()) // we can also use nextindex==0
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }
};
