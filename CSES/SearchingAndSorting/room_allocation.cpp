#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>
#include <map>
#include <queue>

// insert function in map not working

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> customers; //{{arr,dep},index}

    FOR(i, 0, n)
    {
        int arr, dep;
        cin >> arr >> dep;
        customers.pb({{arr, dep}, i});
    }

    sort(customers.begin(), customers.end());

    vi roomAssigned(n, -1);

    int roomId = 1;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> rooms;

    for (int i = 0; i < n; i++)
    {
        if (rooms.size() == 0)
        {
            roomAssigned[customers[i].second] = roomId++;
            rooms.push(make_pair(customers[i].first.second, roomId - 1));
        }
        else
        {
            if (rooms.top().first < customers[i].first.first)
            {
                roomAssigned[customers[i].second] = rooms.top().second;
                pair<int, int> x = rooms.top();
                rooms.pop();
                rooms.push(make_pair(customers[i].first.second, x.second));
            }
            else
            {
                roomAssigned[customers[i].second] = roomId++;
                rooms.push(make_pair(customers[i].first.second, roomId - 1));
            }
        }
    }

    cout << rooms.size() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << roomAssigned[i] << " ";
    }
    return 0;
}