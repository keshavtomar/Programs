#include <iostream>
#include "pairUsingTemplate.cpp"

using namespace std;

int main()
{
    Pair<int, double> p;
    p.setX(65.4);
    p.setY(55);

    cout << p.first() << endl;

    Pair<char, double> temp;
    temp.setX('c');
    temp.setY(5.33);

    Pair<int, Pair<char, double>> p1;
    p1.setX(2);
    p1.setY(temp);

    cout << p1.first() << " " << p1.second().first() << " " << p1.second().second() << endl;

    return 0;
}