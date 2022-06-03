#include <iostream>
#include <algorithm>

using namespace std;

typedef struct treedetail
{
    int x; // coordinate
    int h; // height
} treedetail;

int main(void)
{
    int n;
    cin >> n;
    treedetail tree[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> tree[i].x >> tree[i].h;
    }
    int fall;
    if (n <= 2)
    {
        fall = n;
        goto end;
    }
    fall = 2;
    for (int i = 1; i < n - 1; i++) // hme maximum trees giraane h, to pehle tree ko hum left m gira denge
    {
        if (tree[i].h < (tree[i].x - tree[i - 1].x))
        { // iss case m wo left m gir jaayega
            fall++;
            // cout << i + 1 << " fell to left" << endl;
        }
        else if (tree[i].h < (tree[i + 1].x - tree[i].x))
        { // iss case m uska right m girna possible h
            fall++;
            // cout << i + 1 << " fell to right" << endl;
            tree[i].x = tree[i].x + tree[i].h; // hum maan lenge ki jo tree right m fall hua h, usne apna coordinate change krke wo kr liya h, jaha tk wo gira h, isse hum agle tree ka left-fall check krne m asaani hogi
        }
    }
end:
    cout << fall << endl;
}