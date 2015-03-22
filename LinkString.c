//
//  LinkString.c
//  LinkString
//
//  Created by CS Wu on 2015/1/1.
//  Copyright (c) 2015年 CS Wu. All rights reserved.
//

#include <stdio.h>
#include "LinkString.h"


//==========================================
typedef void (*printlist)(void* data);

void initializelist(LinkedList *list)
{
    list->current = NULL;
    list->head = NULL;
    list->tail = NULL;
}

void printlist_int(void* data)
{
    // print("the data is:%d",*(int*)data);
}

void printnode(void* data, printlist call_this)
{
    call_this(data);
}
//==========================================

void add_node(LinkedList *list,void data)
{
    // deal link
    Node* node = (Node*) malloc(sizeof(Node));
    (node->data) = data;
    **ptrnode->lnode=*curnode->lnode;
    *ptrnode->rnode=*curnode;
    *curnode->lnode->rnode=*ptrnode;
    *curnode->lnode=*ptrnode;
    
    *ptrnode->data = data;
    printf("the data is:%d",*ptrnode->data);
}
//==========================================