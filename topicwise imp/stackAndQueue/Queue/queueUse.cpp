#include <iostream>
#include "DynamicQueueUsingArray.h"

using namespace std;

int main()
{
    DynamicQueueUsingArray<char> q;
    q.enqueue('k');
    q.enqueue('e');
    q.enqueue('s');
    q.enqueue('h');
    q.enqueue('a');
    q.enqueue('v');

    q.dequeue();
    q.dequeue();
    cout << q.front() << endl;
    cout << q.getSize();
    return 0;
}