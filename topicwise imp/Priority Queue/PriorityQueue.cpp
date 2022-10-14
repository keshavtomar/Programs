#include <iostream>
#include <vector>

using namespace std;

class PriorityQueue
{
    vector<int> pq;
    int size = 0;

public:
    PriorityQueue()
    {
    }

    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int getSize()
    {
        return pq.size();
    }

    int getMin()
    {
        if (isEmpty())
        {
            return 0; // queue is empty
        }
        return pq[0];
    }

    void insert(int element)
    {
        pq.push_back(element);
        int childIndex = pq.size() - 1;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (pq[parentIndex] > pq[childIndex])
            {
                swap(pq[parentIndex], pq[childIndex]);
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }

    // this function is going to remove the minimum element and return the minimum
    int removeMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        int x = pq[0];
        int lastIndex = pq.size() - 1;
        swap(pq[0], pq[lastIndex]);
        pq.pop_back();

        lastIndex = pq.size() - 1;
        int parentIndex = 0;
        while (parentIndex <= lastIndex)
        {
            // left child index
            int LCI = 2 * parentIndex + 1;
            // right child index
            int RCI = 2 * parentIndex + 2;
            int minIndex;
            if (LCI > lastIndex && RCI > lastIndex)
            {
                break;
            }
            else if (LCI <= lastIndex && RCI <= lastIndex)
            {
                int mn = min(pq[parentIndex], min(pq[LCI], pq[RCI]));
                if (mn == pq[parentIndex])
                {
                    break;
                }
                else if (mn == pq[LCI])
                {
                    swap(pq[parentIndex], pq[LCI]);
                    minIndex = LCI;
                }
                else
                {
                    swap(pq[parentIndex], pq[RCI]);
                    minIndex = RCI;
                }
            }
            else
            {
                int mn = min(pq[parentIndex], pq[LCI]);
                if (mn == pq[parentIndex])
                {
                    break;
                }
                else
                {
                    swap(pq[parentIndex], pq[LCI]);
                    minIndex = LCI;
                }
            }

            parentIndex = minIndex;
        }
        return x;
    }

    void print()
    {
        for (auto cs : pq)
        {
            cout << cs << " ";
        }
        cout << endl;
    }
};

int main()
{
    PriorityQueue pq;
    pq.insert(12);
    pq.insert(6);
    pq.insert(5);
    pq.insert(100);
    pq.insert(1);
    pq.insert(9);
    pq.insert(0);
    pq.insert(14);
    pq.print();
    pq.removeMin();
    pq.print();
    return 0;
}
