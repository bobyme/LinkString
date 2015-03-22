//
//  Sort.c
//  LinkString
//
//  Created by CS Wu on 2015/1/1.
//  Copyright (c) 2015年 CS Wu. All rights reserved.
//

#include "Sort.h"
#include "LinkString.h"
//==========================================
//typedef void (*printlist)(void* data);

/*

int cmp_int(void* a, void* b)
{
    int result = 0;
    if ((*(int*)a - *(int*)b)>0)
        return 1;
    else
        return 0;
}

void swap_int(void* ori, void* dest)
{
    int temp=*(int*)dest;
    *(int*)dest = *(int*)ori;
    *(int*)ori = temp;
}

void bubble_sort_int(node** array, int nr, Data_Comp cmp, Data_Swap swap)
{
    node* ptr = *array;
    for(int i=0;i <(nr-1);i ++)
    {
         for(int j=0;j<(nr-i-1);j++)
        {
            if(cmp(ptr->data, ptr->lnode->data))
            {
                swap(ptr->data,ptr->lnode->data);
            }
            ptr=ptr->lnode;
        }
    }
}
*/
