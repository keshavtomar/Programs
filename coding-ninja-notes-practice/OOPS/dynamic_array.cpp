#include <iostream>
#include "dynamic_array_class.cpp"

using namespace std;

int main()
{
    DynamicArray d1;
    d1.push_back(5);
    d1.push_back(6);
    d1.push_back(11);
    d1.push_back(1);
    d1.push_back(65);
    d1.push_back(3);

    DynamicArray d2(d1);

    d1.print();

    d1.change(2, 13);
    d2.print();
    return 0;
}