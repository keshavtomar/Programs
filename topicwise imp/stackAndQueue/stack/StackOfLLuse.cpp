#include <iostream>
#include "StackUsingLL.cpp"

using namespace std;

int main()
{
    Stack<int> st;
    st.push(5);
    st.push(3);
    st.push(33);
    cout << st.getSize() << endl;

    cout << st.pop() << endl;

    cout << st.getSize();

    return 0;
}