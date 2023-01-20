#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> mergeKSortedArrays(vector<vector<int> *> input)
{

    vector<int> ans;
    int noOfArrays = input.size();
    vector<int> length(noOfArrays);

    int totalElements = 0;

    for (int i = 0; i < noOfArrays; i++)
    {
        length[i] = input[i]->size();
        totalElements += length[i];
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> index(noOfArrays, 0);

    for (int i = 0; i < noOfArrays; i++)
    {
        pq.push({input[i]->at(index[i]), i});
    }

    int it = 0;
    while (it < totalElements)
    {
        pair<int, int> x = pq.top();
        ans.push_back(x.first);

        pq.pop();
        it++;

        int j = x.second;

        // check which vector element is popedout

        index[j]++;
        if (index[j] == length[j])
        {
            input[j]->push_back(-1);
        }
        else
        {
            pq.push({input[j]->at(index[j]), j});
        }
    }

    return ans;
}

int main()
{
    return 0;
}