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

Position findLocation(List L, ElementType x)
{

}
