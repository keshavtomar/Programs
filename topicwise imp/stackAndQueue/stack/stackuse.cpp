#include <iostream>
#include "DynamicStackUsingArray.cpp"

using namespace std;

int main()
{
    DynamicStackUsingArray<char> s;

    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);
    s.push(105);

    cout << "Popped value: " << s.pop() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}