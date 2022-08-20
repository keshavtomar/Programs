#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
#include <list>
#include <cmath>
#include <cstring>
#include <set>

#define FOR(a, b, c) for (int a = b; a < c; a++)
#define ll long long int
#define pb push_back
#define pp pop_back
#define vi vector<int>

using namespace std;

/*Similar to the main problem, but to calculate all the sums, we applied a different approach,
which also goes in O(n^2) similar to dp
suppose the array is {3,1,6,6}
sort the array{1,3,6,6}, maintain a vector sums insert 0 initially in it, iterate through the array, and add new sums
in the sums vector as arr[i] + all the previous sums, ()
ex the vector sums in this array will be {0,1,3,4,6,7,9,10,12,13,15,16};
it will be better to maintain a set instead of vector
                                        {0,1+0=1,3+0=3,3+1=4,6+0=6,6+1=7,6+3=9,6+4=10,....}
*/

int minDifference(int arr[], int n)
{
    set<int> stt;
    stt.insert(0);
    sort(arr, arr + n);

    // cout << "here we go";

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;

        for (auto cs : stt)
        {
            temp.push_back(cs + arr[i]);
        }

        for (auto js : temp)
        {
            stt.insert(js);
        }
    }

    int totalsum = *stt.rbegin();

    int half = totalsum / 2;

    auto xs = stt.upper_bound(half);

    xs--;

    return totalsum - 2 * (*xs);
}

int main()
{
    int arr[] = {3, 1, 6, 6};
    cout << minDifference(arr, 4);
    return 0;
}