// a increasing array is in which the next element is greator or equal to the curr element
//  a monotonically increasing array is in which the next element is strictly greator than curr element
// A Bitonic Sequence is a sequence of numbers that is first strictly increasing then after a point decreasing.

#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back

using namespace std;

int maximumInBitonic(vector<int> &vc)
{
    int start = 0;
    int n = vc.size();
    int end = n - 1;
    if (vc[0] > vc[1])
    {
        return 0;
    }
    if (vc[n - 1] > vc[n - 2])
    {
        return n - 1;
    }

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (vc[mid - 1] < vc[mid] && vc[mid + 1] < vc[mid])
        {
            return mid;
        }
        else if (vc[mid - 1] < vc[mid])
        { // ek hi condition se kaam chl jaayega
            // go right
            start = mid + 1;
        }
        else
        {
            // go left
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> vc = {1, 2, 3, 4, 5, 12, 8, 5};
    int ind = maximumInBitonic(vc);

    cout << "index of maximum element is " << ind << endl;
    return 0;
}