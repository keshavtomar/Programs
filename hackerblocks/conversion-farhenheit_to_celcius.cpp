#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int min, max, step;
    cin >> min >> max >> step;
    for (int i = min; i <= max; i = i + step)
    {
        int farhenheit = i;
        int celcius = (5 * (farhenheit - 32)) / 9;
        cout<<farhenheit<<" "<<celcius<<endl;
    }
}