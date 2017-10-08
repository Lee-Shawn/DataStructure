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

int push(Stack s, ElementType x)
{
    if (isFull(s))
    {
        printf("栈已满！\n");
        return 0;
    }
    else
    {
        s->data[++(s->top)] = x;
        return 1;
    }
}

ElementType pop(Stack s)
{
    if (isEmpty(s))
    {
        printf("栈为空！\n");
        return 0;
    }
    else
    {
        return s->data[(s->top)--];
    }
}

int isEmpty(Stack s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}

int isFull(Stack s)
{
    if (s->top == s->MaxSize-1)
        return 1;
    else
        return 0;
}
