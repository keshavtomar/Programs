#include <iostream>
#include <vector>

using namespace std;

#include <vector>

class PriorityQueue
{
    vector<int> pq;

public:
    PriorityQueue()
    {
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element)
    {
        pq.push_back(element);
        int childIndex = pq.size() - 1;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (pq[parentIndex] < pq[childIndex])
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
    int getMax()
    {
        if (isEmpty())
        {
            return 0; // queue is empty
        }
        return pq[0];
    }

    int removeMax()
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
            int maxIndex;
            if (LCI > lastIndex && RCI > lastIndex)
            {
                break;
            }
            else if (LCI <= lastIndex && RCI <= lastIndex)
            {
                int mx = max(pq[parentIndex], max(pq[LCI], pq[RCI]));
                if (mx == pq[parentIndex])
                {
                    break;
                }
                else if (mx == pq[LCI])
                {
                    swap(pq[parentIndex], pq[LCI]);
                    maxIndex = LCI;
                }
                else
                {
                    swap(pq[parentIndex], pq[RCI]);
                    maxIndex = RCI;
                }
            }
            else
            {
                int mx = max(pq[parentIndex], pq[LCI]);
                if (mx == pq[parentIndex])
                {
                    break;
                }
                else
                {
                    swap(pq[parentIndex], pq[LCI]);
                    maxIndex = LCI;
                }
            }

            parentIndex = maxIndex;
        }
        return x;
    }

    int getSize()
    {
        return pq.size();
    }

    bool isEmpty()
    {
        return pq.size() == 0;
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
    pq.insert(8);
    pq.insert(5);
    pq.insert(1);
    pq.insert(125);
    pq.insert(16);
    pq.print();
    pq.removeMax();
    pq.removeMax();
    pq.print();
    return 0;
}