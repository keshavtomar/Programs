#include <iostream>
#include <fstream>
#include <map>
#include <queue>

using namespace std;

struct MinheapNode
{
    char data;
    int freq;
    MinheapNode *left, *right;

    // constructor
    MinheapNode(char data, int freq)
    {
        this->data = data;
        this->freq = freq;
        left = right = NULL;
    }
};

struct compare
{
    bool operator()(MinheapNode *l, MinheapNode *r)

    {
        return (l->freq > r->freq);
    }
};

void printCodes(MinheapNode *root, string str)
{

    if (!root)
        return;

    if (root->data != '$')
        cout << root->data << ": " << str << "\n";

    printCodes(root->left, str + "0");
    printCodes(root->right, str + "1");
}

// The main function that builds a Huffman Tree and
// print codes by traversing the built Huffman Tree
void HuffmanCodes(char data[], int freq[], int size)
{
    struct MinheapNode *left, *right, *top;

    // Create a min heap & inserts all characters of data[]
    priority_queue<MinheapNode *, vector<MinheapNode *>, compare> minHeap;

    for (int i = 0; i < size; ++i)
    {
        minHeap.push(new MinheapNode(data[i], freq[i]));
    }

    // Iterate while size of heap doesn't become 1
    while (minHeap.size() != 1)
    {

        // Extract the two minimum
        // freq items from min heap
        left = minHeap.top();
        minHeap.pop();

        right = minHeap.top();
        minHeap.pop();

        // Create a new internal node with
        // frequency equal to the sum of the
        // two nodes frequencies. Make the
        // two extracted node as left and right children
        // of this new node. Add this node
        // to the min heap '$' is a special value
        // for internal nodes, not used
        top = new MinheapNode('$', left->freq + right->freq);

        top->left = left;
        top->right = right;

        minHeap.push(top);
    }

    // Print Huffman codes using
    // the Huffman tree built above
    printCodes(minHeap.top(), "");
}

int main()
{
    ifstream in;
    in.open("file.txt");

    string st;

    string completefile;
    while (in.eof() == 0)
    {
        // using getline to fill the whole line in st
        getline(in, st);
        completefile += st;
        completefile += '\n';
    }

    completefile.pop_back();
    // cout << completefile << endl;

    map<char, int> freq;

    for (auto c : completefile)
    {
        freq[c]++;
    }

    for (auto key : freq)
    {
        cout << key.first << " " << key.second << endl;
    }

    // now make these present characters in a character array along with their frequencies

    int size = freq.size();
    char ch[size];
    int f[size];
    int i = 0;
    for (auto c : freq)
    {
        ch[i] = c.first;
        f[i] = c.second;
        i++;
    }

    HuffmanCodes(ch, f, size);

    return 0;
}