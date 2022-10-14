#include <iostream>
#include <queue>

using namespace std;

// k sorted array is an array jisme hmaara array sorted tha pr hmne hrek element ko k-1 unit left ya right
// m shift kr diya sorted array m uski exact position se, waise to hm ise nlogn time m fir se sort kr skte h
// pr hm chahte h ki hme jo condition given h uska use krke time compl. ghataayi jaa ske

/*Approach
- agr k 3 h aur hme array reverse order m chahiye, to iska mtlb hmaara maximum element hmaare pehle 3 elements
m se hi ek hoga, jb hm maximum element ko 1st pos pe rkh denge to hmaara 2nd maximum next 3 m se maximum hoga

 Hm ek priority queue le lenge usme pehle k elements daal denge , uske baad usme se elements nikaalna shuru
 krenge, ab hr baar ek element nikaalke new sorted array m push kr denge, pq m se usey pop kr denge aur k+1
 element daal denge
*/

void kSortedArray(int input[], int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(input[i]);
    }

    int j = 0;
    for (int i = k; i < n; i++)
    {
        input[j] = pq.top();
        pq.pop();
        pq.push(input[i]);
        j++;
    }

    while (!pq.empty())
    {
        input[j] = pq.top();
        pq.pop();
        j++;
    }
}

int main()
{
    int input[] = {10, 12, 6, 7, 9};
    int k = 3;
    kSortedArray(input, 5, k);
    for (auto cs : input)
    {
        cout << cs << " ";
    }
    cout << endl;
    return 0;
}