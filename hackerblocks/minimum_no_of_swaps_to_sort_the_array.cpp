#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;

    for (int j = 0; j < n; j++)
    {
        int smallest = a[j];
        int index = j;
        for (int i = j + 1; i < n; i++)
        {
            if (a[i] < smallest)
            {
                smallest = a[i];
                index = i;
            }
        }
        if (index != j)
        {
            int temp = a[j];
            a[j] = a[index];
            a[index] = temp;
            // cout << "for j = " << j << endl;
            count++;
        }
    }
    cout << count << endl;
}