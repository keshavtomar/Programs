#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

/*
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks.
The objective of the puzzle is to move all disks from source rod to destination rod
using third rod (say auxiliary). The rules are :
1) Only one disk can be moved at a time.
2) A disk can be moved only if it is on the top of a rod.
3) No disk can be placed on the top of a smaller disk.
*/

void shift(char from, char to, int n, char Auxiliary)
{
    if (n == 0)
    {
        return;
    }

    if (n == 1)
    {
        cout << from << " " << to << endl;
        return;
    }

    shift(from, Auxiliary, n - 1, to);

    shift(from, to, 1, Auxiliary);

    shift(Auxiliary, to, n - 1, from);
}

int main(void)
{
    int n;
    char Source, Auxiliary, Destination;

    cout << "Give the character names for the source, auxiliary and Destination bars" << endl;
    cin >> Source >> Auxiliary >> Destination;

    cout << "Give the no of disks to transfer : ";
    cin >> n;

    shift(Source, Destination, n, Auxiliary);
}