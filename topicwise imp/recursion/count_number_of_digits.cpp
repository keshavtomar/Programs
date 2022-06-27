#include <iostream>

using namespace std;

int count(int n)
{
    // write your code here
    if (n < 10)
    {
        return 1;
    }
    int smallOutput = count(n / 10);
    return (smallOutput + 1);
}

int main()
{
    int n;
    cin >> n;

    cout << count(n) << endl;
}
