//
//  Sort.h
//  LinkString
//
//  Created by CS Wu on 2015/1/1.
//  Copyright (c) 2015年 CS Wu. All rights reserved.
//

#ifndef __LinkString__Sort__
#define __LinkString__Sort__

typedef int (*Data_Comp)(void* a, void* b);
typedef void (*Data_Swap)(void* a, void* b);
typedef void (*bubble_sort)(void** array, int nr, Data_Comp cmp, Data_Swap swap);

int cmp_int(void* a, void* b);
void swap_int(void* ori, void* dest);
#endif /* defined(__LinkString__Sort__) */
