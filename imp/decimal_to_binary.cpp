#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    //variables used are x, i, count, reverse and binary_value

    int x;
    cin >> x;
    int reverse[35];
    int i = 0;
    int count = 0;
    while (x)
    {
        reverse[i] = x % 2;
        x /= 2;
        i++;
        count++;
    }
    int binary_value[35];
    for (int j = count - 1, k = 0; j >= 0; j--, k++)
    {
        binary_value[j] = reverse[k];
    }

    for (int j = 0; j < count; j++)
    {
        cout << binary_value[j];
    }

    // the array binary_value has the numbers stored from 0 to <count, which is the binary conversion of the number x you type  18 -> 10010
    // while reverse is the mirror array of binary value, sometimes it is easier to use reverse array    18 -> 01001
}