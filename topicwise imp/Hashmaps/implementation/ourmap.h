/* we have to fix the key because we want to make a hashfunction for that, so for sake of convenience let's take key
  as string and value is generic(means having no fixed datatype, datatype will be given by user)*/

#include <string>
using namespace std;
template <typename V>
// mapnode is the linkedlist type node that is to be stored in the array

class MapNode
{
public:
    string key;
    V value;
    MapNode *next;

    // constructor
    MapNode(string key, V value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~MapNode()
    {
        delete next;
    }
}

template <typename V>

class ourmap
{
    MapNode<V> **buckets;
    int size;
    int numBuckets;

public:
    outmap()
    {
        size = 0;
        numBuckets = 5;
        buckets = new MapNode<V> *[numBuckets];
        for (int i = 0; i < numBuckets; i++)
        {
            buckets[i] = NULL;
        }
    }

    ~ourmap()
    {
        for (int i = 0; i < numBuckets; i++)
        {
            delete buckets[i];
        }
        delete[] buckets;
    }

    int size()
    {
        return count;
    }

    V getValue(string key)
    {
    }

    V remove(string key)
    {
    }
}