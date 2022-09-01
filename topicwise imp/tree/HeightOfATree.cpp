#include <iostream>
#include "treeNode.h"

using namespace std;

/*Sometimes in question a single node is considered as height one,
  while sometimes 1->2 this is height one(1->2->3   , has height 2), i prefer the first one, but we have to solve this acc to question if
  asked
*/

int getHeight(TreeNode<int> *root)
{
    int childrenMaxheight = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        childrenMaxheight = max(childrenMaxheight, getHeight(root->children[i]));
    }

    return childrenMaxheight + 1;
}

int main()
{
    return 0;
}