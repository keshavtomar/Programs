#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    // to find the unpaired element in the array, if only one unpaired element exist(make sure)

    int a[9] = {1, 4, 3, 6, 7, 3, 7, 1, 4};

    string st = "keshahsek";

    int unpaired = 0;
    for (int i = 0; i < 9; i++)
    {
        unpaired = (unpaired ^ a[i]);
    }
    cout << unpaired << endl;

    char unpairedChar = 0;
    for (int i = 0; i < 9; i++)
    {
        unpairedChar = (unpairedChar ^ st[i]);
    }
    cout << unpairedChar << endl;
}