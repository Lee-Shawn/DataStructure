#include <stdio.h>
#include <stdlib.h>
#include "SequenceList.h"

/**
* 初始化
*/
List makeEmpty()
{
    List L;

    L = (List)malloc(sizeof(struct Node));
    L->last = -1;

    return L;
}

/**
* 查找元素的位置
*/
Position findLocation(List L, ElementType x)
{
    Position i = 0;

    while (i <= L->last && L->data[i] != x)
        i++;

    if (i > L->last)
        return ERROR;
    else
        return i;
}
