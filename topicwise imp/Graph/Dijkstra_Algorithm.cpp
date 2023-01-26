#include <iostream>

using namespace std;

int minimumDistanceIndex(bool *visited, int *distance, int n)
{
    int minimumdistance = INT32_MAX;
    int minimumdistanceIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && distance[i] < minimumdistance)
        {
            minimumdistanceIndex = i;
            minimumdistance = distance[i];
        }
    }

    return minimumdistanceIndex;
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

    // taking edges
    for (int i = 0; i < e; i++)
    {
        int f, s, w;
        cin >> f >> s >> w;
        edges[f][s] = w;
        edges[s][f] = w;
    }

    bool *visited = new bool[n];
    int *distance = new int[n];

    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
        distance[i] = INT32_MAX;
    }
    distance[0] = 0;

    for (int i = 0; i < n; i++)
    {
        // choosing the unvisited vertex with minimum distance
        int current = minimumDistanceIndex(visited, distance, n);

        visited[current] = true;

        // checking the distance of it's unvisited adjacent vertex, and updating if visiting from current distance is less
        for (int j = 0; j < n; j++)
        {
            if (!visited[j] && edges[current][j] != 0)
            {
                distance[j] = min(distance[j], distance[current] + edges[current][j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " " << distance[i] << endl;
    }

    return 0;
}