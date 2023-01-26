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

    // taking edges
    for (int i = 0; i < e; i++)
    {
        int f, s, w;
        cin >> f >> s >> w;
        edges[f][s] = w;
        edges[s][f] = w;
    }

    bool *visited = new bool[n];
    int *weights = new int[n];
    int *parent = new int[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
        weights[i] = INT32_MAX;
        parent[i] = -1;
    }

    int count = 0;
    weights[0] = 0;
    int prntvertex = -1; // this will remember the parent when we visit next vertex
    for (int j = 0; j < n - 1; j++)
    {
        // pick minimum weight vertex among the unvisited
        int current;
        int min_weight = INT32_MAX;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && weights[i] < min_weight)
            {
                current = i;
                min_weight = weights[i];
            }
        }

        // picked, visit that vertex now and mark visited
        visited[current] = true;
        prntvertex = current;

        //
        for (int i = 0; i < n; i++)
        {
            if (!visited[i] && edges[i][current] != 0)
            {
                if (weights[i] > edges[current][i])
                {
                    weights[i] = edges[current][i];
                    parent[i] = current;
                }
                // cout << "I came here when current was " << current << " and this vertex is " << i << endl;
            }
        }
    }

    // make new output edges by vertex and parent combinations
    int **outputEdges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        outputEdges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            outputEdges[i][j] = 0;
        }
    }

    for (int i = 1; i < n; i++)
    {
        outputEdges[i][parent[i]] = edges[i][parent[i]];
    }

    // printing

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (outputEdges[i][j] != 0)
            {
                cout << min(i, j) << " " << max(i, j) << " " << outputEdges[i][j] << endl;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
        delete[] outputEdges[i];
    }

    delete[] edges;
    delete[] outputEdges;
    return 0;
}