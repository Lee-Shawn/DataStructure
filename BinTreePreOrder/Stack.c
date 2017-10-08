#include <stdio.h>
#include <stdlib.h>
#include "BinTree.h"
#include "Stack.h"

Stack createStack(int MaxSize)
{
    Stack s = (Stack)malloc(sizeof(struct SNode));
    s->data = (ElementType *)malloc(MaxSize * sizeof(ElementType));
    s->top = -1;
    s->MaxSize = MaxSize;

    return s;
}


