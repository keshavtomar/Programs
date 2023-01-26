#include <iostream>
using namespace std;

bool getPathDFS(int **edges, int n, int v1, int v2, bool *visited)
{
    visited[v1] = true;
    if (v1 == v2)
    {
        cout << v1 << " ";
        return true;
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && edges[v1][i] == 1)
        {
            bool ans = getPathDFS(edges, n, i, v2, visited);
            if (ans == true)
            {
                cout << v1 << " ";
                return true;
            }
        }
    }

    return false;
}

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

    int v1, v2;
    cin >> v1 >> v2;

    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    getPathDFS(edges, n, v1, v2, visited);
    return 0;
}