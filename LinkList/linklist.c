#include "linklist.h"

void list_init(LinkList *linklist)
{
    linklist->head = NULL;
    linklist->end = NULL;
    linklist->length = 0;
}

void list_append(LinkList *linklist, int x, int y)
{
    Node *pnode = (Node *)malloc(sizeof(Node));
    pnode->lx = x;
    pnode->ly = y;
    pnode->next = NULL;

    if (linklist->head == NULL)
    {
        linklist->head = pnode;
        linklist->end = pnode;
    }
    else
    {
        linklist->end->next = pnode;
        linklist->end = pnode;
    }
    linklist->length += 1;
}

void list_distory(LinkList *linklist)
{
    Node *node = linklist->head;
    while (node != NULL)
    {
        Node *next_node = node->next;
        free(node);
        node = next_node;
    }
    linklist->end = NULL;
    linklist->length = 0;
}