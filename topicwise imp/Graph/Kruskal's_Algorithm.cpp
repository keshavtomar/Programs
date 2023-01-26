#include <iostream>
#include <algorithm>

using namespace std;

class Edge
{
public:
    int source;
    int destination;
    int weight;

    Edge()
    {
    }

    Edge(int s, int d, int w)
    {
        this->source = s;
        this->destination = d;
        this->weight = w;
    }
};

int checkparent(int c, int *parent)
{
    while (c != parent[c])
    {
        c = parent[c];
    }
    return c;
}

bool comparator(Edge a, Edge b)
{
    if (a.weight < b.weight)
    {
        return true;
    }
    return false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    Edge *input = new Edge[e];

    cout << "Enter edges in the format source, destination, weight : " << endl;
    for (int i = 0; i < e; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        input[i] = Edge(s, d, w);
    }

    Edge *output = new Edge[n - 1];

    // sorting input edges on the basis of their weight

    sort(input, input + e, comparator);

    int *parent = new int[n];

    // initialising parent array
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }

    int count = 0;
    int k = 0;
    while (count < n - 1)
    {
        Edge x = input[k];
        int P1 = checkparent(x.source, parent);
        int P2 = checkparent(x.destination, parent);
        if (P1 == P2)
        {
            // k is increment so to check next input, mtlb ki iss input edge se to cycle bn rhi h, ab next dekho
            // continue kiya gya h jisse ki, count increment na ho
            k++;
        }
        else
        {
            output[count] = x;
            parent[x.source] = parent[x.destination];
            k++;
            count++;
        }
    }

    // printing

    for (int i = 0; i < n - 1; i++)
    {
        cout << output[i].source << " " << output[i].destination << " " << output[i].weight << endl;
    }

    return 0;
}