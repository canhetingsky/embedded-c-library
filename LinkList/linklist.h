#ifndef __LINKLIST__H
#define __LINKLIST__H

#include "stdio.h"

typedef struct st_node
{
    int lx;
    int ly;
    struct st_node *next;
} Node;

typedef struct st_linklist
{
    Node *head;
    Node *end;
    int length;
} LinkList;

void list_init(LinkList *linklist);
void list_append(LinkList *linklist, int x, int y);

#endif