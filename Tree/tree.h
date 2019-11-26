#ifndef __TREE__H
#define __TREE__H

#include "stdio.h"
#include "stdlib.h"

//树节点
typedef struct node
{
    int data;
    struct node *left;  //节点左边的树枝
    struct node *right; //节点右边的树枝
} Node;

//树根
typedef struct tree
{
    Node *root;
} Tree;

void insert(Tree *tree, int value);
void traverse(Node *node);
void distory_tree(Node *node);

#endif