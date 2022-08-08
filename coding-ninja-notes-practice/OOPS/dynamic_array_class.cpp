#include <iostream>
using namespace std;

class DynamicArray
{
    int *data;
    int capacity;
    int nextIndex;

public:
    DynamicArray()
    {
        this->data = new int[5];
        capacity = 5;
        nextIndex = 0;
    }

    void push_back(int element)
    {
        if (nextIndex == capacity)
        {
            int *newData = new int[2 * capacity];
            for (int i = 0; i < nextIndex; i++)
            {
                newData[i] = data[i];
            }
            delete[] data;

            data = newData;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int at(int index)
    {
        if (index < nextIndex)
        {
            return data[index];
        }
        return -1;
    }

    void print() const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout<<endl;
    }

    // remember default copy constructor, and copy assignment operator do shallow copy, so to
    // make deep copy we have to make our own constructor and operator overloading

    DynamicArray(DynamicArray const &d)
    {
        this->data = new int[d.capacity];
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        for (int i = 0; i < nextIndex; i++)
        {
            data[i] = d.data[i];
        }
    }

    // copy assignment operator

    void operator=(DynamicArray const &d)
    {
        this->data = new int[d.capacity];
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        for (int i = 0; i < nextIndex; i++)
        {
            data[i] = d.data[i];
        }
    }

    void change(int ind, int element){
        if(ind<nextIndex){
            data[ind]=element;
        }
        else{
            return;
        }
    }
};
