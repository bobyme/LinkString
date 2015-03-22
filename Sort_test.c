//
//  Sort_test.c
//  LinkString
//
//  Created by CS Wu on 2015/1/1.
//  Copyright (c) 2015年 CS Wu. All rights reserved.
//
#include "LinkString.h"
#include "Sort_test.h"
#include "Sort.h"
#include <stdio.h>


void creat_int_array(node** head,int n)
{
    node* tempnode = NULL;
    node* ptrnode;
   
    tempnode = *head;
    for(int i=1;i<n;i++)
    {
        ptrnode = (node*) malloc(sizeof(node));
        add_node_int(tempnode,ptrnode,rand());
        tempnode = ptrnode;
    }
}

/*
void sort_test_one_asc(bubble_sort sort, int n )
{
    int i=0;
    void** array = creat_int_array(n);
    sort(array, n, cmp_int, swap_int);
    for(i = 1; i < n; i++)
    {
        assert(array[i] >= array[i-1] );
    }
    free(array);
    return;
}

void sort_test(bubble_sort sort)
{
    int i = 0;
    for(i = 0; i < 1000; i++)
    {
        sort_test_one_asc(sort,i);
    }
}
*/

