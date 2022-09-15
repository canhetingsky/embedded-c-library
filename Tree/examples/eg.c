#include "tree.h"

int main(int argc, char const *argv[])
{
    int i, n;
    Tree *tree;
    tree->root = NULL;
    scanf("input total num:%d", &n);
    for (i = 0; i < n; i++)
    {
        int temp;
        scanf("%d", &temp);
        insert(tree, temp);
    }
    traverse(tree->root);
    distory_tree(tree->root);

    return 0;
}
