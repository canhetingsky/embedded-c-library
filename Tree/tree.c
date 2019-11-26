#include "tree.h"

//插入函数，向一个树里面插入数据
void insert(Tree *tree, int value)
{
    // 创建一个节点
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = value;
    node->left = NULL;
    node->right = NULL;

    //判断树是不是空树
    if (tree->root == NULL) //空树
    {
        tree->root = node;
        return;
    }

    //不是空树
    Node *temp = tree->root; //从树根开始
    while (temp != NULL)
    {
        if (value < temp->data) //小于就进左边子节点
        {
            if (temp->left == NULL)
            {
                temp->left = node;
                return;
            }
            else //继续判断
            {
                temp = temp->left;
            }
        }
        else //大于等于就进右边子节点
        {
            if (temp->right == NULL)
            {
                temp->right = node;
                return;
            }
            else //继续判断
            {
                temp = temp->right;
            }
        }
    }
}

//遍历一整颗树，中序遍历：先左后根再右
void traverse(Node *node)
{
    if (node != NULL)
    {
        traverse(node->left);
        printf("%d", node->data);
        traverse(node->right);
    }
}

//销毁一棵树
void distory_tree(Node *node)
{
    if (node != NULL)
    {
        distory_tree(node->left);
        distory_tree(node->right);
        printf("free node:%d\n", node->data);
        free(node);
        node = NULL;
    }
}