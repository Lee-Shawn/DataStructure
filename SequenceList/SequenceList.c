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

/**
* 插入元素
*/
bool insertElement(List L, ElementType x, Position p)
{
    int i;

    if (L->last == MAXSIZE-1)
    {
        printf("线性表已满！\n");
        return false;
    }
    if (p < 1 || p > L->last+1)
    {
        printf("插入的位置不合法！\n");
        return false;
    }

    // 从最后一个元素开始往后移一位，直到要插入的位置
    for (i = L->last; i > p; i--)
    {
        L->data[i+1] = L->data[i];
    }
    // 赋值给新插入的位置
    L.data[p] = x;
    // 顺序表指向新的最后的元素，表长加一
    L.last++;

    return true;
}

/**
* 删除元素
*/
bool deleteElement(List L, Position p)
{
    int i;

    if (p < 0 || p > L->last)
    {
        printf("要删除的位置%d不存在\n", p);
        return false;
    }

    // 把p后面的元素向前移动
    for (i = p+1; i < L->last; i++)
    {
        L.data[i-1] = L.data[i];
    }
    L->last--;

    return true;
}
