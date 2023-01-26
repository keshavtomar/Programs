#include <iostream>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }

    int f, s;
    for (int i = 0; i < e; i++)
    {
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (edges[i][j] == 0)
            {
                continue;
            }
            // now if code comes here there is a edges between i and j
            for (int k = 0; k < n; k++)
            {
                if (edges[j][k] == 0 || k == i)
                {
                    continue;
                }

                // if code comes here there is a edge between i-j and j-k, just check if there is a edge i-k
                if (edges[i][k] == 1)
                {
                    count++;
                }
            }
        }
    }

    cout << count / 6;
}