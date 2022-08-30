#include <iostream>

using namespace std;

class StackUsingArray
{
    int *data;
    int nextIndex;
    int cap;

public:
    StackUsingArray(int totalsize)
    {
        data = new int[totalsize];
        nextIndex = 0;
        cap = totalsize;
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

    void push(int x)
    {
        if (nextIndex == cap)
        {
            cout << "Stack full, cannot push" << endl;
            return;
        }
        data[nextIndex] = x;
        nextIndex++;
        return;
    }

    // delete the top element and also retrun that deleted element
    int pop()
    {
        if (nextIndex == 0)
        {
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int top()
    {
        if (this->isEmpty()) // we can also use nextindex==0
        {
            cout << "Stack is empty" << endl;
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};
