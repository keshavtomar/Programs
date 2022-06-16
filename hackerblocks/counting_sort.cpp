#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{

   //learn counting sort and implementation of counting sort from youtube before reviewing this code

    int n;
    cin >> n;
    int a[1000];
    int count[1000];
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[j] == i)
            {
                count[i]++;
            }
        }
    }

    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = max; i > 0; i--)
    {
        count[i] = count[i - 1];
    }

    for (int i = 0; i <= max; i++)
    {
        if(i==max){
            for(int j=count[i]; j<n; j++){
                a[j]=i;
            }
        }
        else if (count[i] == count[i + 1])
        {
            continue;
        }
        else
        {
            for (int j = count[i]; j < count[i + 1]; j++)
            {
                a[j] = i;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}