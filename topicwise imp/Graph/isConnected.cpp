#include <iostream>
#include <queue>

using namespace std;

// this program is to check that the complete graph is connected or not
// approach, pick any vertex, start traversing via BFS or DFS, in the end check if the visited array is
// completely filled or not

bool isConnected(int **edges, int n)
{
    int *visited = new int[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    queue<int> q;
    q.push(0);
    visited[0] = 1;
    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && edges[f][i] == 0)
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            return false;
        }
    }
    return true;
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

    bool ans = isConnected(edges, n);
    if (ans)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}