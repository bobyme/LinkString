//
//  LinkString.h
//  LinkString
//
//  Created by CS Wu on 2015/1/1.
//  Copyright (c) 2015年 CS Wu. All rights reserved.
//

#ifndef __LinkString__LinkString__
#define __LinkString__LinkString__


typedef struct _node Node;

struct _node
{
    void* data;
    Node *previous;
    Node *next;
};

typedef struct _linkedlist
{
    Node* head;
    Node* tail;
    Node* current;
}LinkedList;

#endif /* defined(__LinkString__LinkString__) */
