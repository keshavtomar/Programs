#include <iostream>
#include <queue>
#include <map>

using namespace std;

void printBFS(int **edges, int n, int sv, bool *visited, int v2)
{
    queue<int> q;
    q.push(sv);
    visited[sv] = true;
    map<int, int> myparent;
    myparent[sv] = -1;
    bool found = false;
    while (!q.empty())
    {
        int x = q.front();
        if (x == v2)
        {
            found = true;
        }
        q.pop();
        for (int i = 0; i < n; i++)
        {
            if (edges[x][i] == 1 && !visited[i])
            {
                myparent[i] = x;
                q.push(i);
                visited[i] = true;
            }
        }
    }
    if (!found)
    {
        return;
    }
    else
    {
        do
        {
            cout << v2 << " ";
            v2 = myparent[v2];
        } while (v2 != -1);
    }
}

void BFS(int **edges, int n, int v1, int v2)
{
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            printBFS(edges, n, v1, visited, v2);
        }
    }

    delete[] visited;
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
    BFS(edges, n, v1, v2);
    return 0;
}