#include <iostream>
#include <queue>
using namespace std;

bool hasPath(int **edges, int n, int v1, int v2)
{
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    queue<int> q;
    q.push(v1);
    visited[v1] = true;
    while (!q.empty())
    {
        int x = q.front();
        if (x == v2)
        {
            return true;
        }
        q.pop();
        for (int i = 0; i < n; i++)
        {
            if (edges[x][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
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

    if (hasPath(edges, n, v1, v2))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}