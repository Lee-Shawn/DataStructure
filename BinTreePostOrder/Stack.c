#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

Stack createStack(int maxSize)
{
    Stack s = (Stack)malloc(sizeof(struct SNode));
    s->data = (ElementType *)malloc(maxSize * sizeof(ElementType));
    s->top = -1;
    s->maxSize = maxSize;

    return s;
}

int push(Stack s)
{

}

ElementType pop(Stack s)
{

}


