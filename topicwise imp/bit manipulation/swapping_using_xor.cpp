#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int a = 5, b = 9;
    a = (a ^ b);
    b = (a ^ b);
    a = (a ^ b);
    cout << "After Swapping: " << endl;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
}